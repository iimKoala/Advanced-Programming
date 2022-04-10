#include <iostream>
#include <string>
#include "Colour.h"
#include "Enemy.h"
#include "Player.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include "Fight.h"

using namespace std;


enum { North, East, South, West, Down, Up, NumDirs };

struct Room
{
    string name;
    string descrip;
    int dirs[NumDirs];

    Room(const string& nm, const string& desc, const int* d)
        : name(nm), descrip(desc)
    {
        for (int i = 0; i < NumDirs; ++i) dirs[i] = d[i];
    }
};

auto readRooms(const string& filename)
{
    vector<Room> rooms;
    string line;
    ifstream in(filename);
    if (!in)
    {
        cout << "Error: Cannot open input file " << filename << '\n';
        exit(EXIT_FAILURE);
    }
    using std::getline;
    for (int n = 1, num; in >> num; ++n)
    {
        if (n != num)
        {
            cout << "Error: rooms are out of order: "
                << num << " should be " << n << ".\n";
            exit(EXIT_FAILURE);
        }
        string name, descrip;
        getline(in >> std::ws, name);
        int d[NumDirs];
        for (int i = 0; i < NumDirs; ++i) in >> d[i];
        getline(in >> std::ws, descrip);
        while (getline(in, line) && !line.empty())
            descrip += "\n" + line;
        rooms.emplace_back(name, descrip, d);
    }
    return rooms;
}

int charDirToNumDir(char cd)
{
    switch (cd)
    {
    case 'n': return 0;
    case 'e': return 1;
    case 's': return 2;
    case 'w': return 3;
    case 'd': return 4;
    case 'u': return 5;
    }
    return -1;
}

string numDirToString(int d)
{
    static const char* sdirs[NumDirs]
    { "North", "East", "South", "West", "Down", "Up" };
    return sdirs[d];
}

void describeRoom(const Room& r)
{
    cout << r.name << '\n'
        << r.descrip << '\n'
        << "Exits are: ";
    for (int i = 0; i < NumDirs; ++i)
        if (r.dirs[i] != 0)
            cout << Color(12)<< numDirToString(i) << ' '<< Color(7);
    cout << '\n';
}

void dumpRooms(const vector<Room>& rooms)
{
    for (const auto& r : rooms)
    {
        describeRoom(r);
        cout << '\n';
    }
}

void explore(const vector<Room>& rooms)
{
    int r = 0;
    while (true)
    {
        describeRoom(rooms[r]);
        int d = -1;
        while (true)
        {
            cout << "Direction: " << Color(12);
            char cd;
            cin >> cd;
            Color(7);
            cd = std::tolower(cd);
            if (cd == 'q') return;
            d = charDirToNumDir(cd);
            if (d != -1 && rooms[r].dirs[d] != 0) break;
            cout << "Bad direction\n";
        }
        r = rooms[r].dirs[d] - 1;
        cout<< Color(7) << '\n';
    }
}





int main()
{
	Glob g;
    Player p;
    Fight f;
	
    p.getName();

    system("pause");
  

	/*vector<inventory> myInventory;
	vector<inventory> playerInventory;
	vector<inventory> pInventory;
	inventory a;

	myInventory.push_back(a);
	myInventory[0].setName("KeyCard");
	myInventory[0].setID(100);
	myInventory[0].setQuantity(1);


	a.addToPlayer(playerInventory, myInventory, 100);*/

    Fight::fight();

    system("pause");

	auto rooms = readRooms("ROOM_69.txt");
	
	explore(rooms);
	return 0;
}
