//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_IDBCONNECTION_H
#define STADUY_IDBCONNECTION_H
#include <iostream>
using namespace std;
class IDBConnection{
public:
    virtual void connection() = 0;
    virtual ~IDBConnection(){}
};
#endif //STADUY_IDBCONNECTION_H
