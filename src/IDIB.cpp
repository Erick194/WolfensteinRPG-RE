#include <stdexcept>

#include "IDIB.h"

IDIB::IDIB() {
}

IDIB::~IDIB() {
    if (this) {
        if (this->pBmp) {
            free(this->pBmp);
            this->pBmp = nullptr;
        }
        if (this->pRGB888) {
            free(this->pRGB888);
            this->pRGB888 = nullptr;
        }
        if (this->pRGB565) {
            free(this->pRGB565);
            this->pRGB565 = nullptr;
        }
    }
}
