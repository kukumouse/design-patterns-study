//
// Created by jyong on 2021/7/15.
//

#ifndef STADUY_MYSQLDBFACTORY_H
#define STADUY_MYSQLDBFACTORY_H

#include "IDBFactory.h"
class MysqlDBFactory :public IDBFactory{
public:
    virtual IDBConnection* createConnection();
    virtual IDBCommand* createCommand();
    virtual IDBExcute* createExcute();

};


#endif //STADUY_MYSQLDBFACTORY_H
