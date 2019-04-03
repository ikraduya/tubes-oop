/**
 * @file MilkProducing.h
 * @author Azhar A
 * @date 2019-04-3
 */
#ifndef MILK_PRODUCING
#define MILK_PRODUCING
#include "../products/FarmProducts.h"

class MilkProducing{
    protected:
        /**
         * Menghasilkan susu
         */
        virtual FarmProducts& produceMilk() = 0;
};

#endif