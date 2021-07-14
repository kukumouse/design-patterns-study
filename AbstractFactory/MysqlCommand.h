//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_MYSQLCOMMAND_H
#define STADUY_MYSQLCOMMAND_H
#include "IDBCommand.h"

class MysqlCommand:public IDBCommand {
public:
    virtual void command();
};


#endif //STADUY_MYSQLCOMMAND_H
