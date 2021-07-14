//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_SQLCONNECTION_H
#define STADUY_SQLCONNECTION_H

#include "IDBConnection.h"
class SqlConnection:public IDBConnection {
public:
    virtual void connection();
};


#endif //STADUY_SQLCONNECTION_H
