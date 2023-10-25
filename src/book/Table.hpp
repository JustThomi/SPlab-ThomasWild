#pragma once

#include <iostream>
#include <string>

#include "Element.hpp"

class Table : public Element {
   public:
    // Constructor
    Table(const std::string& title);

    // Destructor
    ~Table();

    // Print method to display the table title
    void print();

   private:
    std::string title;
};
