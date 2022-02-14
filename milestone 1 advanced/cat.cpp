#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <iomanip>
#include "cat.h"

void cat::Cat() {
    using namespace std::chrono_literals;


    //CAT

    std::cout << "  |\\__/| (`\  \\\n";
    std::cout << "  | o o |__) )  \n";
    std::cout << "  (((--(((      \n";
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1000ms);
    system("CLS");
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "  |\\__/| (`\  \\\n";
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "  |-- --|__) )  \n";
    for (int steps = 0; steps < 30; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "   )))--)))  \n";
    std::this_thread::sleep_for(1000ms);
    system("CLS");
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "  |\\__/| (`\ \\\n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "  | o o |__) )  \n";
    for (int steps = 0; steps < 60; ++steps)
    {
        std::cout << " ";
    }
    std::cout << "  ()--()  \n";
    std::this_thread::sleep_for(1000ms);
    system("CLS");



    auto end = std::chrono::high_resolution_clock::now();
    system("CLS");
    
}
