#pragma once

#include <iostream>
#include <string>

#include "Author.hpp"
#include "Section.hpp"

class Visitor;

class Book : public Section {
   public:
    Book(const std::string title);

    ~Book();

    void setAuthor(Author* Autrhor);

    virtual void print();
    virtual void add();
    virtual void remove();
    virtual void accept(Visitor& v);

   protected:
    Author* author;
};
