//
// Created by jyong on 2021/7/14.
//

#ifndef STADUY_SQLCOMMAND_H
#define STADUY_SQLCOMMAND_H

#include "IDBCommand.h"
class SqlCommand:public IDBCommand {
public:
    virtual void command();
};


#endif //STADUY_SQLCOMMAND_H
