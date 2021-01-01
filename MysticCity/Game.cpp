#include "Game.h"
#include <string>
#include "Place.h"
#include <iostream>


Game::Game() {

}

Game::Game(const std::string& n) {
	this->name = n;
}

void Game::setName(const std::string& n) {
	this->name = n;
}

void Game::addPlace(const Place& p) {
	places.push_back(p);
}

void Game::print() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "-----GAME PLACES------" << std::endl;
	for (auto i = places.begin(); i != places.end(); i++) {
		std::cout << (*i).getName() << std::endl;
		std::cout << (*i).getDescription() << std::endl;
	}
}