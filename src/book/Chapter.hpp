#pragma once

#include <iostream>
#include <string>
#include "SubChapter.hpp"

class Chapter {
public:
    // Constructor
    Chapter(const std::string& name);

    // Destructor
    ~Chapter();

    // Print method to display the chapter name
    void print() const;
    void addSubChapter(std::string subchapterName);

private:
    std::string name;
    std::vector<SubChapter*> subchapters;
};
