/*
 * Copyright (C) 2017 lucb
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* 
 * File:   RChunk.h
 * Author: lucb
 *
 * Created on July 25, 2017, 10:22 PM
 */

#ifndef RCHUNK_H
#define RCHUNK_H

#include <vector>
//#include <SFML/System/Clock.hpp>

#include "../Shader/Chunk_Shader.h"


namespace Chunk
{
    class Chunk_Section;
}
class Camera;

namespace Renderer
{
    class Chunk_Renderer
    {
        public:
            void draw(const Chunk::Chunk_Section& chunk);

            void update(const Camera& camera);

        private:
            std::vector<const Chunk::Chunk_Section*> m_chunks;
            Shader::Chunk_Shader m_shader;
    };
   
}



#endif /* RCHUNK_H */

