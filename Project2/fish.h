//  1560308
//  Soo Young Shin
//  fish.h
//  Project2


#ifndef FISH_H
#define FISH_H

#include <string>

class Fish {
public:
    Fish(int capacity, std::string name);// Constructor
    Fish(const Fish &other); // Copy Constructor
    virtual ~Fish(); // Destructor
    Fish &operator=(const Fish &other); // Assignment Operator
    
    virtual void remember(char c); // Remember c
    virtual void forget(); // Clears memory by filling in '.'
    virtual void printMemory() const;// Prints memory
    
    std::string getName();
protected:
    
    const char* getMemory() const;// Returns memory
    int getAmount() const; // Returns amount remembered
    int getCapacity() const; // Returns memory capacity
    
private:
    // TODO: declare any private member variables/functions here
    int f_capacity;
    char *f_memory;
    std::string f_name;
};

#endif /* FISH_H */
