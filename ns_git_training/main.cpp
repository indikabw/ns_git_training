//
//  main.cpp
//  ns_git_training
//
// Created by Indika Wijayasinghe on 8/7/23.
// Modified by Shehan Haputhanthri on 08/08/23

#include <iostream>
#include "Box.hpp"

int main(int argc, const char * argv[]) {
    Box a = Box(1.0,2.0,3.0);
    std::cout << "Box volume is: " << a.getVolume() << std::endl;
    std::cout << "Box perimeter is: " << a.getPerimeter() << std::endl;
    std::cout << "Box surface area is: " << a.getSurfaceArea() << std::endl;
    return 0;
}
