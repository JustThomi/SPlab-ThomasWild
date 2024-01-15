#pragma once

#include <iostream>
#include <string>

#include "Element.hpp"

class Visitor;

class Table : public Element {
   public:
    // Constructor
    Table(const std::string& title);

    // Destructor
    ~Table();

    // Print method to display the table title
    void print();
    virtual void accept(Visitor& v);
    
   private:
    std::string title;
};
