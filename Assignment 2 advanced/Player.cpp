#include "Player.h"
#include<vector>
#include <iostream>
#include "Colour.h"
using namespace std;

inventory::inventory() {
	//Epmty
}

void inventory::setName(string s)
{
	itemName = s;
}

void inventory::setID(int i)
{
	itemID = i;
}

int inventory::getID()
{
	return itemID;
}

void inventory::setCapacity(int i)
{
	capacity = i;
}

int inventory::getCapacity()
{
	return capacity;
}

void inventory::setQuantity(int i)
{
	quantity = i;
}

int inventory::getQuantity()
{
	return quantity;
}

string inventory::getName()
{
	return itemName;
}

int Player::Attack()
{
	cout << " you swing your arm and land a hit.";

	return Damage;
}
string Player::getName()
{
	cout << "Enter your name: " << Color(13);
	cin >> name;
	cout << Color(7) << " Welcome ";
	return name;
}