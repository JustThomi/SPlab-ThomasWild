#pragma once

#include <iostream>
#include <string>

class Author {
public:
    // Constructor
    Author(const std::string name);

    // Destructor
    ~Author();

    // Print method to display the name
    void print() const;

private:
    std::string name;
};
