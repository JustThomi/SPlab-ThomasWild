#include <iostream>
#include <string>

// Interface for the Image and ImageProxy classes
class Picture {
   public:
    virtual ~Picture() = default;
    virtual void getPath() = 0;
    virtual void getSize() = 0;
    virtual void display() = 0;
};