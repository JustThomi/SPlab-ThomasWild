#pragma once

#include <iostream>
#include <string>

#include "./models/Paragraph.hpp"

class AlignStrategy {
   public:
   
    virtual ~AlignStrategy() = 0;
    virtual void render(Paragraph*) = 0;
};