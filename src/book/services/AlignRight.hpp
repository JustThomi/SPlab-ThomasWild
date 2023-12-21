#include "AlignStrategy.hpp"

class AlignRight: public AlignStrategy {
   public:
    AlignRight();
    ~AlignRight();

    void render(Paragraph*);
};