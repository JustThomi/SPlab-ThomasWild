#pragma once

#include <iostream>
#include <string>

#include "../models/Paragraph.hpp"

class AlignStrategy {
   public:
    virtual void render(Paragraph*) = 0;
};