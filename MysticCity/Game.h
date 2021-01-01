#pragma once
#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

class Place;

class Game
{
	std::string name;
	std::vector<Place> places;

public:
	Game();
	Game(const std::string&);
	void setName(const std::string&);
	void addPlace(const Place&);
	void print();
	void play();
};

#endif

