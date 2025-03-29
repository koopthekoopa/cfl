#pragma once
#ifndef NN_FS_TYPES_H
#define NN_FS_TYPES_H

#include <nn/types.h>

namespace nn {
    namespace fs {
        typedef enum MediaType {
            MEDIA_TYPE_NAND,
            MEDIA_TYPE_SDMC,
            MEDIA_TYPE_CTR_CARD
        } MediaType;
    }
}

#endif // NN_FS_TYPES_H
