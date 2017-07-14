#ifndef CHUNK_BLOCK_H_INCLUDED
#define CHUNK_BLOCK_H_INCLUDED

#include <cstdint>
#include "../Block/Block_ID.h"

//Forward declare...
namespace Block
{
    class Data;
    class Type;
}

namespace Chunk
{
    struct CBlock
    {
        CBlock() = default;
        CBlock(uint8_t id);
        CBlock(Block::ID id);
        
        const Block::Data& getData() const;
        const Block::Type& getType() const;
        
        uint8_t m_id = 1;
    };
}
#endif
