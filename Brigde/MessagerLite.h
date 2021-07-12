//
// Created by jyong on 2021/7/12.
//

#ifndef STADUY_MESSAGERLITE_H
#define STADUY_MESSAGERLITE_H

#include "Messager.h"
class MessagerLite:public Messager {
public:
    virtual void SendMessage();
    virtual void SendPicture();
    virtual void Login();

    MessagerLite(MessagerImp* imp) {
        messagerImp = imp;
    }

};


#endif //STADUY_MESSAGERLITE_H
