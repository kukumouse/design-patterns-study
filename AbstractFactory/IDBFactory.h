//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_IDBFACTORY_H
#define STADUY_IDBFACTORY_H
#include "IDBCommand.h"
#include "IDBExcute.h"
#include "IDBConnection.h"
class IDBFactory{
public:
    virtual IDBConnection* createConnection() = 0;
    virtual IDBCommand* createCommand() = 0;
    virtual IDBExcute* createExcute() = 0;
    virtual ~IDBFactory(){}
};
#endif //STADUY_IDBFACTORY_H
