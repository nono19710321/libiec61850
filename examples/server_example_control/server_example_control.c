/*
 *  server_example_control.c
 *
 *  How to use the different control handlers (TBD)
 */

#include "iec61850_server.h"
#include "thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include "static_model.h"

/* import IEC 61850 device model created from SCL-File */
extern IedModel iedModel;

static int running = 0;
static IedServer iedServer = NULL;

void
sigint_handler(int signalId)
{
    running = 0;
}

static CheckHandlerResult
checkHandler(void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck, ClientConnection connection)
{
    printf("check handler called!\n");

    if (interlockCheck)
        printf("  with interlock check bit set!\n");

    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO1)
        return CONTROL_ACCEPTED;

    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO2)
        return CONTROL_ACCEPTED;

    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO3)
        return CONTROL_ACCEPTED;

    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO4)
        return CONTROL_ACCEPTED;

    return CONTROL_OBJECT_UNDEFINED;
}

void
controlHandlerForBinaryOutput(void* parameter, MmsValue* value, bool test)
{
    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO1)
        IedServer_updateAttributeValue(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO1_stVal, value);

    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO2)
        IedServer_updateAttributeValue(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO2_stVal, value);

    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO3)
        IedServer_updateAttributeValue(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO3_stVal, value);

    if (parameter == IEDMODEL_GenericIO_GGIO1_SPCSO4)
        IedServer_updateAttributeValue(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO4_stVal, value);
}

int
main(int argc, char** argv)
{

    iedServer = IedServer_create(&iedModel);

    IedServer_setControlHandler(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO1,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_GenericIO_GGIO1_SPCSO1);

    IedServer_setControlHandler(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO2,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_GenericIO_GGIO1_SPCSO2);

    /* this is optional - performs operative checks */
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO2, checkHandler,
    IEDMODEL_GenericIO_GGIO1_SPCSO2);

    IedServer_setControlHandler(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO3,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_GenericIO_GGIO1_SPCSO3);

    IedServer_setControlHandler(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO4,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_GenericIO_GGIO1_SPCSO4);

    /* this is optional - performs operative checks */
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_GenericIO_GGIO1_SPCSO4, checkHandler,
    IEDMODEL_GenericIO_GGIO1_SPCSO4);

    /* MMS server will be instructed to start listening to client connections. */
    IedServer_start(iedServer, 102);

    if (!IedServer_isRunning(iedServer)) {
        printf("Starting server failed! Exit.\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    running = 1;

    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(1);
    }

    /* stop MMS server - close TCP server socket and all client sockets */
    IedServer_stop(iedServer);

    /* Cleanup - free all resources */
    IedServer_destroy(iedServer);
} /* main() */
