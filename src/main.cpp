#include <iostream>

#include "book/Author.hpp"
#include "book/Book.hpp"

int main(int argc, char const* argv[]) {
    // not satisfied with how I solved adding chapters
    // and sub chapters but it's chill for now
    Author* author = new Author("Austin Kleon");
    Book* book = new Book("Show your work!");
    book->setAuthor(author);

    book->print();

    getchar();
    return 0;
}
