//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_BINARYFACTORY_H
#define STADUY_BINARYFACTORY_H

#include "Factory.h"
class BinaryFactory: public Factory {
public:
    virtual ISplitter* createSplitter();
};


#endif //STADUY_BINARYFACTORY_H
