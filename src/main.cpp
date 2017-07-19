#include "Display.h"
#include "Application.h"
#include "Util/Random.h"

int main()
{
    Random::init();
    Random::Generator<std::minstd_rand> randomGen;

    Display::init();

    Application app;

    app.runMainGameLoop();

    return 0;
}
