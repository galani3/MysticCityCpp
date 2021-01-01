#include <iostream>
#include <string>
#include <memory>
#include "Place.h"
#include "Direction.h"


Direction::Direction(const int& id, const Place& from, const Place& to, const std::string& dir)
{
	this->id = id;
	this->from = std::make_shared<Place>(from);
	this->to = std::make_shared<Place>(to);
	this->dir = dir;
}

bool Direction::match(const std::string& s)
{
	return s == dir;
}

void Direction::lock()
{
	locked = true;
}

void Direction::unlock()
{
	locked = false;
}

bool Direction::isLocked()
{
	return locked;
}

 Place Direction::follow()
 {
     if (!isLocked())
     {
		 return *to.get();
     }
     else
     {
         return *from.get();
     }
 }

void Direction::print()
{
	std::cout << "Direction Id: " << id << std::endl;
	std::cout << "from place: " << (*from.get()).getName() << std::endl;
	std::cout << "to place: " << (*to.get()).getName() << std::endl;
	std::cout << "Direction: " << dir << std::endl;
	std::cout << "Locked: " << locked << std::endl;
}
