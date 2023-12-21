#pragma once

#include <iostream>
#include "ImageLoader.hpp"

class JpgImageLoader: public ImageLoader {
    public:
     JpgImageLoader();
     ~JpgImageLoader();

     void load(std::string imageContent);
};