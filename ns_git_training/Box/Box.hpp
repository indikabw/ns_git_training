//
//  Box.hpp
//  ns_git_training
//
//  Created by Indika Wijayasinghe on 8/7/23.
//

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>

class Box
{
private:
    double length = 0;
    double width = 0;
    double height = 0;
public:
    Box(double, double, double);
    double getVolume();
    double getSurfaceArea();
};

#endif /* Box_hpp */
