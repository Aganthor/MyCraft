#include "Display.h"
#include "Application.h"
#include "Util/Random.h"

int main()
{
    Random::init();

    Display::init();

    Application app;

    app.runMainGameLoop();

    return 0;
}
