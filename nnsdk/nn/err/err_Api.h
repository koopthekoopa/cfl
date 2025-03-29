#pragma once
#ifndef NN_ERR_API_H
#define NN_ERR_API_H

#include <nn/types.h>
#include <nn/nn_Result.h>

namespace nn {
    namespace err {
        namespace CTR {
            void    ThrowFatalErrAll(Result result, u32 pc);
        }
    }
}

#endif // NN_ERR_API_H
