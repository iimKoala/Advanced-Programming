#pragma once
#include "Player.h"
#include "Enemy.h"
class Fight : public Player, public Glob, public Enemy
{
public:

	static int fight();
	
};

