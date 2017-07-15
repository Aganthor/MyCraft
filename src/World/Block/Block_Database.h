#ifndef BLOCK_DATABASE_H
#define BLOCK_DATABASE_H

#include <memory>
#include <vector>

#include "Block_ID.h"

//Forward declaration
namespace Block
{
    class Type;
}

namespace Block
{
    class Database
    {
        public:
            static Database & get();
            Database();

            const Type& get(uint8_t id);
            const Type& get(ID blockID);

        private:
            std::vector<std::unique_ptr<Type>> m_blocks;
    };
}

#endif
