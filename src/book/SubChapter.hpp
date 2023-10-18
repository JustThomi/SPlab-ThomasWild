#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Element.hpp"

class SubChapter {
public:
    // Constructor
    SubChapter(const std::string& name);

    // Destructor
    ~SubChapter();

    // Print method to display the title
    void print() const;
    void addElement(Element* element);
    void createParagraph(std::string text);
    void createImage(std::string imageName);
    void createTable(std::string title);


private:
    std::string name;
    std::vector<Element*> elements;
};
