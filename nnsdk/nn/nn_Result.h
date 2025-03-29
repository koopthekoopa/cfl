#pragma once
#ifndef NN_RESULT_H
#define NN_RESULT_H

#include <nn/types.h>

namespace nn {
    //typedef s32 Result;

    class Result {
        public:
            bool Failed() {
                return (code & FLAG_FAILED);
            }
            bool Succeeded() {
                return !Failed();
            }
            s32 GetCodeBits() {
                return code;
            }

            bool IsNotOK() {
                return code < 0;
            }
        private:
            enum {
                FLAG_FAILED = (1u<<31u)
            };

            s32 code;
    };
}

#endif // NN_RESULT_H
