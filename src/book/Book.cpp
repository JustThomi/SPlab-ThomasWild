#include "Book.hpp"

// Constructor
Book::Book(const std::string& title) : title(title) {}

// Destructor
Book::~Book() {}

// Print method to display the title
void Book::print() const {
    std::cout << "Title: " << title << std::endl;

    for(const Chapter* chapter:chapters){
        chapter->print();
    }
}

void Book::addChapter(std::string chapterName){
    Chapter* chapter = new Chapter(chapterName);
    chapters.push_back(chapter);
}

void Book::setAuthor(Author* a){
    author = a;
}

Chapter* Book::getChapter(int pos){
    return chapters[pos];
}