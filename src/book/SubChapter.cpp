#include "SubChapter.hpp"
#include "Paragraph.hpp"
#include "Image.hpp"
#include "Table.hpp"


// Constructor
SubChapter::SubChapter(const std::string& name) : name(name) {}

// Destructor
SubChapter::~SubChapter() {}

// Print method to display the chapter name
void SubChapter::print() const {
    std::cout << "Sub-Chapter Name: " << name << std::endl;

    for (const Element* element : elements) {
        element->print();
    }
}

void SubChapter::addElement(Element* element){
    elements.push_back(element);
}

void SubChapter::createParagraph(std::string text){
    Paragraph* paragraph = new Paragraph(text);
    addElement(paragraph);
}

void SubChapter::createImage(std::string imageName){
    Image* image = new Image(imageName);
    addElement(image);
}

void SubChapter::createTable(std::string title){
    Table* table = new Table(title);
    addElement(table);
}