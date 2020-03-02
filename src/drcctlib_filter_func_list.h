#ifndef _DRCCTLIB_FILETER_FUNC_LIST_H_
#define _DRCCTLIB_FILETER_FUNC_LIST_H_
#include "dr_api.h"

DR_EXPORT
bool
drcctlib_filter_0_instr(instr_t *instr)
{
    return false;
}

DR_EXPORT
bool
drcctlib_filter_all_instr(instr_t *instr)
{
    return true;
}

DR_EXPORT
bool
drcctlib_filter_mem_access_instr(instr_t *instr)
{
    return (instr_reads_memory(instr) || instr_writes_memory(instr));
}

#define DRCCTLIB_FILTER_ZERO_INSTR drcctlib_filter_0_instr
#define DRCCTLIB_FILTER_ALL_INSTR drcctlib_filter_all_instr
#define DRCCTLIB_FILTER_MEM_ACCESS_INSTR drcctlib_filter_mem_access_instr

#endif // _DRCCTLIB_FILETER_FUNC_LIST_H_