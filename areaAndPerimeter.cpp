// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Sep 2022
// This program calculates the area and perimeter of a circle
//    with radius 15mm

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the area and perimeter

    std::cout << "The radius of a circle is 15 mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Then area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Then perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
