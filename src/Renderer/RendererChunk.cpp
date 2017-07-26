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
#include "RendererChunk.h"
#include "../Camera.h"
#include "../World/Chunk/Chunk_Section.h"

namespace Renderer
{
    void Chunk_Renderer::draw(const Chunk::Chunk_Section& chunk)
    {
        m_chunks.push_back(&chunk);
    }

    void Chunk_Renderer::update(const Camera& camera)
    {
        m_shader.bind();
        
        m_shader.setViewMatrix(camera.getViewMatrix());
        m_shader.setProjMatrix(camera.getProjectionMatrix());
        
        for (auto& chunk : m_chunks)
        {
            
        }
        
        m_chunks.clear();
    }
}