//
// Created by ASUS on 2022/3/21.
//
#include "person.h"
#include <iostream>

using namespace std;

Person::Person(char *name, char *gen, int age) {
    this->name = name;
    this -> age = age;
    this -> gen = gen;
}

Person::~Person() {
    cout << "Person Destroy" << endl;
}

Person::Person() {
    cout << "Person is Running" << endl;
}

char * Person::getName() {
    cout << "getName: " << this -> name << endl;
    return this -> name;
}

void Person::setName(char *name) {
    this -> name = name;
}

char * Person::getGen() {
    return this -> gen;
}

void Person::setGen(char *gen) {
    this -> gen = gen;
}

int Person::getAge() {
    return this -> age;
}

void Person::setAge(int age) {
    this -> age = age;
}

void personTest(){
    Person person, * personTemp;
    person.setName("Julia");
    person.setGen("female");
    person.setAge(18);
    cout << person.getName() << "\t" << person.getGen() << "\t" << person.getAge() << "\n" << endl;

    personTemp = new Person("Alex","male",18);
//    Person * personTemp = &person;
    cout << personTemp << endl;
    cout << personTemp -> getName() << "\t" << personTemp -> getGen() << "\t" << personTemp -> getAge() << "\n" << endl;
}


