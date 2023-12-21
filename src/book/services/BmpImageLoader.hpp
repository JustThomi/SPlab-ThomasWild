#pragma once

#include <iostream>
#include "ImageLoader.hpp"

class BmpImageLoader: public ImageLoader {
    public:
     BmpImageLoader();
     ~BmpImageLoader();

     void load(std::string imageContent);
};