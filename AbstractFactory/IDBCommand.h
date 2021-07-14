//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_IDBCOMMAND_H
#define STADUY_IDBCOMMAND_H
#include <iostream>
using namespace std;
class IDBCommand{
public:
    virtual void command() = 0;
    virtual ~IDBCommand(){}
};

#endif //STADUY_IDBCOMMAND_H
