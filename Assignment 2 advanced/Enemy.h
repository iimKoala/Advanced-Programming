#pragma once
#include <string>
using namespace std;
class Enemy 
{
public:
	string name = "Enemy";
	int damage = 10;
	int health = 100;
	string ability = " Attacked you";
	int gold;
	int experience;
	int Attack() const;
	int Defeat();


};


class Glob: public Enemy
{
public:
	string name = "Glob";
	int damage = 15;
	int health = 110;
	string ability = " Shot Guuu";
	int gold = 50;
	int experience = 45;
	int Attack() const;

};

