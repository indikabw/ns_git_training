//
//  getSurfaceArea.cpp
//  ns_git_training
//
//  Created by Indika Wijayasinghe on 8/7/23.
//

#include "Box.hpp"

double Box::getSurfaceArea()
{
    return 2*(this->length*this->width+this->width*this->height+this->height*this->length);
}
