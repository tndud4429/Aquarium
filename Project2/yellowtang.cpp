//  1560308
//  Soo Young Shin
//  yellowtail.cpp
//  Project2


#include "yellowtang.h"
#include "fish.h"
#include <iostream>

Yellowtang::Yellowtang(int capacity, std::string name): Fish(capacity, name), y_bubble(0){
    memory = Fish::getMemory();
}
Yellowtang::Yellowtang(const Yellowtang &other): Fish(other){
    memory = other.getMemory();
    y_bubble = other.y_bubble;
}
Yellowtang &Yellowtang::operator=(const Yellowtang &other) {
    if(this==&other){return *this;}
    else {
        Fish::operator=(other);
        y_bubble = other.y_bubble;
        return (*this);
    }
}
void Yellowtang::remember(char c){
    
    Fish::remember(c);
    int count=0;
    for (int i=0; i<getCapacity(); i++){
        if (memory[i]=='o'){
            count++;
        }
        y_bubble=count;
    }
}
void Yellowtang::printMemory() const{
    if (y_bubble!= 0) {std::cout<<"BUBBLES!"<<std::endl;}
    else{ Fish::printMemory(); }
}
void Yellowtang::forget(){
    Fish::forget();
    y_bubble = 0;
}

