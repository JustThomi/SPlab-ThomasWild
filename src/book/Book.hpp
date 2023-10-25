#pragma once

#include <iostream>
#include <string>

#include "Author.hpp"
#include "Section.hpp"

class Book : public Section {
   public:
    Book(const std::string& title);

    ~Book();

    void setAuthor(Author* Autrhor);

    // inherited
    virtual void print();
    virtual void add();
    virtual void remove();

   protected:
    Author* author;
};
