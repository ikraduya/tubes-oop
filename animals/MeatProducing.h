/**
 * @file MeatProducing.h
 * @author Azhar A
 * @date 2019-04-3
 */
#ifndef MEAT_PRODUCING
#define MEAT_PRODUCING
#include "../products/FarmProducts.h"

class MeatProducing{
    protected:
        /**
         * Menghasilkan daging
         */
        virtual FarmProducts& produceMeat() = 0;
};

#endif