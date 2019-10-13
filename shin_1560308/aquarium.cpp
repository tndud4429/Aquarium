//  1560308
//  Soo Young Shin
//  aquarium.cpp
//  Project2


#include "fish.h"
#include "aquarium.h"
#include <iostream>
#include <string>

Aquarium::Aquarium(): m_nFish(0){
    for(int i=0; i<MAX_FISH; i++){
        m_fish[i] = nullptr;
    }

}
bool Aquarium::addFish(Fish* fish){
    if (m_nFish >= MAX_FISH)
    {
        std::cout << "Maximum fishes already added!" << std::endl;
        return false;
    }
    m_fish[m_nFish]=fish;
    m_nFish++;
    return true;
}
Fish* Aquarium::getFish(int n){
    if( m_nFish < n || n > MAX_FISH ){return nullptr;}
    else return m_fish[n]; 
}
void Aquarium::oracle(){
    for(int i=0; i<m_nFish; i++){
        std::cout << m_fish[i]->getName() << " ";
        m_fish[i]->printMemory();
    }
}
void Aquarium::feed(std::string food){
        for(int i=0; i<food.length(); i++){
                m_fish[i%m_nFish]->remember(food[i]);
    }
}
void Aquarium::startle(){
    for(int i=0; i<m_nFish; i++){
        m_fish[i]->forget();
    }
}
