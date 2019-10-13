//  1560308
//  Soo Young Shin
//  aquarium.h
//  Project2


#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <string>

class Fish;

const int MAX_FISH = 20;
class Aquarium {
public:
    Aquarium();
    bool addFish(Fish* fish);
    Fish *getFish(int n);
    void oracle();
    void feed(std::string food);
    void startle();
private:
    Fish * m_fish[MAX_FISH];
    int m_nFish;
};
#endif /* AQUARIUM_H */
