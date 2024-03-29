
set (lib_common_SRCS
./common/string_map.c
./common/array_list.c
./common/map.c
./common/linked_list.c
./common/byte_buffer.c
./common/string_utilities.c
./common/buffer_chain.c
./common/conversions.c
./common/mem_alloc_linked_list.c
./common/simple_allocator.c
./mms/iso_server/iso_connection.c
./mms/iso_server/iso_server.c
./mms/iso_acse/acse.c
./mms/iso_mms/common/mms_type_spec.c
./mms/iso_mms/common/mms_value.c
./mms/iso_mms/common/mms_common_msg.c
./mms/iso_mms/client/mms_client_initiate.c
./mms/iso_mms/client/mms_client_write.c
./mms/iso_mms/client/mms_client_identify.c
./mms/iso_mms/client/mms_client_status.c
./mms/iso_mms/client/mms_client_named_variable_list.c
./mms/iso_mms/client/mms_client_connection.c
./mms/iso_mms/client/mms_client_files.c
./mms/iso_mms/client/mms_client_get_namelist.c
./mms/iso_mms/client/mms_client_get_var_access.c
./mms/iso_mms/client/mms_client_common.c
./mms/iso_mms/client/mms_client_read.c
./mms/iso_mms/server/mms_read_service.c
./mms/iso_mms/server/mms_file_service.c
./mms/iso_mms/server/mms_association_service.c
./mms/iso_mms/server/mms_identify_service.c
./mms/iso_mms/server/mms_status_service.c
./mms/iso_mms/server/mms_named_variable_list_service.c
./mms/iso_mms/server/mms_value_cache.c
./mms/iso_mms/server/mms_get_namelist_service.c
./mms/iso_mms/server/mms_access_result.c
./mms/iso_mms/server/mms_server.c
./mms/iso_mms/server/mms_server_common.c
./mms/iso_mms/server/mms_named_variable_list.c
./mms/iso_mms/server/mms_domain.c
./mms/iso_mms/server/mms_device.c
./mms/iso_mms/server/mms_information_report.c
./mms/iso_mms/server/mms_server_connection.c
./mms/iso_mms/server/mms_write_service.c
./mms/iso_mms/server/mms_get_var_access_service.c
./mms/iso_cotp/cotp.c
./mms/iso_presentation/iso_presentation.c
./mms/asn1/ber_decode.c
./mms/asn1/asn1_ber_primitive_value.c
./mms/asn1/ber_encoder.c
./mms/asn1/ber_integer.c
./mms/iso_client/impl/iso_client_connection.c
./mms/iso_common/iso_connection_parameters.c
./mms/iso_session/iso_session.c
./iedclient/impl/client_control.c
./iedclient/impl/client_report_control.c
./iedclient/impl/client_report.c
./iedclient/impl/ied_connection.c
./iedcommon/iec61850_common.c
./iedserver/impl/ied_server.c
./iedserver/impl/client_connection.c
./iedserver/model/model.c
./iedserver/model/dynamic_model.c
./iedserver/model/cdc.c
./iedserver/model/config_file_parser.c
./iedserver/mms_mapping/control.c
./iedserver/mms_mapping/mms_mapping.c
./iedserver/mms_mapping/reporting.c
./iedserver/mms_mapping/mms_goose.c

)

set (lib_asn1c_SRCS
./mms/iso_mms/asn1c/DataAccessError.c
./mms/iso_mms/asn1c/DeleteNamedVariableListRequest.c
./mms/iso_mms/asn1c/constr_SET_OF.c
./mms/iso_mms/asn1c/MmsPdu.c
./mms/iso_mms/asn1c/GetNamedVariableListAttributesResponse.c
./mms/iso_mms/asn1c/BIT_STRING.c
./mms/iso_mms/asn1c/ber_tlv_tag.c
./mms/iso_mms/asn1c/constr_SEQUENCE_OF.c
./mms/iso_mms/asn1c/asn_SET_OF.c
./mms/iso_mms/asn1c/ReadResponse.c
./mms/iso_mms/asn1c/InformationReport.c
./mms/iso_mms/asn1c/ConfirmedServiceRequest.c
./mms/iso_mms/asn1c/DeleteNamedVariableListResponse.c
./mms/iso_mms/asn1c/asn_SEQUENCE_OF.c
./mms/iso_mms/asn1c/VariableAccessSpecification.c
./mms/iso_mms/asn1c/GetVariableAccessAttributesRequest.c
./mms/iso_mms/asn1c/xer_support.c
./mms/iso_mms/asn1c/ObjectName.c
./mms/iso_mms/asn1c/NativeEnumerated.c
./mms/iso_mms/asn1c/per_encoder.c
./mms/iso_mms/asn1c/constr_SEQUENCE.c
./mms/iso_mms/asn1c/GetNameListResponse.c
./mms/iso_mms/asn1c/MMSString.c
./mms/iso_mms/asn1c/InitiateErrorPdu.c
./mms/iso_mms/asn1c/IndexRangeSeq.c
./mms/iso_mms/asn1c/ConfirmedErrorPDU.c
./mms/iso_mms/asn1c/UnconfirmedService.c
./mms/iso_mms/asn1c/UTF8String.c
./mms/iso_mms/asn1c/ServiceError.c
./mms/iso_mms/asn1c/TimeOfDay.c
./mms/iso_mms/asn1c/GetNameListRequest.c
./mms/iso_mms/asn1c/asn_codecs_prim.c
./mms/iso_mms/asn1c/Data.c
./mms/iso_mms/asn1c/ScatteredAccessDescription.c
./mms/iso_mms/asn1c/ReadRequest.c
./mms/iso_mms/asn1c/per_decoder.c
./mms/iso_mms/asn1c/Identifier.c
./mms/iso_mms/asn1c/ServiceSupportOptions.c
./mms/iso_mms/asn1c/Integer8.c
./mms/iso_mms/asn1c/ConfirmedServiceResponse.c
./mms/iso_mms/asn1c/ParameterSupportOptions.c
./mms/iso_mms/asn1c/Integer16.c
./mms/iso_mms/asn1c/ber_tlv_length.c
./mms/iso_mms/asn1c/OCTET_STRING.c
./mms/iso_mms/asn1c/DefineNamedVariableListRequest.c
./mms/iso_mms/asn1c/FloatingPoint.c
./mms/iso_mms/asn1c/xer_encoder.c
./mms/iso_mms/asn1c/Unsigned8.c
./mms/iso_mms/asn1c/BOOLEAN.c
./mms/iso_mms/asn1c/INTEGER.c
./mms/iso_mms/asn1c/UnconfirmedPDU.c
./mms/iso_mms/asn1c/DataSequence.c
./mms/iso_mms/asn1c/constraints.c
./mms/iso_mms/asn1c/der_encoder.c
./mms/iso_mms/asn1c/VisibleString.c
./mms/iso_mms/asn1c/InitiateResponsePdu.c
./mms/iso_mms/asn1c/StructComponent.c
./mms/iso_mms/asn1c/Address.c
./mms/iso_mms/asn1c/Unsigned16.c
./mms/iso_mms/asn1c/ber_decoder.c
./mms/iso_mms/asn1c/per_support.c
./mms/iso_mms/asn1c/WriteResponse.c
./mms/iso_mms/asn1c/InitRequestDetail.c
./mms/iso_mms/asn1c/InitiateRequestPdu.c
./mms/iso_mms/asn1c/DefineNamedVariableListResponse.c
./mms/iso_mms/asn1c/NULL.c
./mms/iso_mms/asn1c/ListOfVariableSeq.c
./mms/iso_mms/asn1c/UtcTime.c
./mms/iso_mms/asn1c/ConcludeResponsePDU.c
./mms/iso_mms/asn1c/AccessResult.c
./mms/iso_mms/asn1c/Integer32.c
./mms/iso_mms/asn1c/GetNamedVariableListAttributesRequest.c
./mms/iso_mms/asn1c/VariableSpecification.c
./mms/iso_mms/asn1c/Unsigned32.c
./mms/iso_mms/asn1c/constr_CHOICE.c
./mms/iso_mms/asn1c/AlternateAccess.c
./mms/iso_mms/asn1c/ObjectClass.c
./mms/iso_mms/asn1c/InitResponseDetail.c
./mms/iso_mms/asn1c/ConfirmedResponsePdu.c
./mms/iso_mms/asn1c/GetVariableAccessAttributesResponse.c
./mms/iso_mms/asn1c/NativeInteger.c
./mms/iso_mms/asn1c/xer_decoder.c
./mms/iso_mms/asn1c/AlternateAccessSelection.c
./mms/iso_mms/asn1c/ConfirmedRequestPdu.c
./mms/iso_mms/asn1c/ConcludeRequestPDU.c
./mms/iso_mms/asn1c/WriteRequest.c
./mms/iso_mms/asn1c/RejectPDU.c
./mms/iso_mms/asn1c/TypeSpecification.c
./mms/iso_mms/asn1c/constr_TYPE.c
./mms/iso_mms/asn1c/GeneralizedTime.c
)

set (lib_goose_SRCS
./goose/goose_subscriber.c
./goose/goose_publisher.c
)

set (lib_linux_SRCS
./hal/socket/linux/socket_linux.c
./hal/ethernet/linux/ethernet_linux.c
./hal/thread/linux/thread_linux.c
./hal/filesystem/linux/file_provider_linux.c
./hal/time/unix/time.c
)

set (lib_windows_SRCS
./hal/socket/win32/socket_win32.c
./hal/ethernet/win32/ethernet_win32.c
./hal/thread/win32/thread_win32.c
./hal/filesystem/win32/file_provider_win32.c
./hal/time/win32/time.c
)

set (lib_bsd_SRCS
./hal/socket/bsd/socket_bsd.c
./hal/ethernet/bsd/ethernet_bsd.c
./hal/thread/linux/thread_linux.c
./hal/filesystem/linux/file_provider_linux.c
./hal/time/unix/time.c
)

IF(WIN32)

if(EXISTS "../third_party/winpcap/Lib/wpcap.lib")
message("Found winpcap -> can compile with GOOSE support")
set(WITH_WPCAP 1)
endif()

set_source_files_properties(${lib_asn1c_SRCS}
                                       PROPERTIES LANGUAGE C)

set_source_files_properties(${lib_common_SRCS} ${lib_windows_SRCS}
                                       PROPERTIES LANGUAGE CXX)

IF(WITH_WPCAP)
set_source_files_properties(${lib_goose_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ELSE()
add_definitions(-DEXCLUDE_ETHERNET_WINDOWS)
ENDIF()

set (CMAKE_MODULE_LINKER_FLAGS   "${CMAKE_MODULE_LINKER_FLAGS}\"/DEF:${CMAKE_CURRENT_SOURCE_DIR}/vs/libiec61850.def\"") 

include_directories(
  ../third_party/winpcap/include
)

IF(WITH_WPCAP)
set (library_SRCS
	${lib_common_SRCS}
	${lib_asn1c_SRCS}
	${lib_goose_SRCS}
    ${lib_windows_SRCS}
)

ELSE()
set (library_SRCS
	${lib_common_SRCS}
	${lib_asn1c_SRCS}
    ${lib_windows_SRCS}
)

ENDIF(WITH_WPCAP)

ELSEIF(UNIX)
IF(APPLE)
set (library_SRCS
	${lib_common_SRCS}
	${lib_asn1c_SRCS}
	${lib_goose_SRCS}
    ${lib_bsd_SRCS}
)
ELSEIF(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
set (library_SRCS
	${lib_common_SRCS}
	${lib_asn1c_SRCS}
	${lib_goose_SRCS}
    ${lib_bsd_SRCS}
)
ELSE()
set (library_SRCS
	${lib_common_SRCS}
	${lib_asn1c_SRCS}
	${lib_goose_SRCS}
    ${lib_linux_SRCS}	
)
ENDIF(APPLE)
ENDIF(WIN32)


include (GenerateExportHeader)

add_library (iec61850-shared SHARED ${library_SRCS} )

set_target_properties(iec61850-shared PROPERTIES
           OUTPUT_NAME iec61850
           SOVERSION "${LIB_VERSION_MAJOR}.${LIB_VERSION_MINOR}.${LIB_VERSION_PATCH}"
)




GENERATE_EXPORT_HEADER(iec61850-shared
			BASE_NAME iec61850-shared
			EXPORT_MACRO_NAME iec61850-shared_EXPORT
			EXPORT_FILE_NAME iec61850-shared_export.h
			STATIC_DEFINE iec61850-shared_BUILT_AS_STATIC
)

add_library (iec61850 STATIC ${library_SRCS})

IF(UNIX)
target_link_libraries (iec61850
    -lpthread
    -lm
)
ENDIF(UNIX)

iF(WITH_WPCAP)
target_link_libraries(iec61850
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/wpcap.lib
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/packet.lib
)
target_link_libraries(iec61850-shared
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/wpcap.lib
   ${CMAKE_CURRENT_SOURCE_DIR}/../third_party/winpcap/lib/packet.lib
)


if(MSVC)
		set_target_properties(iec61850-shared PROPERTIES
           	LINK_FLAGS "/DEF:\"${CMAKE_CURRENT_SOURCE_DIR}/vs/libiec61850.def\""
       	)
endif()


ELSE(WITH_WPCAP)
if(MSVC)
		set_target_properties(iec61850-shared PROPERTIES
           	LINK_FLAGS "/DEF:\"${CMAKE_CURRENT_SOURCE_DIR}/vs/libiec61850-wo-goose.def\""
       	)
endif()
ENDIF(WITH_WPCAP)

install (TARGETS iec61850 iec61850-shared
	RUNTIME DESTINATION bin
	ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
)

