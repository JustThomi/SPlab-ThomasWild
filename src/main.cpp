#include <iostream>
#include "book/Author.hpp"
#include "book/Book.hpp"
#include "book/Chapter.hpp"

int main(int argc, char const *argv[])
{
    // not satisfied with how I solved adding chapters
    // and sub chapters but it's chill for now
    Author* author = new Author("Austin Kleon");
    Book* book = new Book("Show your work!");
    book->addChapter("Chapter 1");

    book->getChapter(0)->addSubChapter("Sub Chapter 1");
    book->getChapter(0)->addSubChapter("Sub Chapter 2");
    book->getChapter(0)->addSubChapter("Sub Chapter 3");
    book->getChapter(0)->addSubChapter("Sub Chapter 4");

    book->print();

    return 0;
}
