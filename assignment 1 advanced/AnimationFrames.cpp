#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <iomanip>
#include "cat.h"
#include "Frog.h"
#include "Dog.h"
#include"Monkey.h"
#include"Shark.h"
#include "Spider.h"
#include "AnimationFrames.h"

int AnimationFrames::animation() {
    cat C;
    Dog D;
    frog F;
    shark S;
    monkey M;
    spider Sp;
    C.Cat();
    system("pause");
    D.dog();
    system("pause");
    F.Frog();
    system("pause");
    S.Shark();
    system("pause");
    M.Monkey();
    system("pause");
    Sp.Spider();
    system("pause");




    return 0;

}
