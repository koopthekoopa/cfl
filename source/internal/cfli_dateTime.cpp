#include <CTRFaceLib.h>

#define MONTH_OF_DAY_MAX    13
static const s32 sMonthOfDay[MONTH_OF_DAY_MAX] = {
    0,
    31,
    29,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31,
};

s32 CFLi_GetMonthOfDay(s32 month) {
    if ((month-1) < (MONTH_OF_DAY_MAX-1)) {
        return sMonthOfDay[month];
    }
    else {
        return 0;
    }
}
