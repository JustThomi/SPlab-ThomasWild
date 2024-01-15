#pragma once

#include <iostream>
#include <string>

#include "Element.hpp"

class Visitor;

class Paragraph : public Element {
   public:
    // Constructor
    Paragraph(const std::string& text);

    // Destructor
    ~Paragraph();

    // Print method to display the paragraph text
    void print();

    void accept(Visitor& v);

   private:
    std::string text;
};
