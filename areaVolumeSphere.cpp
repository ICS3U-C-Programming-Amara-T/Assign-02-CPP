// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: March 4, 2025
// Calculating the Surface Area and Volume of a Sphere
#include <cmath>
#include <iostream>

// Color Text Effects
const char GREEN[] = "\033[0;34m";
const char BOLD_C[] = "\033[31;36m";
const char BOLD_P[] = "\033[1;35m";

int main() {
    // declare variables
    float radius, volume, surface_Area;
    std::string units;

    // Greeting
    std::cout << "Hello! Lets find the surface area and volume of a sphere!\n";

    // get the radius from the user
    std::cout << "Enter the radius:";
    std::cin >> radius;

    // get the units from the user
    std::cout << "Enter the units: ";
    std::cin >> units;

    // calculate the surface area and volume
    surface_Area = 4 * M_PI * pow(radius, 2);
    volume = 1.33333333333 * M_PI * pow(radius, 3);

    // display the surface area and volume to the user
    std::cout << " ";
    std::cout << BOLD_C;
    std::cout << "Surface Area = " << surface_Area << units << "^2" << std::endl;
    std::cout << BOLD_P;
    std::cout << "Volume = " << volume << units << "^3" << std::endl;
}
