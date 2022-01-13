// Copyright (c) 2022 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program generates a 2D list

#include <iostream>
#include <random>


template <int rows, int cols>
float AverageOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function calculates the average of the 2D list

    float average = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            average += passedIn2DList[rowElement][columnElement];
    }
    average = average/(rows*cols);

    return average;
}


int main() {
    // this function uses a 2D array

    int aSingleRandomNumber = 0;
    float average = 0;
    const int rows = 3;
    const int columns = 4;
    int a2DArray[rows][columns];

    // input
    // in cpp, you can't define the array's size using variables
    // therefore, there will be no input by user
    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            std::random_device rseed;
            std::mt19937 rgen(rseed());
            std::uniform_int_distribution<int> idist(1, 50);
            aSingleRandomNumber = idist(rgen);
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }
    std::cout << " " << std::endl;
    // call function
    average = AverageOfNumbers(a2DArray);
    // output
    std::cout << "The average of all the numbers is: " << average << std::endl;
    std::cout << "\nDone." << std::endl;
}
