//
// Created by ASUS on 2022/3/17.
//
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include "day2.h"
//#include "person.h" //坑爹啊
#include "spiderMan.h"
#include <pthread.h>

//定义一个线程数量宏
#define NUM_THREADS 5

//空间命名
using namespace std;

int main(){
    test1();
//    referenceTest();
//    ioTest();
//    personTest();
//    test3();
//test4();
//test5();
//test6();
//test7();
threadTest();
    return 0;
}

void test1() {

    //1. 使用命名空间
        cout << "C++ Program Hello World!" << endl;
    // 一个对C++打印的封装
//    println("","C++ Program Hello World!");
    //未使用命名空间
//    std::cout << "C++ Program Hello World!" << std::endl;
}


//基本数据类型
void test2(){
//    println("C++\t\t", "**************基本数据类型 Size ***********\n");
//
//    println("bool\t\t", "所占字节数:", sizeof(bool), "\t\t最大值:",
//            (numeric_limits<bool>::max)(), "\t\t最小值:", (numeric_limits<bool>::min)());
//    println("char\t\t", "所占字节数:", sizeof(char), "\t\t最大值:",
//            (numeric_limits<char>::max)(), "\t\t最小值:", (numeric_limits<char>::min)());
//    println("unsigned char\t\t", "所占字节数:", sizeof(unsigned char), "\t\t最大值:",
//            (numeric_limits<unsigned char>::max)(), "\t\t最小值:", (numeric_limits<unsigned char>::min)());
//    println("signed char\t\t", "所占字节数:", sizeof(signed char), "\t\t最大值:",
//            (numeric_limits<signed char>::max)(), "\t\t最小值:", (numeric_limits<signed char>::min)());
//    println("int\t\t", "所占字节数:", sizeof(int), "\t\t最大值:",
//            (numeric_limits<int>::max)(), "\t\t最小值:", (numeric_limits<int>::min)());
//    println("unsigned int\t\t", "所占字节数:", sizeof(unsigned int), "\t\t最大值:",
//            (numeric_limits<unsigned int>::max)(), "\t\t最小值:", (numeric_limits<unsigned int>::min)());
//    println("signed int\t\t", "所占字节数:", sizeof(signed int), "\t\t最大值:",
//            (numeric_limits<signed int>::max)(), "\t\t最小值:", (numeric_limits<signed int>::min)());
//    println("short int\t\t", "所占字节数:", sizeof(short int), "\t\t最大值:",
//            (numeric_limits<short int>::max)(), "\t\t最小值:", (numeric_limits<short int>::min)());
//    println("unsigned short int\t\t", "所占字节数:", sizeof(unsigned short int), "\t\t最大值:",
//            (numeric_limits<unsigned short int>::max)(), "\t\t最小值:", (numeric_limits<unsigned short int>::min)());
//    println("signed short int\t\t", "所占字节数:", sizeof(signed short int), "\t\t最大值:",
//            (numeric_limits<signed short int>::max)(), "\t\t最小值:", (numeric_limits<signed short int>::min)());
//    println("long int\t\t", "所占字节数:", sizeof(long int), "\t\t最大值:",
//            (numeric_limits<long int>::max)(), "\t\t最小值:", (numeric_limits<long int>::min)());
//    println("signed long int\t\t", "所占字节数:", sizeof(signed long int), "\t\t最大值:",
//            (numeric_limits<signed long int>::max)(), "\t\t最小值:", (numeric_limits<signed long int>::min)());
//    println("unsigned long int\t\t", "所占字节数:", sizeof(unsigned long int), "\t\t最大值:",
//            (numeric_limits<unsigned long int>::max)(), "\t\t最小值:", (numeric_limits<unsigned long int>::min)());
//    println("float\t\t", "所占字节数:", sizeof(float), "\t\t最大值:",
//            (numeric_limits<float>::max)(), "\t\t最小值:", (numeric_limits<float>::min)());
//    println("double\t\t", "所占字节数:", sizeof(double), "\t\t最大值:",
//            (numeric_limits<double>::max)(), "\t\t最小值:", (numeric_limits<double>::min)());
//    println("long double\t\t", "所占字节数:", sizeof(long double), "\t\t最大值:",
//            (numeric_limits<long double>::max)(), "\t\t最小值:", (numeric_limits<long double>::min)());
//    println("wchar_t\t\t", "所占字节数:", sizeof(wchar_t), "\t\t最大值:",
//            (numeric_limits<wchar_t>::max)(), "\t\t最小值:", (numeric_limits<wchar_t>::min)());
//

}

void mOperator(){
    //算术运算符
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - c 的值是 " << c << endl;
    c = a - b;
    cout << "Line 2 - c 的值是 " << c << endl;
    c = a * b;
    cout << "Line 3 - c 的值是 " << c << endl;
    c = a / b;
    cout << "Line 4 - c 的值是 " << c << endl;
    c = a % b;
    cout << "Line 5 - c 的值是 " << c << endl;

    int d = 10;   //  测试自增、自减
    c = d++; //先赋值，再自增
    cout << "Line 6 - c 的值是 " << c << " " << d << endl;

    d = 12;    // 重新赋值
    c = d--; //先赋值，再自减
    cout << "Line 7 - c 的值是 " << c << " " << d << endl;

    //关系运算符
    if (a == b) {
        cout << "Line 1 - a 等于 b" << endl;
    } else {
        cout << "Line 1 - a 不等于 b" << endl;
    }
    if (a < b) {
        cout << "Line 2 - a 小于 b" << endl;
    } else {
        cout << "Line 2 - a 不小于 b" << endl;
    }
    if (a > b) {
        cout << "Line 3 - a 大于 b" << endl;
    } else {
        cout << "Line 3 - a 不大于 b" << endl;
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if (a <= b) {
        cout << "Line 4 - a 小于或等于 b" << endl;
    }
    if (b >= a) {
        cout << "Line 5 - b 大于或等于 a" << endl;
    }
}

//位运算符
void byteOperator(){
    cout << "\n\n\n位运算符" << endl;
    //位运算符
    unsigned int aW = 60;      // 60 = 0011 1100
    unsigned int bW = 13;      // 13 = 0000 1101
    int cW = 0;

    cW = aW & bW;             // 12 = 0000 1100
    cout << "Line 1 - cW 的值是 " << cW << endl;

    cW = aW | bW;             // 61 = 0011 1101
    cout << "Line 2 - cW 的值是 " << cW << endl;

    cW = aW ^ bW;             // 49 = 0011 0001
    cout << "Line 3 - cW 的值是 " << cW << endl;

    cW = ~aW;                // -61 = 1100 0011
    cout << "Line 4 - cW 的值是 " << cW << endl;

    cW = aW << 2;            // 240 = 1111 0000
    cout << "Line 5 - cW 的值是 " << cW << endl;

    cW = aW >> 2;            // 15 = 0000 1111
    cout << "Line 6 - cW 的值是 " << cW << endl;

}

//赋值运算符
void assignOperator(){
    cout << "\n\n\n赋值运算符" << endl;
    int a,c;
    a = 50;
    //赋值运算符
    c = a;
    cout << "Line 1 - =  运算符实例，c 的值 = : " << c << endl;

    c += a;
    cout << "Line 2 - += 运算符实例，c 的值 = : " << c << endl;

    c -= a;
    cout << "Line 3 - -= 运算符实例，c 的值 = : " << c << endl;

    c *= a;
    cout << "Line 4 - *= 运算符实例，c 的值 = : " << c << endl;

    c /= a;
    cout << "Line 5 - /= 运算符实例，c 的值 = : " << c << endl;

    c = 200;
    c %= a;
    cout << "Line 6 - %= 运算符实例，c 的值 = : " << c << endl;

    c <<= 2;
    cout << "Line 7 - <<= 运算符实例，c 的值 = : " << c << endl;

    c >>= 2;
    cout << "Line 8 - >>= 运算符实例，c 的值 = : " << c << endl;

    c &= 2;
    cout << "Line 9 - &= 运算符实例，c 的值 = : " << c << endl;

    c ^= 2;
    cout << "Line 10 - ^= 运算符实例，c 的值 = : " << c << endl;

    c |= 2;
    cout << "Line 11 - |= 运算符实例，c 的值 = : " << c << endl;
}

//循环
void cycle(){
    //for 循环
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 1) {
            cout << i << "==" << i % 2 << endl;
            //跳出当前循环，继续下一次操作
            continue;
        }
        if (i == 8) {
            cout << "跳出循环" << endl;
            break;
        }
        cout << "遍历中..." << "==" << i << endl;
    }

    for (int j = 0; j < 3; ++j) {
        if (j == 1) {
            cout << "j 跳出循环" << endl;
            return;
        }
        cout << "j 就遍历中..." << "==" << j << endl;
    }
}

//引用
void referenceTest(){
    //以下，
    int a = 10;
    int& c = a;
    cout << "a == " << a << " &a == " << &a << endl;
    cout << "c == " << c << " &c == " << &c << endl;
    c = 20;
    cout << "a == " << a << " &a == " << &a << endl;
    //输出结果为
//    a == 10 &a == 0x61fde4
//    c == 10 &c == 0x61fde4
//    a == 20 &a == 0x61fde4
}

//date & time
void dateAndTime(){
    //当前日期
    currentDate();
    structTime();
}

void currentDate() {
//获取系统的时间
    time_t now = time(0);
    //把 now 转为字符串
    char *curTime = ctime(&now);

    //把 now 转为 tm 结构
    tm *gmtm = gmtime(&now);
    cout << "当前时间\t" << curTime << endl;

    curTime = asctime(gmtm);

    cout << "UTC 日期和时间\t" << curTime << endl;
}

void structTime(){

    time_t now = time(0);
    //基于当前系统的日期/时间
    cout << "1970 到目前经过的秒数:" << now << endl;

    tm *ltm = localtime(&now);
    //输出 tm 结构的各个组成部分
    cout << "年: " << 1990 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时: " << ltm->tm_hour << endl;
    cout << "分: " << ltm->tm_min << endl;
    cout << "秒: " << ltm->tm_sec << endl;
}

// I/O 输入输出流
void ioTest(){
    //输出流 cout
    char str[] = "Hello, World";
    cout << "value is: " << str << endl;
    //输入流 cin
    char name[10];
    cin >> name;
    cout << "Please enter your name: " << name << endl;
    //错误流 cerr;
    char errStr[] = "Read Error";
    cerr << "error message: " << errStr << endl;
    //日志流 clog;
    char logStr[] = "out log";
    clog << "Debug Log; " << logStr << endl;
}

// 数据结构
//函数接收指针结构体参数，并访问结构体成员变量示例;
struct Movie{
    char tittle[25];
    char address[25];
} movie ;
void movieInfo(Movie * movie);
void dataStructure(){
    Movie movieA, movieB;

    //movieA 详述;
    strcpy(movieA.tittle,"The Bat Man");
    strcpy(movieA.address,"China");
    movieInfo(&movieA);

    //movieB;
    strcpy(movieB.tittle,"The Spider Man");
    strcpy(movieB.address,"China");
    movieInfo(&movieB);
}
void movieInfo(Movie * movie){
    cout << movie ->tittle << "\t" << movie->address << endl;
}

//指向类的指针
void test3(){
    Person mPerson("Lily","female",20);
    Person *ptrPerson;
//    ptrPerson = new Person("Lily","female",20);
//    ptrPerson = new Person();
    ptrPerson = &mPerson;
    cout << ptrPerson -> getName() << "\t" << ptrPerson -> getGen() << "\t" << ptrPerson -> getAge() << "\n" << endl;
}

//静态成员
void test4(){

    // 在创建对象之前输出对象的总数
    cout << "Initial Stage Count: " << Person::getCount() << endl;

    Person person1("Lily","female",20);
    Person person2("Julia","female",18);
    Person person3("Alex","male",18);
    // 输出对象的总数
    cout << "Total objects: " << Person::getCount() << endl;
}

// 继承
void test5(){
    SpiderMan *spiderMan = new SpiderMan();
//    spiderMan->setName("MJ");
    spiderMan -> spiderSilk();
    spiderMan -> spiderSense();
    //多态，重写父类方法
    //获取子类数据
    int test = spiderMan->test();
    cout << "test->\t" << test << endl;
}

//文件和牛
void test6(){
    char data[100];
    //ofsteam 用于创建文件并写入
    ofstream outFile;
    outFile.open("D:/CLionProjects/NDK_Simple/CppSimple.md");
    cout << "Please enter something: "<< endl;
    cin.getline(data,100);
    //向文件写入数据
    outFile << data << endl;

    cin.ignore();
//    关闭输出文件流；
    outFile.close();

    cout << "\n\n" << endl;
    char readData[100];
    //读文件
    ifstream readFile;
    readFile.open("D:/CLionProjects/NDK_Simple/CppSimple.md");
    readFile.getline(readData,100);
    cout << "Read File Success: \n" << readData << endl;
    readFile.close();
}

//dynamic memory allocation
void test7(){
    //初始化为 NULL　指针
    double *pvalue = NULL;
    //申请内存并创建对象
    pvalue = new double;
    //save value in address
    *pvalue = 3.1415926535;
    cout << "pvalue Address: " << pvalue << "\npvalue Value: " << *pvalue << endl;
    //release memory
    delete pvalue;

    //数组的动态内存分配
    //动态分配，数组长度为 10
    int *array = new int[10];
    //释放数组内存
    delete[] array;

    //对象的动态内存分配
    Person *testBox = new Person[10];
    delete[] testBox;
}

//多线程
void *logD(void *args){
    int threadID = *((int*)args);
    cout << "thread is running "<< threadID << endl;
}
void threadTest(){
    pthread_t tids[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; ++i) {
        //参数依次是：创建的线程 id,线程参数，调用的函数，传入的参数函数
        int ptc = pthread_create(&tids[i],NULL,logD,(void*)&(i));
        if (ptc != 0){
            cout << "pthread_create error:error code ：" << ptc << endl;
        }
    }
    //线程执行完毕退出
    pthread_exit(NULL);
}


