//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_TEXTFACTORY_H
#define STADUY_TEXTFACTORY_H

#include "Factory.h"
class TextFactory:public Factory {
public:
    virtual ISplitter* createSplitter();
};


#endif //STADUY_TEXTFACTORY_H
