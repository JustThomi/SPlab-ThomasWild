#pragma once

#include <vector>

class Element {
   public:
    virtual ~Element() {}

    virtual void print() = 0;
    virtual void add() = 0;
    virtual void remove() = 0;
    virtual Element* get(int nr) = 0;
};
