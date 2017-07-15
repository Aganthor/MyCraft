#include "Block_Database.h"

#include "Block_Types/BAir.h"
#include "Block_Types/BGrass.h"
#include "Block_Types/Block_Type.h"

#include "Block_ID.h"

namespace Block
{
    Database::Database() : m_blocks( ((int)ID::NUM_BLOCK_TYPES) )
    {
        m_blocks[(int)ID::Air] = std::make_unique<Air>();
        m_blocks[(int)ID::Grass] = std::make_unique<Grass>();
    }

    Database& Database::get()
    {
        static Database database;
        return database;
    }

    const Type& Database::get(uint8_t id)
    {
        return *m_blocks[id];
    }

    const Type& Database::get(ID blockID)
    {
        return *m_blocks[(int)blockID];
    }
 }


