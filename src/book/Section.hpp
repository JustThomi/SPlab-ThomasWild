#pragma once

#include <string>

#include "Element.hpp"

class Section : public Element {
   public:
    Section(const std::string& title);
    ~Section();

    std::string getTitle();

    // inherited
    virtual void print();
    virtual void add();
    virtual void remove();
    virtual Element* get(int nr);

   private:
    std::string title;
    std::vector<Element*> elements;
};
