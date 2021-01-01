#pragma once
#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <vector>
#include <memory>

class Direction;

class Place
{
    int id;
    std::string name;
    std::string description;
    std::vector<std::shared_ptr<Direction>> directions;

public:     
    Place(const int&, const std::string&, const std::string&);
    std::string getName();
    std::string getDescription();
    void addDirection(const Direction&);
    Place followDirection(const std::string&);
    void print();
};

#endif