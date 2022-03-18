//
// Created by ASUS on 2022/3/14.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


void getSeconds(unsigned long *par);
int * getRandom();
int max(int num1, int num2);
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void));
int getNextRandomValue(void);
void accessStruct();



//传递指针参数给函数
void pointerParam(){
    unsigned long sec;
    getSeconds(&sec);
    printf("Current Second %ld\n",sec);
}
void getSeconds(unsigned long *par){
    *par = time(NULL);
}

//从函数返回指针
void getPointerFromFunc(){
    int *p;
    p = getRandom();
    for (int i = 0; i <10; ++i) {
        printf("*(p + [%d]) : %d\n", i, *(p + i) );
    }
}
int * getRandom(){
    //c 不支持返回局部变量，除非声明为 static 为其在静态数据区开辟内存空间
    static int r[10];
    srand((unsigned) time(NULL));
    for (int i = 0; i <= 10; ++i) {
        r[i] = rand();
        printf("%d\n",r[i]);
    }
    return r;
}

//函数指针
void funcPointer(){
    //定义一个返回值为 int 类型，参数为 （int,int） 形式的函数指针
    int (*p)(int, int) = max;
    int a,b,c,d;
    printf("Please enter three Numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    //等价于 d = max(max(a,b),c)
    d = p(p(a,b),c);
    printf("The MAX number is %d\n",d);
}
int max(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}

//回调函数
void callbackFunc(){
    int array[10];
    printf("Int array address: %p \n",array);
    populate_array(array, sizeof(array)/ sizeof(array[0]), getNextRandomValue);
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        printf("array[%d] Value is: %d\n",i,array[i]);
    }
}
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void)){
    printf("array address: %p \n",array);
    for (size_t i = 0; i < arraySize; ++i) {
        array[i] = getNextValue();
        printf("array[%d] ,Save Value: %d \n", i, array[i]);
    }
}
//获取一个随机数
int getNextRandomValue() {
    return rand();
}

//字符串
void charTest(){
    //字符串操作
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;

    //将 str1 复制到 str3
    strcpy(str3, str1);
    printf("strcpy (str3,str1) :%s\n", str3);

    //拼接字符串  str1 + str2
    strcat(str1, str2);
    printf("strcat(str1,str2) :%s\n", str1);

    //返回字符串的长度
    len = strlen(str1);
    printf("strlen(str1) :%d\n", len);
}

//结构体
struct Book{
    char tittle[50];
    char author[50];
    int book_id;
    double price;
} book = {"Media Develop", "unknown",5457, 13.24};
void mStruct(){
    printf("title : %s\nauthor: %s\nbook_id: %d\nprice: %f\n", book.tittle,
           book.author,  book.book_id, book.price);
}

//访问结构体
void accessStruct(){
    struct Book book1;
    struct Book book2;
    //book1 详述
    strcpy(book1.tittle, "C Plus");
    strcpy(book1.author, "Nuha Ali");
    book1.book_id = 666888;
    book1.price = 12.35;

    //book2 详述
    strcpy(book2.tittle, "C Sharp");
    strcpy(book2.author, "pigng");
    book2.book_id = 555468;
    book2.price = 253.35;

    // 输出 Book1 信息
    printf("Book 1 title : %s\n", book1.tittle);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 book_id : %d\n", book1.book_id);
    printf("Book 1 price : %f\n", book1.price);

    // 输出 Book 信息
    printf("Book 2 title : %s\n", book2.tittle);
    printf("Book 2 author : %s\n", book2.author);
    printf("Book 2 book_id : %d\n", book2.book_id);
    printf("Book 2 price : %f\n", book2.price);

}

//结构体作为函数参数
void printBook(struct Book book);
void structParams(){
    struct Book book1;
    strcpy(book1.tittle,"he hahahaha");
    strcpy(book1.author,"mi");
    book1.book_id = 221121;
    book1.price= 55.22;
    printBook(book1);
}
void printBook(struct Book book) {
    printf("Book  title : %s\n", book.tittle);
    printf("Book  author : %s\n", book.author);
    printf("Book  book_id : %d\n", book.book_id);
    printf("Book  price : %f\n", book.price);
}

//位域
/*
 * 有些信息在存储时，并不需要占用一个完整的字节，而只需占几个或一个二进制位。
 * 例如在存放一个开关量时，只有 0 和 1 两种状态，用 1 位二进位即可。
 * 为了节省存储空间，并使处理简便，C 语言提供了一种数据结构，称为"位域"或"位段"。
 *
 * 所谓"位域"是把一个字节中的二进位划分为几个不同的区域，
 * 并说明每个区域的位数。每个域有一个域名，
 * 允许在程序中按域名进行操作。这样就可以把几个不同的对象用一个字节的二进制位域来表示。
 *
 * 比如以下示例中 bean1 为位域结构名，bean1分为了三个区域分别为a、b、c，并且其区域位数分别为8、4、4
 *
 */
struct bean{
    int a;
    int b;
} bean;
struct bean1{
    int a: 8;
    int b: 4;
    int c: 4;
} bean1;
struct bean2{
    unsigned int a: 1;
    unsigned int b: 1;
} bean2;
void bitField(){

    printf("bean size of %d\n", sizeof(bean));
    printf("bean1 size of %d\n", sizeof(bean1));
    printf("bean2 size of %d\n", sizeof(bean2));
}

//共同体
/*
 * 共用体占用的内存应足够存储共用体中最大的成员。
 */
union Data{
    int i;
    float f;
    char str[10];
};
void mUnion(){
    union Data data;
    printf("Memory size occupied by data: %llu\n", sizeof(data));
    data.i = 10;
    data.f = 1024.2048;
    strcpy(data.str,"C/C++");
    printf("data.i: %d\n",data.i);
    printf("data.f: %f\n",data.f);
    printf("data.str: %s\n",data.str);
    //访问共同体，同一时间只能使用一个变量成员
    printf("\n\n\n");
    data.i = 10;
    printf("data.i: %d\n",data.i);
    data.f = 1024.2048;
    printf("data.f: %f\n",data.f);
    strcpy(data.str,"C/C++");
    printf("data.str: %s\n",data.str);
}

//typedef
/*
 * typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
 * typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
 */
typedef struct Books {
    char tittle[30];
    char author[30];
    char subject[30];
    int book_id;
} Book;
#define TRUE 1
#define FALSE 0
void mTypedef(){
    Book mBook;
    strcpy(mBook.tittle,"C Program");
    strcpy(mBook.author,"nameless");
    strcpy(mBook.subject,"Computer");
    mBook.book_id = 283129;

    printf("Book name: %s\n", mBook.tittle);
    printf("Book author: %s\n", mBook.author);
    printf("Book subject: %s\n", mBook.subject);
    printf("Book book_id: %d\n", mBook.book_id);

    printf("TRUE's value: %d\n",TRUE);
    printf("FALSE's valuse: %d\n",FALSE);
}

// input output 输入 & 输出
void inputOutput(){
    int c;
    printf("\nEnter value: ");
    //从屏幕读取字符
    c = getchar();
    printf("\nyour entered: ");
    //输出字符到屏幕
    putchar(c);

    char str[100];
    printf("\nEnter value: ");
    gets(str);
    printf("\nyour entered: ");
    puts(str);
}

//文件读写
void fileEdit(){
    int a;
    FILE  * fp = NULL;
    char buffer[255];
    //打开文件
    fp = fopen("D:/CLionProjects/NDK_Simple/Simple.md","a+");
    //写入文件
    fprintf(fp,"Hello World\n\n");
    fputs("This is a test data\n\n",fp);
    fputs("life is like a box of chocolates,you never know what you are going to get the next.\n",fp);
    fclose(fp);
    printf("continue? ");
    scanf("%d",&a);
    if(a == FALSE){
        return;
    }
    fp = fopen("D:/CLionProjects/NDK_Simple/Simple.md","r");
    //读取文件
//    fscanf(fp,"%s",buffer);
    while (!feof(fp)){
        fgets(buffer, 255, (FILE*)fp);
        printf("%s\n", buffer );
    }
    fclose(fp);
}

//预处理器
void preprocessor(){
    //这会包含当前文件名，一个字符串常量。
    printf("File :%s\n", __FILE__);
    //当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
    printf("Date :%s\n", __DATE__);
    //当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
    printf("Time :%s\n", __TIME__);
    //这会包含当前行号，一个十进制常量。
    printf("Line :%d\n", __LINE__);
    //当编译器以 ANSI 标准编译时，则定义为 1。
    printf("ANSI :%d\n", __STDC__);
}

//错误异常处理
void exceptionHandle() {
    int dividend = 20;
    int divsor = 10; // int divsor = 0;
    int quotient;

    if (divsor == 0) {
        fprintf(stderr, "除数为 0 退出运行。。。\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divsor;
    fprintf(stderr, "quotient 变量的值为 : %d\n", quotient);
}

//递归
double factorial(unsigned int i);
double factorial(unsigned int i){
    if (i <= 1){
        return 1;
    }
    return i * factorial(i - 1);
}
//斐波拉契数列
int fibonaci(int i){
    if (i == 0){
        return 0;
    }
    if (i == 1){
        return 1;
    }
    return fibonaci(i - 1) + fibonaci( i -2);
}
void recursion(){
    int i = 15;
    printf("%d 的阶乘 %ld \n",i ,factorial(i));
    for (int j = 0; j < 10; j++) {
        printf("%d\t\n", fibonaci(j));
    }
}

//可变参数
double average(int num,...){
    va_list  vaList;
    double  sum = 0.0;
    int i ;
    //为 num 个参数初始化 valist
    va_start(vaList,num);
    //访问所有赋给 vaList 的参数
    for (int j = 0; j < num; j++) {
        sum += va_arg(vaList, int);
    }
    //清理为valist 保留的内存
    va_end(vaList);
    return sum/num;
}
void variableParams(){
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}

//动态内存分配
void memoryManager(){
    char name[100];
    char *description;

    //将字符串 copy 到 name 中
    strcpy(name, "迎娶白富美！");

    //开始动态分配内存
    description = (char *) malloc(200 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "开始添加数据到 description 中");
    }
    printf("Name = %s\n", name );
    printf("Description: %s sizeOf 大小 ：%d\n", description , sizeof(description));
//     使用 free() 函数释放内存
    free(description);

}

//命令行参数。徐使用main()函数来进行处理，argc指传入参数个数，argv[]是一个指针数组，指向传递给程序的每个参数。
void commandLineArg(int argc,int * argv[]){
    if (argc == 1) {
        printf("argv[%d] == %d",0,*argv[0]);
    } else if (argc == 2) {
        printf("argv[%d] == %d",1,*argv[1]);
    } else{
        printf("匹配失败...");
    }
}



