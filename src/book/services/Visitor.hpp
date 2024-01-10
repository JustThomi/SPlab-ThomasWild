#pragma once

#include "./models/Book.hpp"
#include "./models/Paragraph.hpp"
#include "./models/Section.hpp"
#include "./models/Image.hpp"
#include "./models/Table.hpp"
#include "ImageProxy.hpp"

class Visitor{
public:
    ~Visitor();

    virtual void visitBook(Book& book) = 0;
    virtual void visitParagraph(Paragraph& paragraph) = 0;
    virtual void visitSection(Section& section) = 0;
    virtual void visitTable(Table& section) = 0;
    virtual void visitImage(Image& section) = 0;
    virtual void visitImageProxy(ImageProxy& section) = 0;
};