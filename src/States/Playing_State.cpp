#include "Playing_State.h"

#include <iostream>
#include <SFML/System/Clock.hpp>

#include "../Renderer/RendererMaster.h"

#include "../Camera.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application& application)
    :   Game_State(application),
        m_texture ("Texture_Atlas", 512, 16)
//        m_quad (m_texture),
//        m_quad2 (m_texture)
    {
        m_texture.bind();

        prepareQuads();
    }

    void Playing::input(Camera& camera)
    {

    }

    void Playing::update(Camera& camera, float dt)
    {
    	camera.input(dt);
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        for (auto &q: m_quads)
        {
            renderer.draw(*q);
        }
        //renderer.draw(m_quad);
        //renderer.draw(m_quad2);
    }

    void Playing::prepareQuads()
    {
        for (auto row = 0; row <= 4; ++row)
        {
            for (auto col = 0; col <= 20; ++col)
            {
                auto q = std::make_unique<Quad>(m_texture);
                q->position.z = col + 1;
                q->position.x = row + 1;
                q->position.y = 0;
                m_quads.push_back(std::move(q));
            }
        }
    }
}
