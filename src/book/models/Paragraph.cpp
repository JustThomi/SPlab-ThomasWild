#include "Paragraph.hpp"

// Constructor
Paragraph::Paragraph(const std::string& text) : text(text) {}

// Destructor
Paragraph::~Paragraph() {}

// Print method to display the paragraph text
void Paragraph::print() {
    std::cout << "Paragraph Text: " << text << std::endl;
}

void Paragraph::accept(Visitor& v) { std::cout << "accepted" << std::endl;}
