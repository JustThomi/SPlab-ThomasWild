#include "Paragraph.hpp"

// Constructor
Paragraph::Paragraph(const std::string& text) : text(text) {}

// Destructor
Paragraph::~Paragraph() {}

// Print method to display the paragraph text
void Paragraph::print() const {
    std::cout << "Paragraph Text: " << text << std::endl;
}
