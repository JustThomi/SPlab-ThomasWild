#pragma once

#include <iostream>
#include <string>

#include "Element.hpp"
#include "Image.hpp"
#include "Picture.hpp"

class ImageProxy : public Element, public Picture {
   private:
    std::string imagePath;
    Picture* realImage;

   public:
    ImageProxy(const std::string& path) : imagePath(path), realImage(nullptr) {}

    void display() override {
        if (realImage == nullptr) {
            realImage = new Image(imagePath);  // Load the real image on-demand
        }
        realImage->display();
    }

    ~ImageProxy() {
        if (realImage != nullptr) {
            delete realImage;
        }
    }
};