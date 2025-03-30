#include <CTRFaceLib.h>

#define MONTH_OF_DAY_FIRST   1
#define MONTH_OF_DAY_LAST    12
static const s32 sMonthOfDay[MONTH_OF_DAY_LAST+1] = {
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
    if (month >= MONTH_OF_DAY_FIRST && month <= MONTH_OF_DAY_LAST) {
        return sMonthOfDay[month];
    }
    else {
        return 0;
    }
}
