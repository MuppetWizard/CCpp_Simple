//
// Created by ASUS on 2022/3/22.
//

#ifndef NDK_SIMPLE_SPIDERMAN_H
#define NDK_SIMPLE_SPIDERMAN_H


#include "person.h"

class SpiderMan : public Person {


public:
    SpiderMan();
    SpiderMan(char *name ,char *gen , int age );
    ~SpiderMan();

    void spiderSense();

    void spiderSilk();

    int test(){
        return -10;
    }
};


#endif //NDK_SIMPLE_SPIDERMAN_H
