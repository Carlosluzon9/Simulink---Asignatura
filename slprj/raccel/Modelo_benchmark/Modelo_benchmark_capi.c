#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Modelo_benchmark_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "Modelo_benchmark.h"
#include "Modelo_benchmark_capi.h"
#include "Modelo_benchmark_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Modelo_benchmark/From Workspace" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 0 , TARGET_STRING ( "Modelo_benchmark/From Workspace1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Modelo_benchmark/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 3
, 0 , TARGET_STRING ( "Modelo_benchmark/Gain1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING ( "Modelo_benchmark/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"Modelo_benchmark/Integrator1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 6 , 0 , TARGET_STRING ( "Modelo_benchmark/Math Function" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"Modelo_benchmark/Math Function2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
2 } , { 8 , 0 , TARGET_STRING ( "Modelo_benchmark/Product" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
"Modelo_benchmark/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 10 , 0 , TARGET_STRING ( "Modelo_benchmark/Product10" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"Modelo_benchmark/Product11" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 12 , 0 , TARGET_STRING ( "Modelo_benchmark/Product12" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"Modelo_benchmark/Product13" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 14 , 0 , TARGET_STRING ( "Modelo_benchmark/Product2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 2 } , { 15 , 0 , TARGET_STRING (
"Modelo_benchmark/Product3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 16 , 0 , TARGET_STRING ( "Modelo_benchmark/Product4" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Modelo_benchmark/Product5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } ,
{ 18 , 0 , TARGET_STRING ( "Modelo_benchmark/Product6" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"Modelo_benchmark/Product7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } ,
{ 20 , 0 , TARGET_STRING ( "Modelo_benchmark/Product8" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"Modelo_benchmark/Product9" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 22 , 0 , TARGET_STRING ( "Modelo_benchmark/Add" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING ( "Modelo_benchmark/Add1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"Modelo_benchmark/Add2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 25
, 0 , TARGET_STRING ( "Modelo_benchmark/Add3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING ( "Modelo_benchmark/Add4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"Modelo_benchmark/Add5" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28
, 0 , TARGET_STRING ( "Modelo_benchmark/Add6" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING ( "Modelo_benchmark/Add7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"Modelo_benchmark/Add8" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31
, 0 , TARGET_STRING ( "Modelo_benchmark/Add9" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING ( "Modelo_benchmark/T1_lineal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"Modelo_benchmark/T1_nolineal" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 34 , 0 , TARGET_STRING ( "Modelo_benchmark/T2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING ( "Modelo_benchmark/GQ1T1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"Modelo_benchmark/GQ2T1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0
, 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 37 , TARGET_STRING (
"Modelo_benchmark/Constant12" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , {
38 , TARGET_STRING ( "Modelo_benchmark/Constant5" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 39 , TARGET_STRING ( "Modelo_benchmark/From Workspace" )
, TARGET_STRING ( "Time0" ) , 0 , 1 , 0 } , { 40 , TARGET_STRING (
"Modelo_benchmark/From Workspace" ) , TARGET_STRING ( "Data0" ) , 0 , 1 , 0 }
, { 41 , TARGET_STRING ( "Modelo_benchmark/From Workspace1" ) , TARGET_STRING
( "Time0" ) , 0 , 1 , 0 } , { 42 , TARGET_STRING (
"Modelo_benchmark/From Workspace1" ) , TARGET_STRING ( "Data0" ) , 0 , 1 , 0
} , { 43 , TARGET_STRING ( "Modelo_benchmark/Step1" ) , TARGET_STRING (
"Time" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING ( "Modelo_benchmark/Step1" ) ,
TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
"Modelo_benchmark/Step1" ) , TARGET_STRING ( "After" ) , 0 , 0 , 0 } , { 46 ,
TARGET_STRING ( "Modelo_benchmark/Step2" ) , TARGET_STRING ( "Time" ) , 0 , 0
, 0 } , { 47 , TARGET_STRING ( "Modelo_benchmark/Step2" ) , TARGET_STRING (
"Before" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING ( "Modelo_benchmark/Step2" )
, TARGET_STRING ( "After" ) , 0 , 0 , 0 } , { 49 , TARGET_STRING (
"Modelo_benchmark/Step3" ) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , { 50 ,
TARGET_STRING ( "Modelo_benchmark/Step3" ) , TARGET_STRING ( "Before" ) , 0 ,
0 , 0 } , { 51 , TARGET_STRING ( "Modelo_benchmark/Step3" ) , TARGET_STRING (
"After" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING ( "Modelo_benchmark/GQ1T1" ) ,
TARGET_STRING ( "A" ) , 0 , 2 , 0 } , { 53 , TARGET_STRING (
"Modelo_benchmark/GQ1T1" ) , TARGET_STRING ( "C" ) , 0 , 3 , 0 } , { 54 ,
TARGET_STRING ( "Modelo_benchmark/GQ2T1" ) , TARGET_STRING ( "A" ) , 0 , 2 ,
0 } , { 55 , TARGET_STRING ( "Modelo_benchmark/GQ2T1" ) , TARGET_STRING ( "C"
) , 0 , 3 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 56 , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 57 ,
TARGET_STRING ( "Hf1" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING ( "Hf2" ) , 0 ,
0 , 0 } , { 59 , TARGET_STRING ( "T1i" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING
( "T1o" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING ( "T2i" ) , 0 , 0 , 0 } , { 62
, TARGET_STRING ( "TA" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING ( "Tk" ) , 0 ,
0 , 0 } , { 64 , TARGET_STRING ( "U" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"cp" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING ( "e" ) , 0 , 0 , 0 } , { 67 ,
TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING ( "th" ) , 0 , 0 ,
0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . mwjho2lzll , & rtB . j2nyilswxd ,
& rtB . oafz3ylygn , & rtB . izgbnnso3z , & rtB . ifdl5x3out , & rtB .
ex4ffydxaq , & rtB . oxuseggyjt , & rtB . p55gmherxe , & rtB . n1r5slwfx4 , &
rtB . gkvg1txloc , & rtB . mdmlt0vcmk , & rtB . hlkyrfs5ke , & rtB .
ov0z1ecgvh , & rtB . cmzcdyind2 , & rtB . nz5y51as0m , & rtB . mgjgyk30gs , &
rtB . kg3e5vh3lc , & rtB . eekumk4wst , & rtB . g0p5pnoov1 , & rtB .
lbfhtul3m4 , & rtB . dz3hgpidsa , & rtB . bzoeewahv5 , & rtB . iy4vwtthcv , &
rtB . l134mx2vwj , & rtB . fk2y2oz4ja , & rtB . pw0ytmmy41 , & rtB .
i4zyze5rnz , & rtB . a0h1mq5ot5 , & rtB . kbctylkbj3 , & rtB . n0yzf1u202 , &
rtB . pjs3lgiiru , & rtB . c2h5on1grl , & rtB . kdoxbxp5dd , & rtB .
m5paz4bgb1 , & rtB . o5hvxhtear , & rtB . krqo1rwof1 , & rtB . l1xqi00qub , &
rtP . Constant12_Value , & rtP . Constant5_Value , & rtP .
FromWorkspace_Time0 [ 0 ] , & rtP . FromWorkspace_Data0 [ 0 ] , & rtP .
FromWorkspace1_Time0 [ 0 ] , & rtP . FromWorkspace1_Data0 [ 0 ] , & rtP .
Step1_Time , & rtP . Step1_Y0 , & rtP . Step1_YFinal , & rtP . Step2_Time , &
rtP . Step2_Y0 , & rtP . Step2_YFinal , & rtP . Step3_Time , & rtP . Step3_Y0
, & rtP . Step3_YFinal , & rtP . GQ1T1_A [ 0 ] , & rtP . GQ1T1_C [ 0 ] , &
rtP . GQ2T1_A [ 0 ] , & rtP . GQ2T1_C [ 0 ] , & rtP . A , & rtP . Hf1 , & rtP
. Hf2 , & rtP . T1i , & rtP . T1o , & rtP . T2i , & rtP . TA , & rtP . Tk , &
rtP . U , & rtP . cp , & rtP . e , & rtP . m , & rtP . th , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 120001 , 1 , 2 , 1 , 1 , 2 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.05 , 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 2 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0
} , { ( NULL ) , ( NULL ) , 3 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 37 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 19 , rtModelParameters , 13 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1332072051U , 2523004104U , 2807514612U ,
3580038807U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * Modelo_benchmark_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Modelo_benchmark_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Modelo_benchmark_host_InitializeDataMapInfo (
Modelo_benchmark_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
