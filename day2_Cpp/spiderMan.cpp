//
// Created by ASUS on 2022/3/22.
//
#include <iostream>
#include "spiderMan.h"

using namespace std;

SpiderMan::SpiderMan(): Person() {
    setName("Peter Parker");
    setGen("male");
    setAge(16);
    cout << "Your good neighbor "<< getName() << endl;
}

SpiderMan::SpiderMan(char *name, char *gen, int age) : Person(name,gen,age) {
    cout << "Your good neighbor " << name << endl;
}

SpiderMan::~SpiderMan() {
    cout << "Good bye" << endl;
}

void SpiderMan::spiderSense() {
    cout << "Peter Tingle" << endl;
}

void SpiderMan::spiderSilk() {
    cout << "Wow~" << endl;
}