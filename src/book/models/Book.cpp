#include "Book.hpp"

// Constructor
Book::Book(const std::string title) : Section(title) {}

// Destructor
Book::~Book() {}

// Print method to display the title
void Book::print() { std::cout << "Title: " << getTitle() << "\nAuthor: " << author->getName() << std::endl; }

void Book::add() {}

void Book::remove() {}

void Book::setAuthor(Author* a) { author = a; }

void Book::accept(Visitor& v) { std::cout << "accepted" << std::endl;}
