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
    cout << Color(7) << "-------------------------------------------------------------------------------------------" << endl;
    cout << " You are a brand new creation made by the evil scientist " << "Dr. LongBottom " << Color(7);
    cout << "Know for his hainous deeds he created you inorder to protect his most prized: " << possesion << Color(11);
    cin >> possesion;

    system("cls");

    cout << Color(7) << "-------------------------------------------------------------------------------------------" << endl;
    cout << Color(7) << " The doctor says to you" << endl;


    cout << " My new creation, now that you are completed it the next task is a " << Color(13) << "name" << endl;
    cout << Color(7) << " ...tell me beast what is your name: " << Color(13);
    cin >> name;

    system("cls");

    cout << Color(7) << "-------------------------------------------------------------------------------------------" << endl;
    cout << Color(7) << " Ahh yes " << Color(13) << name << endl;
    cout << Color(7) << " Now for your first task you have to get across the lab and go to my possesion which is littered with traps and weird past times of mine." << endl;

   

   
	return name;
}