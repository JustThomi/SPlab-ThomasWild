#include "AlignStrategy.hpp"

class AlignLeft: public AlignStrategy {
   public:
    AlignLeft();
    ~AlignLeft();

    void render(Paragraph*);
};