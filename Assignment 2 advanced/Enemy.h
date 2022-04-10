#pragma once
#include <string>
using namespace std;
class Enemy 
{
public:
	string name = "Enemy";
	int damage = 10;
	int health = 100;
	string ability = "Attacked you";
	int gold;
	int experience;
	int Attack();



};

