#pragma once
#ifndef NN_DBG_BREAK_H
#define NN_DBG_BREAK_H

#define NN_DBG_ASSERT(exp) if (!(exp)) { nndbgPanic(); }

extern "C" {
void nndbgPanic();
}

namespace nn {
    namespace db {
        void    Panic();
    }
}

#endif // NN_DBG_BREAK_H
