#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <iomanip>
#include "string"
#include "Spider.h"

void spider::Spider() {
    using namespace std::chrono_literals;


    //Spider

    ifstream myText("spider.txt");
    string spide;
    if (myText.is_open())
    {
        while (getline(myText, spide))
        {
            cout << spide << '\n';
        }


        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(1000ms);
        system("CLS");
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "    / _ \\ \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  \\_\\(x)/_/\n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "   _//.o.\\_ \n";
        std::this_thread::sleep_for(1000ms);
        system("CLS");
        for (int steps = 0; steps < 60; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "    / | \\ \n";
        for (int steps = 0; steps < 60; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  \\_\\(v)/_/\n";
        for (int steps = 0; steps < 60; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "   _//,o,\\_ \n";
        std::this_thread::sleep_for(1000ms);
        system("CLS");



        auto end = std::chrono::high_resolution_clock::now();
        system("CLS");
    }

}
