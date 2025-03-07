// Copyright (c) 2025 Amara Tie All rights reserved.

//

// Created by: Amara Tie

// Date: March 4, 2025

// Calculating the Surface Area and Volume of a Sphere
#include <cmath>
#include <iostream>
#include <string>

    // Color Text Effects
    const char GREEN[] = "\033[0;34m";
    const char BOLD_C[] = "\033[31;36m";
    const char BOLD_P[] = "\033[1;35m";

int main() {
    // declare variables
    float radius,
    volume, surfaceArea;
    std::string units;

    // get the radius from the user
    std::cout << "Enter the radius:";
    std::cin >> radius;

    // get the units from the user
    std::cout << "Enter the units: ";
    std::cin >> units;

    // calculate the surface area and volume
    surfaceArea = 4 * M_PI * pow(radius, 2);
    volume = 4 / 3 * M_PI * pow(radius, 3);

    // display the surface area and volume to the user
    std::cout << " ";
    std::cout << BOLD_C;
    std::cout << "Surface Area = " << surfaceArea << units << "^2" << std::endl;
    std::cout << BOLD_P;
    std::cout << "Volume = " << volume << units << "^3" << std::endl;
}
