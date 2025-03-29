#pragma once
#ifndef NN_FS_FILE_SYSTEM_BASE_H
#define NN_FS_FILE_SYSTEM_BASE_H

#include <nn/fs/fs_Types.h>

#include <nn/nn_Result.h>

namespace nn {
    namespace fs {
        s32     GetContentRequiredMemorySize(MediaType type, u64 titleId, u32 cIdx, u32 fileLimit, u32 dirLimit);

        Result  MountContent(const char* driveName, MediaType type, u64 titleId, u32 cIdx, u32 fileLimit, u32 dirLimit, void* work, u32 workSize, bool bUseCache);
        void    Unmount(const char* driveName);
    }
}

#endif // NN_FS_FILE_SYSTEM_BASE_H
