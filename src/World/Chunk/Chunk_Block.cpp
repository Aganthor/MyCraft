#include "Chunk_Block.h" 

#include "../Block/Block_Data.h"
#include "../Block/Block_Types/Block_Type.h"
#include "../Block/Block_Database.h"

namespace Chunk
{    
    CBlock::CBlock(uint8_t id) : m_id(id)
    {     
    }
    
    CBlock::CBlock(Block::ID id) : m_id(static_cast<uint8_t>(id))
    {   
    }
    
    const Block::Data& CBlock::getData() const
    {
        return Block::Database::get().get(m_id).getData();
    }
    
    const Block::Type& CBlock::getType() const
    {
        return Block::Database::get().get(m_id);
    }
}
