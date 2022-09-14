#include <iostream>
#include <wiringPi.h>
// #include "Button.h"
// #include "Led.h"
// #include "Listener.h"
// #include "Controller.h"
// #include "View.h"
// #include "Service.h"
#include <time.h>

// func. main
// 1. 프로그램의 시작점을 알려줌
// 2. 초기화 및 로딩

int main()
{
    std::cout << "Hello World!" << std::endl;

    time_t timeSec;
    struct tm *timeData;
    
    // Button button1(27);
    // Led led1(21);
    // Led led2(22);
    // Led led3(23);
    // Led led4(24);
    // Led led5(25);
    // View view(&led1, &led2, &led3, &led4, &led5);
    // Service service(&view);
    // Controller control(&service);
    // Listener listener(&button1, &control);
    
    while (1)
    {
        // listener.checkEvent();
        // view.lightView();
        timeSec = time(NULL);
        timeData = localtime(&timeSec);

        std::cout << "timeSec : " << timeSec << std::endl;
        std::cout << timeData->tm_hour << ":" 
                   << timeData->tm_min << ":"
                   << timeData->tm_sec << std::endl;
        
        delay(100);
    }

    return 0;
}