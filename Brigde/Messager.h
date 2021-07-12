//
// Created by jyong on 2021/7/12.
//

#ifndef STADUY_MESSAGER_H
#define STADUY_MESSAGER_H

#include "MessagerImp.h"

class Messager{
protected:
    MessagerImp* messagerImp;
public:

    virtual void SendMessage() = 0;
    virtual void SendPicture() = 0;
    virtual void Login() = 0;

    virtual ~Messager(){};

};

#endif //STADUY_MESSAGER_H