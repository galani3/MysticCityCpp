#pragma once
#ifndef DIRECTION_H
#define DIRECTION_H

#include <string>
#include <memory>

class Place;

class Direction
{
    int id;
    std::shared_ptr<Place> from;
    std::shared_ptr<Place> to;
    std::string dir;
    bool locked = false;

public:
    Direction(const int&, const Place&, const Place&, const std::string&);
    bool match(const std::string&);
    void lock();
    void unlock();
    bool isLocked();
    Place follow();
    void print();
};

#endif