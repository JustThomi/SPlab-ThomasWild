#pragma once

#include <iostream>
#include <string>

#include "../models/Element.hpp"
#include "../models/Image.hpp"
#include "../models/Picture.hpp"
#include "Visitee.hpp"

class Visitor;

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

    void accept(Visitor* v) { std::cout << "accepted" << std::endl;}
};