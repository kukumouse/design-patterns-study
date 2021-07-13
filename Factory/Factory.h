//
// Created by jyong on 2021/7/13.
//

#ifndef STADUY_FACTORY_H
#define STADUY_FACTORY_H
#include "ISplitter.h"
class Factory{
public:
    virtual ISplitter* createSplitter() = 0;
    virtual ~Factory(){}
};
#endif //STADUY_FACTORY_H
