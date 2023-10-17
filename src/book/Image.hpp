#pragma once

#include <iostream>
#include <string>
#include "Element.hpp"

class Image: public Element {
public:
    // Constructor
    Image(const std::string& imageName);

    // Destructor
    ~Image();

    // Print method to display the image name
    void print() const override;

private:
    std::string imageName;
};
