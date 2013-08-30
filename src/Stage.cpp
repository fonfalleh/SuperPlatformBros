#include "Stage.h"

Stage::Stage()
{
    // Static thing, will be better soon
    blocks.push_back(Block(1,1));
    blocks.push_back(Block(2,3));
    blocks.push_back(Block(5,5));
}

Stage::~Stage()
{
    //dtor
}
std::vector<Block>& Stage::getBlocks()
{
    return blocks;
}
