#include "Listener.h"

Listener::Listener(Button *button, Controller *control, ClockCheck *clock)
{
    powerButton = button;
    controller = control;
    clockcheck = clock;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (powerButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("modeButton");
    }

    //시간 감시
    if (clockcheck->isUpdate())
    {
        controller->updateEvent("clockUpdate");
    }
}