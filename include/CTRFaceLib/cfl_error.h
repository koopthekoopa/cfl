#pragma once
#ifndef CFL_ERROR_H
#define CFL_ERROR_H

#include <CTRFaceLib/cfl_types.h>

typedef s32 CFLResult;

enum {
    CFL_RESULT_SUCCESS = 0,
    CFL_RESULT_NOT_AVAILABLE,
    CFL_RESULT_WRONG_PARAM,
    CFL_RESULT_FATAL,
    CFL_RESULT_LOAD_FAIL,
    CFL_RESULT_SAVE_FAIL,
    CFL_RESULT_BROKEN,
    CFL_RESULT_DB_FULL,
    CFL_RESULT_DB_NODATA,
    CFL_RESULT_FORMATTED,
    CFL_RESULT_BUSY,
    CFL_RESULT_NAND_COMMAND_FAIL,
    CFL_RESULT_ACCESS_DENIED,
    CFL_RESULT_UNKNOWN
};

#endif // CFL_ERROR_H
