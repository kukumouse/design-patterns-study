//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_MYSQLCONNECTION_H
#define STADUY_MYSQLCONNECTION_H

#include "IDBConnection.h"
class MysqlConnection:public IDBConnection {
public:
    virtual void connection();
};


#endif //STADUY_MYSQLCONNECTION_H
