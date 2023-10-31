#include "Modelo_benchmark_capi_host.h"
static Modelo_benchmark_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Modelo_benchmark_host_InitializeDataMapInfo(&(root), "Modelo_benchmark");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
