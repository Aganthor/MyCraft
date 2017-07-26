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
 * File:   Chunk_Shader.h
 * Author: lucb
 *
 * Created on July 25, 2017, 10:21 PM
 */

#ifndef CHUNK_SHADER_H
#define CHUNK_SHADER_H

#include "Simple_Shader.h"

namespace Shader
{
    class Chunk_Shader : public Simple_Shader
    {
    public:
        Chunk_Shader();
        
    private:
        void getUniformLocations() override;
    };
    
}



#endif /* CHUNK_SHADER_H */

