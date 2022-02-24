// www.mike.education
// Copyright (c) 2022.

//
// Created by Maikol Guzman Alan on 2/24/22.
//

#include "Person.h"

/**
 * Main class to represent the polymorphism in Compile-time
 * @return 0
 */
int main() {
    cout << "Welcome to the mike.education!" << endl;  // display message
    cout << "Polymorphism Compile-time - [Operator Overloading]\n" << endl;  // display message

    Person person1("Welcome");
    Person person2("back");

    person1 + person2;

    return 0;
}

