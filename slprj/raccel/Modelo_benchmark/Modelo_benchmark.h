#ifndef RTW_HEADER_Modelo_benchmark_h_
#define RTW_HEADER_Modelo_benchmark_h_
#ifndef Modelo_benchmark_COMMON_INCLUDES_
#define Modelo_benchmark_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Modelo_benchmark_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Modelo_benchmark
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (37) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (6)   
#elif NCSTATES != 6
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T ifdl5x3out ; real_T m5paz4bgb1 ; real_T ex4ffydxaq ;
real_T o5hvxhtear ; real_T mwjho2lzll ; real_T j2nyilswxd ; real_T krqo1rwof1
; real_T l1xqi00qub ; real_T kdoxbxp5dd ; real_T c2h5on1grl ; real_T
cmzcdyind2 ; real_T iy4vwtthcv ; real_T gkvg1txloc ; real_T fk2y2oz4ja ;
real_T mgjgyk30gs ; real_T pjs3lgiiru ; real_T ov0z1ecgvh ; real_T kg3e5vh3lc
; real_T l134mx2vwj ; real_T pw0ytmmy41 ; real_T g0p5pnoov1 ; real_T
a0h1mq5ot5 ; real_T dz3hgpidsa ; real_T kbctylkbj3 ; real_T mdmlt0vcmk ;
real_T n0yzf1u202 ; real_T hlkyrfs5ke ; real_T bzoeewahv5 ; real_T i4zyze5rnz
; real_T oafz3ylygn ; real_T izgbnnso3z ; real_T oxuseggyjt ; real_T
p55gmherxe ; real_T n1r5slwfx4 ; real_T nz5y51as0m ; real_T eekumk4wst ;
real_T lbfhtul3m4 ; } B ; typedef struct { struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } lx5aymxbru ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } ieqwngr5ng ; struct { void * LoggedData [
4 ] ; } hha2yisjap ; struct { void * LoggedData [ 5 ] ; } bgrflyt2wj ; struct
{ void * LoggedData ; } ncqmxch23f ; struct { void * LoggedData ; }
ej5vz4bb3o ; struct { int_T PrevIndex ; } b1hsbjxrwp ; struct { int_T
PrevIndex ; } hmvdyn0wxk ; int_T ltbvicsfuc ; int_T c0lq23kp30 ; int_T
eqgqxg1h23 ; } DW ; typedef struct { real_T nwyob3y0u0 ; real_T fdl0jbtiyk ;
real_T oho3u2rdv0 [ 2 ] ; real_T bzaeg0apqc [ 2 ] ; } X ; typedef struct {
real_T nwyob3y0u0 ; real_T fdl0jbtiyk ; real_T oho3u2rdv0 [ 2 ] ; real_T
bzaeg0apqc [ 2 ] ; } XDot ; typedef struct { boolean_T nwyob3y0u0 ; boolean_T
fdl0jbtiyk ; boolean_T oho3u2rdv0 [ 2 ] ; boolean_T bzaeg0apqc [ 2 ] ; } XDis
; typedef struct { real_T nwyob3y0u0 ; real_T fdl0jbtiyk ; real_T oho3u2rdv0
[ 2 ] ; real_T bzaeg0apqc [ 2 ] ; } CStateAbsTol ; typedef struct { real_T
nwyob3y0u0 ; real_T fdl0jbtiyk ; real_T oho3u2rdv0 [ 2 ] ; real_T bzaeg0apqc
[ 2 ] ; } CXPtMin ; typedef struct { real_T nwyob3y0u0 ; real_T fdl0jbtiyk ;
real_T oho3u2rdv0 [ 2 ] ; real_T bzaeg0apqc [ 2 ] ; } CXPtMax ; typedef
struct { real_T k10ayrcb05 ; real_T dkykgefbn1 ; real_T ld4u2jmmhq ; } ZCV ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T A ; real_T Hf1 ; real_T Hf2 ; real_T T1i ; real_T T1o ; real_T T2i ;
real_T TA ; real_T Tk ; real_T U ; real_T cp ; real_T e ; real_T m ; real_T
th ; real_T FromWorkspace_Time0 [ 120001 ] ; real_T FromWorkspace_Data0 [
120001 ] ; real_T FromWorkspace1_Time0 [ 120001 ] ; real_T
FromWorkspace1_Data0 [ 120001 ] ; real_T GQ1T1_A [ 2 ] ; real_T GQ1T1_C [ 2 ]
; real_T GQ2T1_A [ 2 ] ; real_T GQ2T1_C [ 2 ] ; real_T Step1_Time ; real_T
Step1_Y0 ; real_T Step1_YFinal ; real_T Step2_Time ; real_T Step2_Y0 ; real_T
Step2_YFinal ; real_T Step3_Time ; real_T Step3_Y0 ; real_T Step3_YFinal ;
real_T Constant12_Value ; real_T Constant5_Value ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_Modelo_benchmark_GetDWork ( ) ; extern
void mr_Modelo_benchmark_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Modelo_benchmark_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Modelo_benchmark_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
