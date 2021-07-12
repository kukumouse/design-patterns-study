// Created by jyong on 2021/7/12.
//

#ifndef STADUY_PCMESSAGERBASE_H
#define STADUY_PCMESSAGERBASE_H

#include "Messager.h"
class PcMessagerBase :public MessagerImp {

public:
     void PlaySound();
     void DrawShape();
     void WriteText();
     void Connect();

};


#endif //STADUY_PCMESSAGERBASE_H
