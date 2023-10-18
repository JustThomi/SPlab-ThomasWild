#pragma once

class Element {
public:
    // Pure virtual function for printing
    virtual void print() const = 0;

    // Virtual destructor (required for proper cleanup of derived objects)
    virtual ~Element() {}
};

