// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/24/22.
//

#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {}

Person::Person(string _text) {
    text = _text;
}

void Person::operator+(Person person) {
    string aux = text + person.text;
    cout<<"The result of the addition of two objects is : "<<aux;
}

Person::~Person() {

}

const string &Person::getText() const {
    return text;
}

void Person::setText(const string &text) {
    Person::text = text;
}
