#include "Chapter.hpp"

// Constructor
Chapter::Chapter(const std::string& name) : name(name) {}

// Destructor
Chapter::~Chapter() {}

// Print method to display the chapter name
void Chapter::print() const {
    std::cout << "Chapter Name: " << name << std::endl;
}

void Chapter::addSubChapter(std::string subchapterName){
    SubChapter* subchapter = new SubChapter(subchapterName);
    subchapters.push_back(subchapter);
}
