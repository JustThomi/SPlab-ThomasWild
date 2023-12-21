#pragma once

#include <string>

#include "Element.hpp"
#include "./services/Visitor.hpp"
#include "./services/Visitee.hpp"

class Section : public Element {
   public:
    Section(const std::string& title);
    ~Section();

    std::string getTitle();

    virtual void print();
    virtual void add();
    virtual void remove();
    virtual Element* get(int nr);
    virtual void accept(Visitor& v);

   private:
    std::string title;
    std::vector<Element*> elements;
};
