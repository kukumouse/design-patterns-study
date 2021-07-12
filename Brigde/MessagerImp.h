//
// Created by jyong on 2021/7/12.
//

#ifndef STADUY_MESSAGERIMP_H
#define STADUY_MESSAGERIMP_H
class MessagerImp{
public:
    virtual void PlaySound() = 0;
    virtual void DrawShape() = 0;
    virtual void WriteText() = 0;
    virtual void Connect() = 0;

    virtual ~MessagerImp(){}
};

#endif //STADUY_MESSAGERIMP_H
