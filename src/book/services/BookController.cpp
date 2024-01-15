#include "BookController.hpp"

BookController::BookController() {}
BookController::~BookController() {}

Book BookController::getBooks(){
	Book b = Book("Placegholder");
	return b;
}
Book BookController::getBook(int id) {
	Book b = Book("Placegholder");
	return b;
}
void BookController::postBook(Book& b){}
void BookController::putBook(int id){}
void BookController::deleteBook(int id){}