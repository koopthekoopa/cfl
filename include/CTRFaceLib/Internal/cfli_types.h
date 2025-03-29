#pragma once
#ifndef CFLi_TYPES_H
#define CFLi_TYPES_H

#include <CTRFaceLib/cfl_types.h>

enum {
    CFL_MII_DATA_REGION_UNLOCK = 0,
    CFL_MII_DATA_REGION_JAPAN,
    CFL_MII_DATA_REGION_USA,
    CFL_MII_DATA_REGION_EUROPE,
};

typedef struct CFLiAuthorID {
    u8  systemId[8];    // 0x00
    u32 miiID;          // 0x08
} CFLiAuthorID;

#define CFL_MII_DATA_NAME_MAX   10

typedef struct CFLiMiiCoreData {
    union {
        struct {
            // 0x00
            u32 version     : 8;    // 00
            u32 allowCopy   : 1;    // 08
            u32 ngWord      : 1;    // 09
            u32 region      : 2;    // 10
            u32 charSet     : 2;    // 12
            u32 pad_00_14   : 2;    // 14
            u32 pageIndex   : 4;    // 16
            u32 slotIndex   : 4;    // 20
            u32 unk_00_24   : 4;    // 24
            u32 device      : 4;    // 28
        };
        u32 makerMeta;  // 0x00
    };
    
    CFLiAuthorID    authorID;       // 0x04
    CFLCreateID     creatorID;      // 0x10
    u8              pad_16_00[2];

    union {
        struct {
            // 0x18
            u16 sex         : 1;    // 00
            u16 birthMonth  : 4;    // 01
            u16 birthDay    : 5;    // 05
            u16 bodyColor   : 4;    // 10
            u16 favourite   : 1;    // 14
            u16 pad_18_15   : 1;    // 15
        };
        u16 miiMeta;    // 0x18
    };

    wchar_t name[CFL_MII_DATA_NAME_MAX];    // 0x1A

    u8  width;  // 0x2E
    u8  height; // 0x2F

    union {
        struct {
            // 0x30
            u16 localMii    : 1;    // 00
            u16 faceShape   : 4;    // 01
            u16 faceColor   : 3;    // 05
            u16 faceLine    : 4;    // 08
            u16 faceMakeup  : 4;    // 12
        };
        u16 face;   // 0x30
    };

    union {
        struct {
            // 0x32
            u16 hairStyle   : 8;    // 00
            u16 faceLine    : 4;    // 00
            u16 faceMakeup  : 4;    // 04
        };
        u16 hair;   // 0x32
    };

    union {
        struct {
            // 0x34
            u16 eyeType     : 6;    // 00
            u16 eyeColor    : 3;    // 06
            u16 eyeScale    : 4;    // 09
            u16 eyeYScale   : 3;    // 13
        };
        u16 eye;        // 0x34
    };

    union {
        struct {
            // 0x36
            u16 eyeRotate   : 5;    // 00
            u16 eyeXPos     : 4;    // 05
            u16 eyeYPos     : 5;    // 09
            u16 pad_36_14   : 2;    // 14
        };
        u16 eyePos;     // 0x36
    };

    union {
        struct {
            // 0x38
            u16 eyeBrowType     : 5;    // 00
            u16 eyeBrowColor    : 3;    // 05
            u16 eyeBrowScale    : 4;    // 08
            u16 eyeBrowYScale   : 3;    // 12
            u16 pad_38_15       : 1;    // 15
        };
        u16 eyeBrow;    // 0x38
    };

    union {
        struct {
            // 0x3A
            u16 eyeBrowRotate   : 5;    // 00
            u16 eyeBrowXPos     : 4;    // 05
            u16 eyeBrowYPos     : 5;    // 09
            u16 pad_3A_14       : 2;    // 14
        };
        u16 eyeBrowPos;    // 0x3A
    };

    union {
        struct {
            // 0x3C
            u16 noseStyle   : 6;    // 00
            u16 noseColor   : 3;    // 06
            u16 noseYPos    : 4;    // 09
            u16 pad_3C_13   : 3;    // 13
        };
        u16 nose;   // 0x3C
    };

    union {
        struct {
            // 0x3E
            u16 mouthStyle  : 6;    // 00
            u16 mouthColor  : 3;    // 06
            u16 mouthScale  : 3;    // 09
            u16 mouthYScale : 3;    // 13
        };
        u16 mouth;  // 0x3E
    };

    union {
        struct {
            // 0x40
            u16 mouthYPos       : 5;    // 00
            u16 mustacheType    : 3;    // 05
            u16 pad_40_08       : 8;    // 08
        };
        u16 mouth2;  // 0x40
    };

    union {
        struct {
            // 0x42
            u16 beardType       : 3;    // 00
            u16 beardColor      : 3;    // 03
            u16 mustacheScale   : 4;    // 06
            u16 mustacheYPos    : 5;    // 10
            u16 pad_42_15       : 1;    // 15
        };
        u16 facialHair; // 0x42
    };

    union {
        struct {
            // 0x44
            u16 glassesType     : 4;    // 00
            u16 glassesColor    : 3;    // 04
            u16 glassesScale    : 4;    // 07
            u16 glassesYScale   : 5;    // 11
        };
        u16 glasses; // 0x44
    };

    union {
        struct {
            // 0x46
            u16 enableMole  : 1;    // 00
            u16 moleScale   : 4;    // 01
            u16 moleXPos    : 5;    // 05
            u16 moleYPos    : 5;    // 10
            u16 pad_46_15   : 1;    // 15
        };
        u16 mole; // 0x46
    };
} CFLiMiiCoreData;

#endif // CFLi_TYPES_H
