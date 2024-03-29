#pragma once

#include <iostream>
#include <string>

#include "Element.hpp"
#include "Picture.hpp"

class Visitor;

class Image : public Element, public Picture {
   public:
    // Constructor
    Image(const std::string& imgPath);

    // Destructor
    ~Image();

    // Print method to display the image name
    void print();
    void getPath();
    void getSize();
    void display();

    void add();
    void remove();
    Element* get(int nr);

    virtual void accept(Visitor* v);

   private:
    std::string imgPath;
};
