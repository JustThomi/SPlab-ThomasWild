#pragma once

#include "Visitor.hpp"

class Visitee{
public:
    ~Visitee();
    virtual void accept(Visitor v);
};