// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program is a number guessing game

#include <iostream>
#include <string>
#include <random>

int main() {
    // This function checks the number
    int number;
    std::string numberAsString;
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    // Input
    std::cout << "Enter a number between 0 - 9: ";
    std::cin >> numberAsString;

    // Process & Output
    try {
        number = std::stoi(numberAsString);
        if (number == someRandomNumber) {
            std::cout << "You guessed right!" << std::endl;
        } else {
            std::cout << "you guessed wrong. The right number was "
            << someRandomNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << numberAsString << " is not a number ._." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
