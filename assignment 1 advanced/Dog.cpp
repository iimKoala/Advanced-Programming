#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include "Dog.h"

void Dog::dog() {
    using namespace std::chrono_literals;


    //Dog
    ifstream myfile("dog.txt");
    string doge;
    if (myfile.is_open())
    {
        while (getline(myfile, doge))
        {
            cout << doge << '\n';
        }
       
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(1000ms);
        system("CLS");
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  ^ --^        /   \n";
        for (int steps = 0; steps < 30; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  /.. / \\_____/    \n";
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
        std::cout << "  ' ..'        /   \n";
        for (int steps = 0; steps < 60; ++steps)
        {
            std::cout << " ";
        }
        std::cout << "  /_ / \\_____/    \n";
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
}
