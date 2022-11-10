// Copyright (c) 2022 Joanne Santhosh
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program identifies if a number is even or odd

#include <iostream>
#include <string>


int main() {
    // Variables
    std::string integerAsString;
    int integer;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> integerAsString;

    // Process and Output
    try {
        integer = std::stoi(integerAsString);
        if (integer % 2 == 0) {
            std::cout << integer << " is an even number ";
        } else {
            std::cout << integer << " is an odd number.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Error: " << integerAsString << " is not an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
