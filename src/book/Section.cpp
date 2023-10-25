#include "Section.hpp"

#include <iostream>

Section::Section(const std::string& title) : title(title) {}

Section::~Section() {}

std::string Section::getTitle() { return title; }

void Section::print() { std::cout << title << std::endl; }

void Section::add() {}

void Section::remove() {}

Element* Section::get(int pos) { return elements[pos]; }
