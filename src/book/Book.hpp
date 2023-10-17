#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Chapter.hpp"
#include "Author.hpp"

class Book {
public:
    // Constructor
    Book(const std::string& title);

    // Destructor
    ~Book();

    // Print method to display the title
    Chapter* getChapter(int nr);
    void print() const;
    void addChapter(std::string chapterName);
    void setAuthor(Author* Autrhor);

private:
    Author* author;
    std::string title;
    std::vector<Chapter*> chapters;
};
