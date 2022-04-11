#pragma once
#include <string>
#include <iostream>
#include "Colour.h"
#include<vector>

using namespace std;
class Player
{
public:
	string name;
	string possesion;
	string getName();

	int health = 100;

	int Damage = 25;

int	Attack();

};

class inventory: public Player {
private:
	string itemName;
	int itemID;
	int capacity;
	int quantity;
public:
	inventory();

	void setName(string s);

	string getName();

	void setID(int i);

	int getID();

	void setCapacity(int i);

	int getCapacity();

	void setQuantity(int i);

	int getQuantity();

	void printInventory(vector<inventory> v) {
		for (int i = 0; i < v.size(); i++) {
			cout << "Name: " << v[i].getName() << endl;
		}
	}
	inventory search(vector<inventory> v, int id) { //search by id number
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getID() == id) {
				return v[i];
			}
		}
	}
	void addToPlayer(vector<inventory>& player, vector<inventory> v, int id) {
		player.push_back(search(v, id));
	}
	
};

