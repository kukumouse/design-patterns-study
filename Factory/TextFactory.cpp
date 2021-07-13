//
// Created by jyong on 2021/7/14.
//

#include "TextFactory.h"
#include "TextSplitter.h"
ISplitter * TextFactory::createSplitter() {
    return new TextSplitter();
}
