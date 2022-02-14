#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "Frog.h"

void frog::Frog() {
    using namespace std::chrono_literals;


    //Frog

    std::cout << "        ()-()      \n";
    std::cout << "      .-(___)-.    \n";
    std::cout << "       /\\ / \\    \n";
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1000ms);
    system("CLS");
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "        (.)-(.)      \n";
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "      ,-(    )-,    \n";
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "       /\\ / \\    \n";
    std::this_thread::sleep_for(1000ms);
    system("CLS");
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "        (-)-(-)      \n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "      ;-(    )-;    \n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "       /\\ / \\    \n";
    std::this_thread::sleep_for(1000ms);
    system("CLS");



    auto end = std::chrono::high_resolution_clock::now();
    system("CLS");

}
