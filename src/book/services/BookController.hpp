#pragma once

#include "../models/Book.hpp"

class BookController {

public:
	BookController();
	~BookController();

	Book getBooks();
	Book getBook(int id);
	void postBook(Book& b);
	void putBook(int id);
	void deleteBook(int id);
};