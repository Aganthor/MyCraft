#ifndef BLOCK_DATABASE_H
#define BLOCK_DATABASE_H

#include <memory>
#include <vector>

#include "Block_ID.h"

#include "../../Util/Singleton.h"

//Forward declaration
namespace Block
{
    class Type;
}

namespace Block
{
    class Database : public Singleton
    {
        public:
            static Database & get();
            

            const Type& get(uint8_t id);
            const Type& get(ID blockID);

        private:
            Database(); //Private ctor to garantee singleton concept.
            
        private:
            std::vector<std::unique_ptr<Type>> m_blocks;
    };
}

#endif
