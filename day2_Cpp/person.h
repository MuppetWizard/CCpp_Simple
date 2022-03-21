//
// Created by ASUS on 2022/3/21.
//

#ifndef NDK_SIMPLE_SIMPLE_H
#define NDK_SIMPLE_SIMPLE_H

#endif //NDK_SIMPLE_SIMPLE_H

void personTest();

class Person{
    //成员变量
    char *name;
    char *gen;
    int age;
public:
    Person(); //空参构造函数

    ~Person(); //person销毁执行

    Person(char *name, char *gen, int age); //有参构造函数



    //函数
    void setName(char *name);

    char *getName();

    void setGen(char *gen);

    char *getGen();

    void setAge(int age);

    int getAge();
};


