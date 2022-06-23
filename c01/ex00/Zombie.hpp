#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP
#include <iostream>

/*
    Create the Zombie class definition.
*/
class Zombie
{
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
};

#endif
