#pragma
#include <string>
#include <iostream>
#include <map>
using namespace std;
class Room {
public:
	explicit Room(int id, const std::string& name) : m_id(id), m_name(name) {}
	const std::string& GetName() const { return m_name; }
	const int& GetEnterCount() const { return m_enterCount; };
	void OnEnter() { ++m_enterCount; }
private:
	std::string m_name; // should this be const?
	int m_id; // should this be const?
	int m_enterCount = 0;
};

class RoomList {
public:
	RoomList();
	~RoomList() = default; // Is this needed? Rule of three?
	RoomList(const RoomList&) = delete; // Don't want copies
	RoomList& operator=(RoomList const&) = delete;
	const Room& GetRoom(int index);
private:
	// Should this be <int, Room> or <int, Room&>?
	std::map<int, Room> m_rooms;
};

RoomList::RoomList() {
	// Read all the rooms, e.g., from a data file
	// What is the lifetime of the Room I'm creating?
	// Room doesn't have copy or move ctors
	// Also, I'm not initializing m_rooms - what is its lifetime?
	m_rooms.emplace(0, Room(0, "Start Room"));
}

// Returning a reference to const Room - no one should be able to modify Room, except by calling room.OnEnter()
// room.OnEnter() should modify the Room inside the map (Individual Rooms are basically Singletons)
const Room& RoomList::GetRoom(int index) {
	auto result = m_rooms.find(index);
	if (result != m_rooms.end())
	{
		// result is a local var - is result->second valid after return?
		return result->second;
	}

	// Considering Optional<Room>
	throw "Invalid Index";
}