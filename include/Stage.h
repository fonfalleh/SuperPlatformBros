#ifndef STAGE_H
#define STAGE_H

#include <vector>
#include "Block.h"

class Stage
{
    public:
        Stage();
        virtual ~Stage();
        std::vector<Block>& getBlocks();
    protected:
    private:
        std::vector<Block> blocks;
};

#endif // STAGE_H
