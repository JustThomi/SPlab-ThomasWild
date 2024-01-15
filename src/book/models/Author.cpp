#include "Author.hpp"

// Constructor
Author::Author(const std::string name) : name(name) {}

// Destructor
Author::~Author() {}

// Print method to display the name
void Author::print() const {
    std::cout << "Name: " << name << std::endl;
}
