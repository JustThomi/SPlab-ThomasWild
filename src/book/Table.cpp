#include "Table.hpp"

// Constructor
Table::Table(const std::string& title) : title(title) {}

// Destructor
Table::~Table() {}

// Print method to display the table title
void Table::print() { std::cout << "Table Title: " << title << std::endl; }
