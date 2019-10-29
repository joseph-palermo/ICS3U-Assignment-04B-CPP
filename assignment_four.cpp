// Copyright (c) 2019 Joseph Palermo All rights reserved.

// Created by: Joseph Palermo
// Created on: October 2019
// This program calculates if value a is greater than value b

#include <iostream>

int main() {
    // This function calculates if value a is greater than value b
    // input & variables
    std::string a_string;
    std::string b_string;
    float a;
    float b;

    // process
    std::cout << "Enter the value of a: ";
    std::cin >> a_string;
    std::cout << "Enter the value of b: ";
    std::cin >> b_string;

    // output
    try {
        // code to convert string "a" to number "a"
        a = std::stof(a_string);
        // code to convert string "b" to number "b"
        b = std::stof(b_string);

        if (a > b) {
            std::cout << " Value a: " << a << std::endl;
            std::cout << "is greater than\n value b: " << b << std::endl;
        } else if (a == b) {
            std::cout << " Value a: " << a << std::endl;
            std::cout << "is equal to\n value b: " << b << std::endl;
        } else if (b > a) {
            std::cout << " Value b: " << b << std::endl;
            std::cout << "is greater than\n value a: " << a << std::endl;
        } else {
            std::cout << "Please put in numerical values." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please put in numerical values.";
    }
}
