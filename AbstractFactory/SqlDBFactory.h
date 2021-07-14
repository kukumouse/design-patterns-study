//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_SQLDBFACTORY_H
#define STADUY_SQLDBFACTORY_H

#include "IDBFactory.h"

class SqlDBFactory :public IDBFactory{
public:
    virtual IDBConnection* createConnection();
    virtual IDBCommand* createCommand();
    virtual IDBExcute* createExcute();
};


#endif //STADUY_SQLDBFACTORY_H
