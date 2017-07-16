/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Chunk_Section.h
 * Author: lucb
 *
 * Created on July 15, 2017, 10:02 PM
 */

#ifndef CHUNK_SECTION_H
#define CHUNK_SECTION_H

#include <array>
#include "Chunk_Block.h"
#include "../World_Constants.h"
#include "../../GLM_Common.h"

namespace Chunk
{
    class Chunk_Section
    {
    public:
        Chunk_Section();
        
        CBlock getBlock(int x, int y, int z);
        void setBlock(int x, int y, int z, CBlock block);
        
        const Vector3& getPosition() const;
        
    private:
        std::array<CBlock, CHUNK_VOLUME> m_blocks;
        
        Vector3 m_position;
        
    };
}



#endif /* CHUNK_SECTION_H */

