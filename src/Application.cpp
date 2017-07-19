#include "Application.h"
#include "Display.h"

#include "States/Playing_State.h"

Application::Application()
{
    pushState(std::make_unique<State::Playing>(*this));
}

void Application::runMainGameLoop()
{
	sf::Clock clock;

    while (Display::get().isOpen())
    {
    	auto dt = clock.restart().asSeconds();

        m_renderer.clear();

        m_states.top()->input(m_camera);
        m_camera.update();
        m_states.top()->update(m_camera, dt);
        m_states.top()->draw(m_renderer);

        m_renderer.update(m_camera);

        Display::get().checkForClose();
    }
}

void Application::pushState(std::unique_ptr<State::Game_State>state)
{
    m_states.push(std::move(state));
}

void Application::popState()
{
    m_states.pop();
}
