#include "Fight.h"
#include "Player.h"
#include "Enemy.h"
#include "Colour.h"
#include <iostream>
#include <string>

Player pl;
Glob en;


int Fight::fight()
{

	cout << Color(13) << pl.name << Color(7) << " has run into " << en.name << endl;

	do {
			if (pl.Damage > en.damage) {
				pl.Attack();

				en.health = en.health - pl.Damage;

				cout << " You did " << pl.Damage << " damage" << endl;

				en.Attack();

				cout << " You took " << en.damage << " damage" << endl;
				pl.health = pl.health - en.damage;
			}
			if (pl.Damage < en.damage)
				en.Attack();
			pl.health = pl.health - en.damage;

			cout << " You took " << en.damage << " damage" << endl;

			pl.Attack();

			cout << " You did " << pl.Damage << " damage" << endl;
			
			en.health = en.health - pl.Damage;

	} while (pl.health > 0 && en.health > 0);

	return pl.health, en.health;
}