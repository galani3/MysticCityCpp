#include <iostream>
#include "Place.h"
#include "Direction.h"


Place::Place(const int& id, const std::string& name, const std::string& description)
{
    this->id = id;
    this->name = name;
    this->description = description;
}

std::string Place::getName()
{
    return name;
}

std::string Place::getDescription()
{
    return description;
}

void Place::addDirection(const Direction& direction)
{
    //Add the pointer to list of directions
    directions.push_back(std::make_shared<Direction>(direction));
}

Place Place::followDirection(const std::string& direction)
{
    for (auto i = directions.begin(); i != directions.end(); i++) {
        if ((*(*i)).match(direction)) {
            return  (*(*i)).follow();
        }
    }

    return *this;
}

void Place::print()
{
    std::cout << "Place Id: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Description: " << description << std::endl;

     for (auto i = directions.begin(); i != directions.end(); i++)
     {
         (*(*i)).print();
     }
}
