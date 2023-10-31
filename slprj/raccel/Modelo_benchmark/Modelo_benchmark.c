#include "Modelo_benchmark.h"
#include "rtwtypes.h"
#include "mwmathutil.h"
#include "Modelo_benchmark_private.h"
#include "rt_logging_mmi.h"
#include "Modelo_benchmark_capi.h"
#include "Modelo_benchmark_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 2 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "9.9 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { rtX . nwyob3y0u0 = rtP . T1i ; rtX
. fdl0jbtiyk = rtP . T2i ; rtX . oho3u2rdv0 [ 0 ] = 0.0 ; rtX . bzaeg0apqc [
0 ] = 0.0 ; rtX . oho3u2rdv0 [ 1 ] = 0.0 ; rtX . bzaeg0apqc [ 1 ] = 0.0 ; }
void MdlStart ( void ) { { bool externalInputIsInDatasetFormat = false ; void
* pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Q1t" ; fromwksInfo -> origDataTypeId =
0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints = 120001 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace_Time0 ; rtDW .
lx5aymxbru . TimePtr = fromwksInfo -> time ; rtDW . lx5aymxbru . DataPtr =
fromwksInfo -> data ; rtDW . lx5aymxbru . RSimInfoPtr = fromwksInfo ; } rtDW
. b1hsbjxrwp . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Q2t" ; fromwksInfo -> origDataTypeId =
0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints = 120001 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace1_Time0 ; rtDW .
ieqwngr5ng . TimePtr = fromwksInfo -> time ; rtDW . ieqwngr5ng . DataPtr =
fromwksInfo -> data ; rtDW . ieqwngr5ng . RSimInfoPtr = fromwksInfo ; } rtDW
. hmvdyn0wxk . PrevIndex = 0 ; } MdlInitialize ( ) ; } void MdlOutputs (
int_T tid ) { real_T ds1kfqywuj ; rtB . ifdl5x3out = rtX . nwyob3y0u0 ; rtB .
m5paz4bgb1 = rtB . ifdl5x3out - rtP . Tk ; rtB . ex4ffydxaq = rtX .
fdl0jbtiyk ; rtB . o5hvxhtear = rtB . ex4ffydxaq - rtP . Tk ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { { real_T * pDataValues = ( real_T * ) rtDW
. lx5aymxbru . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
lx5aymxbru . TimePtr ; int_T currTimeIndex = rtDW . b1hsbjxrwp . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 2 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . lx5aymxbru . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . b1hsbjxrwp . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . mwjho2lzll =
pDataValues [ currTimeIndex ] ; } else { rtB . mwjho2lzll = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . mwjho2lzll = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } { real_T * pDataValues = ( real_T * ) rtDW .
ieqwngr5ng . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . ieqwngr5ng
. TimePtr ; int_T currTimeIndex = rtDW . hmvdyn0wxk . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 2 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . ieqwngr5ng . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hmvdyn0wxk . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . j2nyilswxd =
pDataValues [ currTimeIndex ] ; } else { rtB . j2nyilswxd = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . j2nyilswxd = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } } rtB . krqo1rwof1 = rtP . GQ1T1_C [ 0 ] *
rtX . oho3u2rdv0 [ 0 ] ; rtB . krqo1rwof1 += rtP . GQ1T1_C [ 1 ] * rtX .
oho3u2rdv0 [ 1 ] ; rtB . l1xqi00qub = rtP . GQ2T1_C [ 0 ] * rtX . bzaeg0apqc
[ 0 ] ; rtB . l1xqi00qub += rtP . GQ2T1_C [ 1 ] * rtX . bzaeg0apqc [ 1 ] ;
rtB . kdoxbxp5dd = ( ( rtB . krqo1rwof1 + rtB . l1xqi00qub ) + rtP . T1o ) -
rtP . Tk ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { } ds1kfqywuj =
muDoubleScalarPower ( rtB . ifdl5x3out , rtP . Constant5_Value ) ; rtB .
c2h5on1grl = muDoubleScalarPower ( rtB . ex4ffydxaq , rtP . Constant5_Value )
- ds1kfqywuj ; rtB . cmzcdyind2 = rtB . nz5y51as0m * rtB . c2h5on1grl ; rtB .
iy4vwtthcv = rtP . TA - rtB . ifdl5x3out ; rtB . gkvg1txloc = rtB .
n1r5slwfx4 * rtB . iy4vwtthcv ; rtB . fk2y2oz4ja = rtB . oxuseggyjt -
ds1kfqywuj ; rtB . mgjgyk30gs = rtB . nz5y51as0m * rtB . fk2y2oz4ja ; rtB .
pjs3lgiiru = rtB . ex4ffydxaq - rtB . ifdl5x3out ; rtB . ov0z1ecgvh = rtB .
n1r5slwfx4 * rtB . pjs3lgiiru ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
kg3e5vh3lc = rtP . Hf1 * rtB . mwjho2lzll ; rtB . bzoeewahv5 = rtP . Hf2 *
rtB . j2nyilswxd ; } rtB . l134mx2vwj = ( ( ( rtB . gkvg1txloc + rtB .
mgjgyk30gs ) + rtB . ov0z1ecgvh ) + rtB . cmzcdyind2 ) + rtB . kg3e5vh3lc ;
rtB . pw0ytmmy41 = rtP . TA - rtB . ex4ffydxaq ; rtB . g0p5pnoov1 = rtB .
eekumk4wst * rtB . pw0ytmmy41 ; ds1kfqywuj = muDoubleScalarPower ( rtB .
ex4ffydxaq , rtP . Constant12_Value ) ; rtB . a0h1mq5ot5 = rtB . p55gmherxe -
ds1kfqywuj ; rtB . dz3hgpidsa = rtB . lbfhtul3m4 * rtB . a0h1mq5ot5 ; rtB .
kbctylkbj3 = rtB . ifdl5x3out - rtB . ex4ffydxaq ; rtB . mdmlt0vcmk = rtB .
eekumk4wst * rtB . kbctylkbj3 ; rtB . n0yzf1u202 = muDoubleScalarPower ( rtB
. ifdl5x3out , rtP . Constant12_Value ) - ds1kfqywuj ; rtB . hlkyrfs5ke = rtB
. lbfhtul3m4 * rtB . n0yzf1u202 ; rtB . i4zyze5rnz = ( ( ( rtB . g0p5pnoov1 +
rtB . dz3hgpidsa ) + rtB . mdmlt0vcmk ) + rtB . hlkyrfs5ke ) + rtB .
bzoeewahv5 ; rtB . oafz3ylygn = 1.0 / ( rtP . m * rtP . cp ) * rtB .
l134mx2vwj ; rtB . izgbnnso3z = 1.0 / ( rtP . m * rtP . cp ) * rtB .
i4zyze5rnz ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . ltbvicsfuc = (
ssGetTaskTime ( rtS , 1 ) >= rtP . Step1_Time ) ; rtDW . c0lq23kp30 = (
ssGetTaskTime ( rtS , 1 ) >= rtP . Step2_Time ) ; rtDW . eqgqxg1h23 = (
ssGetTaskTime ( rtS , 1 ) >= rtP . Step3_Time ) ; } UNUSED_PARAMETER ( tid )
; } void MdlOutputsTID3 ( int_T tid ) { rtB . oxuseggyjt =
muDoubleScalarPower ( rtP . TA , rtP . Constant5_Value ) ; rtB . p55gmherxe =
muDoubleScalarPower ( rtP . TA , rtP . Constant12_Value ) ; rtB . n1r5slwfx4
= rtP . U * rtP . A ; rtB . nz5y51as0m = rtP . e * rtP . th * rtP . A ; rtB .
eekumk4wst = rtP . U * rtP . A ; rtB . lbfhtul3m4 = rtP . e * rtP . th * rtP
. A ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot * _rtXdot ;
_rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> nwyob3y0u0 = rtB .
oafz3ylygn ; _rtXdot -> fdl0jbtiyk = rtB . izgbnnso3z ; _rtXdot -> oho3u2rdv0
[ 0 ] = rtP . GQ1T1_A [ 0 ] * rtX . oho3u2rdv0 [ 0 ] ; _rtXdot -> oho3u2rdv0
[ 0 ] += rtP . GQ1T1_A [ 1 ] * rtX . oho3u2rdv0 [ 1 ] ; _rtXdot -> oho3u2rdv0
[ 1 ] = rtX . oho3u2rdv0 [ 0 ] ; _rtXdot -> oho3u2rdv0 [ 0 ] += rtB .
mwjho2lzll ; _rtXdot -> bzaeg0apqc [ 0 ] = rtP . GQ2T1_A [ 0 ] * rtX .
bzaeg0apqc [ 0 ] ; _rtXdot -> bzaeg0apqc [ 0 ] += rtP . GQ2T1_A [ 1 ] * rtX .
bzaeg0apqc [ 1 ] ; _rtXdot -> bzaeg0apqc [ 1 ] = rtX . bzaeg0apqc [ 0 ] ;
_rtXdot -> bzaeg0apqc [ 0 ] += rtB . j2nyilswxd ; } void MdlProjection ( void
) { } void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> k10ayrcb05 = ssGetT ( rtS )
- rtP . Step1_Time ; _rtZCSV -> dkykgefbn1 = ssGetT ( rtS ) - rtP .
Step2_Time ; _rtZCSV -> ld4u2jmmhq = ssGetT ( rtS ) - rtP . Step3_Time ; }
void MdlTerminate ( void ) { rt_FREE ( rtDW . lx5aymxbru . RSimInfoPtr ) ;
rt_FREE ( rtDW . ieqwngr5ng . RSimInfoPtr ) ; } static void
mr_Modelo_benchmark_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_Modelo_benchmark_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Modelo_benchmark_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Modelo_benchmark_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Modelo_benchmark_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_Modelo_benchmark_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Modelo_benchmark_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Modelo_benchmark_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Modelo_benchmark_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Modelo_benchmark_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Modelo_benchmark_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_Modelo_benchmark_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_Modelo_benchmark_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_Modelo_benchmark_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_Modelo_benchmark_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Modelo_benchmark_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Modelo_benchmark_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Modelo_benchmark_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 5 ] = { "rtDW.b1hsbjxrwp" , "rtDW.hmvdyn0wxk" ,
"rtDW.ltbvicsfuc" , "rtDW.c0lq23kp30" , "rtDW.eqgqxg1h23" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 5 , rtdwDataFieldNames ) ;
mr_Modelo_benchmark_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * )
& ( rtDW . b1hsbjxrwp ) , sizeof ( rtDW . b1hsbjxrwp ) ) ;
mr_Modelo_benchmark_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * )
& ( rtDW . hmvdyn0wxk ) , sizeof ( rtDW . hmvdyn0wxk ) ) ;
mr_Modelo_benchmark_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( rtDW . ltbvicsfuc ) , sizeof ( rtDW . ltbvicsfuc ) ) ;
mr_Modelo_benchmark_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * )
& ( rtDW . c0lq23kp30 ) , sizeof ( rtDW . c0lq23kp30 ) ) ;
mr_Modelo_benchmark_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * )
& ( rtDW . eqgqxg1h23 ) , sizeof ( rtDW . eqgqxg1h23 ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Modelo_benchmark_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Modelo_benchmark_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0
, 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_Modelo_benchmark_restoreDataFromMxArray ( ( void * ) & (
rtDW . b1hsbjxrwp ) , rtdwData , 0 , 0 , sizeof ( rtDW . b1hsbjxrwp ) ) ;
mr_Modelo_benchmark_restoreDataFromMxArray ( ( void * ) & ( rtDW . hmvdyn0wxk
) , rtdwData , 0 , 1 , sizeof ( rtDW . hmvdyn0wxk ) ) ;
mr_Modelo_benchmark_restoreDataFromMxArray ( ( void * ) & ( rtDW . ltbvicsfuc
) , rtdwData , 0 , 2 , sizeof ( rtDW . ltbvicsfuc ) ) ;
mr_Modelo_benchmark_restoreDataFromMxArray ( ( void * ) & ( rtDW . c0lq23kp30
) , rtdwData , 0 , 3 , sizeof ( rtDW . c0lq23kp30 ) ) ;
mr_Modelo_benchmark_restoreDataFromMxArray ( ( void * ) & ( rtDW . eqgqxg1h23
) , rtdwData , 0 , 4 , sizeof ( rtDW . eqgqxg1h23 ) ) ; } } mxArray *
mr_Modelo_benchmark_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 4 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 4 ] = { "Scope" , "Scope" , "Scope" , "Scope" , } ;
static const char_T * blockPath [ 4 ] = { "Modelo_benchmark/Scope" ,
"Modelo_benchmark/Scope1" , "Modelo_benchmark/Scope2" ,
"Modelo_benchmark/Scope3" , } ; static const int reason [ 4 ] = { 0 , 0 , 0 ,
0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 4 ; ++ ( subs [ 0 ] ) ) { subs [
1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell (
data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] =
1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
6 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 66 ) ;
ssSetNumBlockIO ( rtS , 37 ) ; ssSetNumBlockParams ( rtS , 480036 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.05 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1332072051U ) ; ssSetChecksumVal ( rtS , 1 ,
2523004104U ) ; ssSetChecksumVal ( rtS , 2 , 2807514612U ) ; ssSetChecksumVal
( rtS , 3 , 3580038807U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { real_T * x
= ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void
* ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
Modelo_benchmark_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Modelo_benchmark" ) ;
ssSetPath ( rtS , "Modelo_benchmark" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 60000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 2 , 2 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 }
; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 2 , 2 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "Modelo_benchmark/Integrator" ,
"Modelo_benchmark/Integrator1" , "Modelo_benchmark/GQ1T1" ,
"Modelo_benchmark/GQ2T1" } ; static const char_T * rt_LoggedStateNames [ ] =
{ "" , "" , "" , "" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0
, 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = {
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 4 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 4 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . nwyob3y0u0 ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . fdl0jbtiyk ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . oho3u2rdv0 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . bzaeg0apqc [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 6 ] ;
static real_T absTol [ 6 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 } ; static uint8_T absTolControl [ 6 ] = { 0U , 0U , 0U , 0U , 0U , 0U
} ; static real_T contStateJacPerturbBoundMinVec [ 6 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 6 ] ; static uint8_T zcAttributes [ 3 ] = {
( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 4 ] = { { 1 * sizeof ( real_T ) ,
( char * ) ( & rtB . bzoeewahv5 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . kg3e5vh3lc ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . j2nyilswxd ) , ( NULL ) } , { 1 * sizeof ( real_T ) , (
char * ) ( & rtB . mwjho2lzll ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i <
6 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.05 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
4 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 3 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 3 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 1332072051U ) ; ssSetChecksumVal ( rtS , 1 ,
2523004104U ) ; ssSetChecksumVal ( rtS , 2 , 2807514612U ) ; ssSetChecksumVal
( rtS , 3 , 3580038807U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Modelo_benchmark_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Modelo_benchmark_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Modelo_benchmark_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
