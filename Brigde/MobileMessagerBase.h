//
// Created by jyong on 2021/7/12.
//

#ifndef STADUY_MOBILEMESSAGERBASE_H
#define STADUY_MOBILEMESSAGERBASE_H

#include "Messager.h"
class MobileMessagerBase:public MessagerImp {
public:
    void PlaySound();
    void DrawShape();
    void WriteText();
    void Connect();

};


#endif //STADUY_MOBILEMESSAGERBASE_H
