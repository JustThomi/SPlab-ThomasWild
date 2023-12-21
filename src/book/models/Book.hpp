#pragma once

#include <iostream>
#include <string>

#include "Author.hpp"
#include "Section.hpp"
#include "./services/Visitee.hpp"
#include "./services/Visitor.hpp"

class Book : public Section, public Visitee {
   public:
    Book(const std::string& title);

    ~Book();

    void setAuthor(Author* Autrhor);

    virtual void print();
    virtual void add();
    virtual void remove();
    virtual void accept(Visitor& v);

   protected:
    Author* author;
};
