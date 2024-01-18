#include <iostream>

#include "book/models/Author.hpp"
#include "book/models/Book.hpp"

int main() {
    Author* author = new Author("Austin Kleon");
    Book* book = new Book("Show your work!");
    book->setAuthor(author);

    book->print();

    getchar();
    return 0;
}
