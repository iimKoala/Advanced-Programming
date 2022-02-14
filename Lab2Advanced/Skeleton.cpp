#include "Skeleton.h"
#include <iostream>
using namespace std;

int Skeleton::Attack() 
{
    cout << SkelWarCry << endl;
    return SkelDamage;
}

