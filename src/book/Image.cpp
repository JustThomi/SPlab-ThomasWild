#include "Image.hpp"

// Constructor
Image::Image(const std::string& imageName) : imageName(imageName) {}

// Destructor
Image::~Image() {}

// Print method to display the image name
void Image::print() { std::cout << "Image Name: " << imageName << std::endl; }
