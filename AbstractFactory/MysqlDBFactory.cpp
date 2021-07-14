//
// Created by jyong on 2021/7/15.
//

#include "MysqlDBFactory.h"
#include "MysqlCommand.h"
#include "MysqlConnection.h"
#include "MysqlExcute.h"
IDBCommand * MysqlDBFactory::createCommand() {
    return new MysqlCommand();
}
IDBConnection * MysqlDBFactory::createConnection() {
    return new MysqlConnection();
}
IDBExcute * MysqlDBFactory::createExcute() {
    return new MysqlExcute();
}
