//
// Created by jyong on 2021/7/12.
//

#ifndef STADUY_MESSAGERPERFECT_H
#define STADUY_MESSAGERPERFECT_H

#include "Messager.h"
class MessagerPerfect: public Messager{
public:
    virtual void SendMessage();
    virtual void SendPicture();
    virtual void Login();

    MessagerPerfect(MessagerImp* imp){
        messagerImp = imp;
    }
};


#endif //STADUY_MESSAGERPERFECT_H
