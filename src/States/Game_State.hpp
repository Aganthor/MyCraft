#ifndef GAME_STATE_HPP_INCLUDED
#define GAME_STATE_HPP_INCLUDED

class Application;
struct Entity;

namespace Renderer
{
    class Master;
}

class Camera;

namespace State
{
    class Game_State
    {
        public:
            Game_State(Application& application);

            virtual void input(Camera& camera) = 0;
            virtual void update(Camera& camera, float dt) = 0;
            virtual void draw(Renderer::Master& renderer) = 0;

        protected:
            Application* m_application;

    };
}

#endif // GAME_STATE_HPP_INCLUDED
