//
// Created by ASUS on 2022/3/10.
//
#include <stdio.h>
#include <float.h>
#include "support.h"
#include "ndk_day2.h"



void type();
void assignmentOperator();
void arrays();
void multidimensionalArrays();
void enumTest();
void pointer();
void pointerToPointer();

/**
 * C 语言入口程序
 * @return
 */
int main() {
    printf("C  Hello World! \n");
//    int sum = add(3,4);
//    printf("extern Use %d",sum);
//    type();
//    assignmentOperator();
//    arrays();
//    multidimensionalArrays();
//    enumTest();
//    pointer();
//    pointerToPointer();
//    pointerParam();
//    getPointerFromFunc();
//    funcPointer();
//    callbackFunc();
//    bitField();
//mTypedef();
//    inputOutput();
//fileEdit();
preprocessor();
    return 0;
}

//数据类型
void type() {
    /**
   * 整数类型
   */

    printf("\n\n 整数类型 \n");

    //char 1 字节
    printf("char 存储大小: %lu \n", sizeof(char));
    printf("unsinged char 存储大小: %lu \n", sizeof(unsigned char));

    //short 2 字节
    printf("short 存储大小: %lu \n", sizeof(short));
    printf("unsinged short 存储大小: %lu \n", sizeof(unsigned short));

    //int 4 字节
    printf("int 存储大小: %lu \n", sizeof(int));
    printf("unsinged int 存储大小: %lu \n", sizeof(unsigned int));


    //long 4/8 字节
    printf("long 存储大小: %lu \n", sizeof(long));
    printf("unsinged long 存储大小: %lu \n", sizeof(unsigned long));

    /**
 * 浮点类型
 */

    printf("\n\n 浮点类型 \n");
    //float 4 字节 ，精度 6 位小数
    printf("float 存储最大字节数：%lu \n", sizeof(float));
    printf("float 最小值：%e \n", FLT_MIN);
    printf("float 最大值：%e \n", FLT_MAX);
    printf("float 精度值：%d \n", FLT_DIG);

    //double 8 字节
    printf("double 存储最大字节数：%d \n", sizeof(double));
    printf("double 最小值：%e \n", DBL_MIN);
    printf("double 最大值：%e \n", DBL_MAX);
    printf("double 精度值：%d \n", DBL_DIG);

    //long double 16 字节
    printf("long double 存储最大字节数：%lu byte \n", sizeof(long double));
    printf("long double 最小值：%lg \n", LDBL_MIN);
    printf("long double 最大值：%lg \n", LDBL_MAX);
    printf("long double 精度值：%d \n", LDBL_DIG);

}

//赋值运算符
void assignmentOperator(){
    int wAA = 21;
    int wBB;

    wBB = wAA;
    printf("= %d\n", wBB);

    wBB += wAA;
    printf("+= %d\n", wBB);

    wBB -= wAA;
    printf("-= %d\n", wBB);

    wBB *= wAA;
    printf("*= %d\n", wBB);

    wBB /= wAA;
    printf("/= %d\n", wBB);

    wBB %= wAA;
    printf("%= %d\n", wBB);

    wBB <<= wAA;
    printf("<<= %d\n", wBB);

    wBB <<= wAA;
    printf(">>= %d\n", wBB);

    wBB &= wAA;
    printf("&= %d\n", wBB);

    wBB ^= wAA;
    printf("^= %d\n", wBB);

    wBB |= wAA;
    printf("|= %d\n", wBB);
}

//数组
void arrays(){
    int n[10];
    int i, j;

    //数组初始化
    for (int k = 0; k < 10; ++k) {
        n[k] = k * 3;
    }
    //总的大小除以其中一个大小就得到了 数组长度
    printf("size of n/n[10]: %d, Array n's length: %d \n", sizeof(n[0]), sizeof(n) / sizeof(n[0]));


    //输出元素中的数据
    for (int k = 0; k < sizeof(n)/ sizeof(n[0]); ++k) {
        printf("Element[%d] = %d \n", k, n[k]);
    }
}

//枚举
void enumTest(){
    //省略枚举类型名称，直接定义枚举变量 day
    enum {
        MON = 1, TUE, WED, THU, FRI, SAT, SUN
    } day;
    for (day = MON; day <= SUN; day++) {
        printf("week: %d\n",day);
    }

    //先定义枚举类型
    enum Color {red = 1, green, blue, black, white};
    //再定义枚举变量
    enum Color favorite_color;
    printf("Please enter your favorite color: (red = 1, green = 2, blue = 3, black = 4, white = 5)");
    scanf("%d",&favorite_color);
    switch (favorite_color) {
        case red:
            printf("your favorite color is red");
            break;
        case green:
            printf("your favorite color is green");
            break;
        case blue:
            printf("your favorite color is blue");
            break;
        case black:
            printf("your favorite color is black");
            break;
        case white:
            printf("your favorite color is white");
            break;
        default:
            printf("Oops, there's not have your favorite color");
    }

    //整数转枚举
    int a = 3;
    favorite_color = (enum Color) a;
    printf("\nInteger to enum Color: %d\n",favorite_color);

}

//多维数组
void multidimensionalArrays(){
    int x[3][4] = {
            0,1,2,3,
            4,5,6,7,
            8,9,10,11
    };
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("x[%d][%d] = %d\n",i,j,x[i][j]);
        }
    }
}

//指针
void pointer(){
    int  var[] = {10, 100, 200};
    int  i, *ptr;

    /* 指针中第一个元素的地址 */
    ptr = var;
    i = 0;
    while ( ptr <= &var[3 - 1] )
    {

        printf("Address: var[%d] = %p\n", i, ptr );
        printf("Value: var[%d] = %d\n", i, *ptr );

        /* 指向上一个位置 */
        ptr++;
        i++;
    }
}


//指向指针的指针
void pointerToPointer(){
    int v;
    int *ptr1;
    int **ptr2;
    v = 100;

    //获取地址
    ptr1 = &v;
    //获取ptr1的地址
    ptr2 = &ptr1;

    printf("var = %d\n",v);
    printf("var2 address = %p\n",ptr1);
    printf("ver2 = %d\n",*ptr1);
    printf("ver3 address = %p\n", ptr2);
    printf("var3 = %d\n", **ptr2);
}






