//
// Created by jyong on 2021/7/14.
//

#include "BinarySplitter.h"
#include "BinaryFactory.h"
ISplitter * BinaryFactory::createSplitter() {
    return new BinarySplitter();
}