#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "Shark.h"

void shark::Shark() {
    using namespace std::chrono_literals;


    //Frog

    ifstream myfile("shark.txt");
    string shark;
    if (myfile.is_open())
    {
        while (getline(myfile, shark))
        {
            cout << shark << '\n';
        }
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(1000ms);
        system("CLS");
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "      .            \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "\\_____)\\_____      \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "/--x____ __.<      \n";
        std::this_thread::sleep_for(1000ms);
        system("CLS");
        for (int steps = 0; steps < 60; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "      ,            \n";
        for (int steps = 0; steps < 60; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "\\_____)\\_____      \n";
        for (int steps = 0; steps < 60; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "/--x____ __.<      \n";
        std::this_thread::sleep_for(1000ms);
        system("CLS");



        auto end = std::chrono::high_resolution_clock::now();
        system("CLS");
    }
}
