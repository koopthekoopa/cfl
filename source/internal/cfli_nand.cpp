#include <CTRFaceLib.h>

#include <nn.h>
#include <nn/fs.h>

#define CFL_NAND_TITLE_ID 0x0004009B00010202
#define CFL_NAND_RES_NAME "$CFLRES:"

#define CFL_NAND_LIMIT  2

#define CFL_NAND_WORK_MEMORY_SIZE   0x80
static u8 sMountWork[CFL_NAND_WORK_MEMORY_SIZE];

static bool sMountedContent = false;

CFLResult CFLi_MountNandContent() {
    if (!sMountedContent) {
        u32 workSize = nn::fs::GetContentRequiredMemorySize(nn::fs::MEDIA_TYPE_NAND,
                                                            CFL_NAND_TITLE_ID, 0,
                                                            CFL_NAND_LIMIT, CFL_NAND_LIMIT);
        NN_DBG_ASSERT(workSize <= CFL_NAND_WORK_MEMORY_SIZE);

        nn::Result result = nn::fs::MountContent(CFL_NAND_RES_NAME,
                                                nn::fs::MEDIA_TYPE_NAND,
                                                CFL_NAND_TITLE_ID, 0,
                                                CFL_NAND_LIMIT, CFL_NAND_LIMIT,
                                                sMountWork, CFL_NAND_WORK_MEMORY_SIZE,
                                                false);

        if (result.Failed()) {
            if (result.IsNotOK()) {
                nn::err::CTR::ThrowFatalErrAll(result, __current_pc());
            }
            return CFL_RESULT_NAND_COMMAND_FAIL;
        }

        sMountedContent = true;
    }

    return CFL_RESULT_SUCCESS;
}

void CFLi_UnmountNandContent() {
    if (sMountedContent) {
        nn::fs::Unmount(CFL_NAND_RES_NAME);
        sMountedContent = false;
    }
}
