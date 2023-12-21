#pragma once

#include <iostream>
#include <string>

class ImageLoader {
    public:
     virtual ~ImageLoader();

     virtual void load(std::string imageContent) = 0;
};