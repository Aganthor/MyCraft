#ifndef PLAYING_H_INCLUDED
#define PLAYING_H_INCLUDED

#include <vector>
#include <memory>

#include "Game_State.hpp"

#include "../Shader/Simple_Shader.h"
#include "../Texture/Texture_Atlas.h"

#include "../Temp/Quad.h"

struct Entity;
class Camera;

namespace State
{
    class Playing : public Game_State
    {
        public:
            Playing(Application& application);

            void input(Camera& camera) override;
            void update(Camera& camera, float dt) override;
            void draw(Renderer::Master& renderer) override;

            void prepareQuads();

        private:
            Shader::Simple_Shader m_shader;
            Texture::Atlas m_texture;
            std::vector<std::unique_ptr<Quad>> m_quads;
            //Quad m_quad;
            //Quad m_quad2;
    };
}

#endif // PLAYING_H_INCLUDED
