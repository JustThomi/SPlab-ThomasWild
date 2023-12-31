#include "Book.hpp"

// Constructor
Book::Book(const std::string& title) : Section(title) {}

// Destructor
Book::~Book() {}

// Print method to display the title
void Book::print() { std::cout << getTitle() << std::endl; }

void Book::add() {}

void Book::remove() {}

void Book::setAuthor(Author* a) { author = a; }
