// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Mar. 4, 2022.
// This program asks the user for the length
// and width of a rectangle. It then calculates
// and displays the area and perimeter.
#include <iostream>

// declare variables
float length, width, area, perimeter;

int main() {
  // get input from user
  std::cout << "Today we will calculate the area and\n";
  std::cout << "perimeter of a rectangle.\n";
  std::cout << "Enter the length (cm): ";
  std::cin >> length;
  std::cout << "Enter the width (cm): ";
  std::cin >> width;

  // calculate area and perimeter
  area = length * width;
  perimeter = 2 * (length + width);

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Area = " << area <<" cm^2.\n";
  std::cout << "Perimeter = " << perimeter << " cm.\n";
}

