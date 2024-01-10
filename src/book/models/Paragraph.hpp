#pragma once

#include <iostream>
#include <string>

#include "Element.hpp"
#include "./services/Visitor.hpp"
#include "./services/Visitee.hpp"


class Paragraph : public Element, public Visitee {
   public:
    // Constructor
    Paragraph(const std::string& text);

    // Destructor
    ~Paragraph();

    // Print method to display the paragraph text
    void print();

    virtual void accept(Visitor& v);

   private:
    std::string text;
};
