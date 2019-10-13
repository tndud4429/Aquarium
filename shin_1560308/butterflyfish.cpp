//  1560308
//  Soo Young Shin
//  butterflyfish.cpp
//  Project2


#include "butterflyfish.h"
#include "fish.h"
#include <iostream>

Butterflyfish::Butterflyfish(int capacity, std::string name): Fish(capacity,name){
    //initialize its own variables
    b_capacity = getCapacity();
    b_extendedMemory = new char[b_capacity];
    b_countMemory = new int[b_capacity];
    for (int i=0; i<b_capacity; i++){
        b_extendedMemory[i] = '.';
    }
    for(int i=0; i<b_capacity; i++){
        b_countMemory[i]=0;
    }
}
Butterflyfish::Butterflyfish(const Butterflyfish &other): Fish(other){
    b_capacity = getCapacity();
    b_extendedMemory = new char[b_capacity];
    b_countMemory = new int[b_capacity];
    b_capacity = other.b_capacity;
    for(int i=0; i<b_capacity; i++){
        b_extendedMemory[i]=other.b_extendedMemory[i];
    }
}
Butterflyfish &Butterflyfish::operator=(const Butterflyfish &other){
    if(this==&other){return *this;}
    else {
        Fish::operator=(other);
        b_capacity = other.b_capacity;
        for(int i=0; i<b_capacity; i++){
            b_extendedMemory[i]=other.b_extendedMemory[i];
        }
        return (*this);
    }
}
Butterflyfish::~Butterflyfish(){
    delete [] b_extendedMemory;
    delete [] b_countMemory;
}
void Butterflyfish::remember(char c){
    Fish::remember(c);
    if(getExtendedAmount()==b_capacity){
        b_capacity = b_capacity*2;
        for (int i=(b_capacity/2); i<b_capacity; i++){
            b_extendedMemory[i] = '.';
            b_countMemory[i]=0;
        }
    }
    for(int i=0; i<b_capacity; i++){
        if (b_extendedMemory[i] == c){
            b_countMemory[i]++;
        break;
        }
        else if (b_extendedMemory[i] == '.'){
            b_extendedMemory[i] = c;
            b_countMemory[i]++;
            break;
            }
        }
    }
void Butterflyfish::printMemory() const{
    Fish::printMemory();
    std::cout << "I’m Obnoxious!" << std::endl;
    if(b_extendedMemory[0]!='.') {
        std::cout<< "I've seen: " << std::endl;
        for(int i=0; i<b_capacity; i++){
            if (b_extendedMemory[i] == '.'){ break; }
            else std::cout << "  " << b_extendedMemory[i] << " " << b_countMemory[i] << " times" << std::endl;
        }
    }
}
int Butterflyfish::getExtendedAmount() const {
    int count=0;
    for (int i=0; i<b_capacity; i++){
        if(b_extendedMemory[i] != '.'){count++;}
    }
    return count;
}
