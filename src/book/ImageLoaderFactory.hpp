#pragma once

#include <iostream>
#include <string>

class ImageLoaderFactory {
    public:
     ImageLoaderFactory();
     ~ImageLoaderFactory();

     void create(std::string ImageContent);
};