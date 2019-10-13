//  1560308
//  Soo Young Shin
//  fish.cpp
//  Project2


#include "fish.h"
#include <iostream>

Fish::Fish(int capacity, std::string name): f_capacity(3), f_name(name){
    f_memory = new char[f_capacity];
    if(capacity > 0) {f_capacity = capacity;}
    for (int i=0; i<f_capacity; i++){
        f_memory[i] = '.';
    }
};
Fish::Fish(const Fish &other){
    f_memory = new char[f_capacity];
    f_capacity = other.f_capacity;
    f_name = other.f_name;
    for(int i=0; i<other.f_capacity; i++){
        f_memory[i]=other.f_memory[i];
    }
}
Fish::~Fish(){
    delete[] f_memory;
}
Fish &Fish::operator=(const Fish &other){
    if(this==&other) return (*this);
    f_capacity = other.f_capacity;
    for(int i=0; i<other.f_capacity; i++){
        f_memory[i]=other.f_memory[i];
    }
    return (*this);
}
void Fish::remember(char c){
    if(getAmount()==getCapacity()){
        for(int i=0; i<(getCapacity()-1); i++){
            f_memory[i]=f_memory[i+1];
        }
        f_memory[(getCapacity()-1)]= c;
    }
    else
    {
        for(int i=0; i<getCapacity(); i++){
            if(getMemory()[i] == '.')
            { f_memory[i] = c; break;}
        }
    }
}
void Fish::forget(){
    for(int i=0; i<f_capacity; i++){
        f_memory[i] = '.';
    }
}
void Fish::printMemory() const{
    for(int i=0; i<f_capacity; i++){
        std::cout << f_memory[i];
    }
    std::cout << std::endl;
}

std::string Fish::getName(){
    return f_name;
}
const char* Fish::getMemory() const{
    return f_memory;
}
int Fish::getAmount() const{
    int count=0;
    for (int i=0; i<f_capacity; i++){
        if(f_memory[i] != '.'){count++;}
    }
    return count;
}
int Fish::getCapacity() const{
    return f_capacity;
}
