//
// Created by jyong on 2021/7/14.
//

#include "SqlDBFactory.h"
#include "SqlCommand.h"
#include "SqlConnection.h"
#include "SqlExcute.h"
IDBCommand * SqlDBFactory::createCommand() {
    return new SqlCommand();
}
IDBExcute * SqlDBFactory::createExcute() {
    return new SqlExcute();
}
IDBConnection * SqlDBFactory::createConnection() {
    return new SqlConnection();
}