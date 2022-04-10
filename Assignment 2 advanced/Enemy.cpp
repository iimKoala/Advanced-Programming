#include "Enemy.h"
#include <iostream>
#include "Colour.h"

using namespace std;

int Enemy::Attack() const
{
	cout << Color(13) << name << Color(7)<<  ability;
	return damage;

}

int Glob::Attack() const
{
	cout << Color(13) << name <<  Color(7) << ability;
	return damage;
}

int Enemy::Defeat()
{
	if (health <= 0)
	{
		
	}
	return gold, experience;
}

