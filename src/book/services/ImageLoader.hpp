#pragma once

#include <iostream>
#include <string>

class ImageLoader {
public:
     virtual void load(std::string imageContent) = 0;
};