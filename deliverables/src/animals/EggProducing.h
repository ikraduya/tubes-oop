/**
 * @file EggProducing.h
 * @author Azhar A
 * @date 2019-04-3
 */
#ifndef EGG_PRODUCING
#define EGG_PRODUCING
#include "../products/FarmProducts.h"

class EggProducing{
    protected:
        /**
        * Menghasilkan telur
        */
        virtual FarmProducts& produceEgg() = 0;
};

#endif