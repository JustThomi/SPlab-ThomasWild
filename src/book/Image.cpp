#include "Image.hpp"

// Constructor
Image::Image(const std::string& imgPath) : imgPath(imgPath) {}

// Destructor
Image::~Image() {}

// Print method to display the image name
void Image::print() { std::cout << "Image Name: " << imgPath << std::endl; }
void Image::getPath() {}
void Image::getSize() {}
void Image::display() {}
void Image::add() {}
void Image::remove() {}
Element* Image::get(int nr) {}