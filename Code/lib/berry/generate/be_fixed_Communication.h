#include "be_constobj.h"

static be_define_const_map_slots(m_libCommunication_map) {
    { be_const_key(HTTP_Code_Conflict, 31), be_const_int(409) },
    { be_const_key(HTTP_Code_Partial_Content, -1), be_const_int(206) },
    { be_const_key(HTTP_Code_Not_Modified, -1), be_const_int(304) },
    { be_const_key(WPA2_Authentication_Method_TLS, -1), be_const_int(0) },
    { be_const_key(HTTP_Code_Not_Extended, -1), be_const_int(510) },
    { be_const_key(Authentication_Mode_WPA2_ENTERPRISE, -1), be_const_int(5) },
    { be_const_key(IP_Address_Type, 86), be_const_class(Berry_IP_Address_Type) },
    { be_const_key(Authentication_Mode_WPA_WPA2_PSK, -1), be_const_int(4) },
    { be_const_key(Start, -1), be_const_ctype_func(Berry_Communication_Class_Start_19AB48CC_D0F3_49F8_ADB6_DA8D57A3B3A4) },
    { be_const_key(HTTP_Code_Loop_Detected, -1), be_const_int(508) },
    { be_const_key(HTTP_Code_HTTP_Version_Not_Supported, 47), be_const_int(505) },
    { be_const_key(HTTP_Code_Proxy_Authentication_Required, 45), be_const_int(407) },
    { be_const_key(HTTP_Code_Precondition_Required, 1), be_const_int(428) },
    { be_const_key(Status_Idle, -1), be_const_int(1) },
    { be_const_key(Mode_Station, -1), be_const_int(1) },
    { be_const_key(HTTP_Code_No_Content, -1), be_const_int(204) },
    { be_const_key(HTTP_Code_Bad_Request, 8), be_const_int(400) },
    { be_const_key(HTTP_Code_Multiple_Choices, -1), be_const_int(300) },
    { be_const_key(HTTP_Code_Payment_Required, 3), be_const_int(402) },
    { be_const_key(WPA2_Authentication_Method_PEAP, -1), be_const_int(1) },
    { be_const_key(Authentication_Mode_WPA2_WPA3_PSK, -1), be_const_int(7) },
    { be_const_key(HTTP_Code_Temporary_Redirect, 80), be_const_int(307) },
    { be_const_key(HTTP_Code_Length_Required, -1), be_const_int(411) },
    { be_const_key(Authentication_Mode_WPA2_PSK, -1), be_const_int(3) },
    { be_const_key(HTTP_Code_Use_Proxy, -1), be_const_int(305) },
    { be_const_key(HTTP_Code_Created, 18), be_const_int(201) },
    { be_const_key(HTTP_Code_Upgrade_Required, 68), be_const_int(426) },
    { be_const_key(HTTP_Code_Not_Implemented, -1), be_const_int(501) },
    { be_const_key(Mode_Station_Access_Point, -1), be_const_int(3) },
    { be_const_key(HTTP_Code_Range_Not_Satisfiable, -1), be_const_int(416) },
    { be_const_key(HTTP_Code_Variant_Also_Negotiates, -1), be_const_int(506) },
    { be_const_key(HTTP_Code_Permanent_Redirect, -1), be_const_int(308) },
    { be_const_key(HTTP_Code_Locked, -1), be_const_int(423) },
    { be_const_key(HTTP_Code_Payload_Too_Large, -1), be_const_int(413) },
    { be_const_key(Stop, 22), be_const_ctype_func(Berry_Communication_Class_Stop_D0D52216_410A_4177_A1C8_5CAF46C91065) },
    { be_const_key(HTTP_Code_Request_Timeout, -1), be_const_int(408) },
    { be_const_key(Authentication_Mode_WPA3_PSK, -1), be_const_int(6) },
    { be_const_key(Status_Scan_Completed, -1), be_const_int(3) },
    { be_const_key(HTTP_Code_Too_Many_Requests, -1), be_const_int(429) },
    { be_const_key(HTTP_Code_Insufficient_Storage, 29), be_const_int(507) },
    { be_const_key(HTTP_Code_Continue, 26), be_const_int(100) },
    { be_const_key(HTTP_Code_Already_Reported, -1), be_const_int(208) },
    { be_const_key(HTTP_Code_Expectation_Failed, -1), be_const_int(417) },
    { be_const_key(Status_Connection_Failed, -1), be_const_int(5) },
    { be_const_key(HTTP_Code_See_Other, -1), be_const_int(303) },
    { be_const_key(Mode_None, 65), be_const_int(0) },
    { be_const_key(HTTP_Code_Processing, 59), be_const_int(102) },
    { be_const_key(HTTP_Code_Non_Authoritative_Information, -1), be_const_int(203) },
    { be_const_key(Authentication_Mode_WAPI_PSK, 20), be_const_int(8) },
    { be_const_key(HTTP_Code_Gateway_Timeout, -1), be_const_int(504) },
    { be_const_key(HTTP_Code_Network_Authentication_Required, -1), be_const_int(511) },
    { be_const_key(Status_Connection_Lost, -1), be_const_int(6) },
    { be_const_key(Authentication_Mode_WEP, -1), be_const_int(1) },
    { be_const_key(HTTP_Code_Moved_Permanently, -1), be_const_int(301) },
    { be_const_key(HTTP_Code_Switching_Protocols, 39), be_const_int(101) },
    { be_const_key(HTTP_Code_Internal_Server_Error, -1), be_const_int(500) },
    { be_const_key(HTTP_Code_OK, 46), be_const_int(200) },
    { be_const_key(HTTP_Code_Reset_Content, 9), be_const_int(205) },
    { be_const_key(Status_Disconnected, 32), be_const_int(7) },
    { be_const_key(Authentication_Mode_MAX, -1), be_const_int(9) },
    { be_const_key(Mode_Access_Point, -1), be_const_int(2) },
    { be_const_key(Authentication_Mode_Open, -1), be_const_int(0) },
    { be_const_key(HTTP_Code_Method_Not_Allowed, -1), be_const_int(405) },
    { be_const_key(Status_Connected, -1), be_const_int(4) },
    { be_const_key(WPA2_Authentication_Method_TTLS, -1), be_const_int(2) },
    { be_const_key(HTTP_Code_Misdirected_Request, -1), be_const_int(421) },
    { be_const_key(HTTP_Code_Unauthorized, -1), be_const_int(401) },
    { be_const_key(HTTP_Code_Unprocessable_Entity, -1), be_const_int(422) },
    { be_const_key(HTTP_Code_Gone, 19), be_const_int(410) },
    { be_const_key(HTTP_Code_Bad_Gateway, -1), be_const_int(502) },
    { be_const_key(HTTP_Code_Request_Header_Fields_Too_Large, 23), be_const_int(431) },
    { be_const_key(Status_No_Shield, 63), be_const_int(0) },
    { be_const_key(HTTPS_Client_Type, -1), be_const_class(Berry_HTTPS_Client_Type) },
    { be_const_key(HTTP_Code_Found, -1), be_const_int(302) },
    { be_const_key(HTTP_Code_Precondition_Failed, -1), be_const_int(412) },
    { be_const_key(HTTP_Code_URI_Too_Long, 87), be_const_int(414) },
    { be_const_key(Get_Pointer, -1), be_const_ctype_func(Berry_Communication_Class_Get_Pointer) },
    { be_const_key(HTTP_Code_Failed_Dependency, -1), be_const_int(424) },
    { be_const_key(HTTP_Code_I_M_Used, -1), be_const_int(226) },
    { be_const_key(Authentication_Mode_WPA_PSK, -1), be_const_int(2) },
    { be_const_key(HTTP_Code_Unsupported_Media_Type, -1), be_const_int(415) },
    { be_const_key(WiFi_Client_Type, 7), be_const_class(Berry_WiFi_Client_Type) },
    { be_const_key(HTTP_Code_Not_Acceptable, -1), be_const_int(406) },
    { be_const_key(HTTP_Code_Accepted, -1), be_const_int(202) },
    { be_const_key(HTTP_Code_Forbidden, -1), be_const_int(403) },
    { be_const_key(HTTP_Code_Multi_Status, -1), be_const_int(207) },
    { be_const_key(HTTP_Code_Service_Unavailable, -1), be_const_int(503) },
    { be_const_key(HTTP_Code_Not_Found, -1), be_const_int(404) },
    { be_const_key(Status_No_SSID_Available, -1), be_const_int(2) },
};

static be_define_const_map(
    m_libCommunication_map,
    89
);

static be_define_const_module(
    m_libCommunication,
    "Communication"
);

BE_EXPORT_VARIABLE be_define_const_native_module(Communication);
