//
// Created by ASUS on 2022/3/21.
//

#ifndef NDK_SIMPLE_SIMPLE_H
#define NDK_SIMPLE_SIMPLE_H

void personTest();

class Person{
private:
    //成员变量
    char *name;
    char *gen;
    int age;
public:
    Person(); //空参构造函数

    ~Person(); //person销毁执行

    Person(char *name, char *gen, int age); //有参构造函数

    //静态变量 通过类名加范围解析运算符::访问
    static int objectCount;

    //静态函数 通过类名加范围解析运算符::访问
    static int getCount();

    //函数
    void setName(char *name);

    char *getName();

    void setGen(char *gen);

    char *getGen();

    void setAge(int age);

    int getAge();
    /**
    * 虚函数 是在基类中使用关键字 virtual 声明的函数。
    * 在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
    * @return
    */
    //virtual 转移给子类实现
    virtual int test() {
        return 10;
    };

};

#endif //NDK_SIMPLE_SIMPLE_H


