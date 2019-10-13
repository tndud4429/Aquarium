//
//  main.cpp
//  Project2
//
//  Created by 신수영 on 3/19/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include <iostream>
#include "fish.h"
#include "yellowtang.h"
#include "butterflyfish.h"
#include "aquarium.h"

int main() {
    /*
    Fish *nemo = new Fish(3, "nemo");
    nemo->remember('a');
    nemo->printMemory();// prints "a.. "
    nemo->remember('b');
    nemo->remember('c');
    nemo->printMemory();// prints "abc"
    nemo->remember('d');
    nemo->printMemory(); // prints "bcd"
    Fish *dory = new Fish(*nemo);
    dory->printMemory(); // prints "bcd"
    nemo->forget();
    nemo->printMemory(); // prints "..."
    *dory = *nemo;
    dory->printMemory(); // prints "..."
    return 0;*/
    /*
    Yellowtang *bubbles = new Yellowtang(3, "bubbles");
     bubbles->remember('t');
    bubbles->printMemory(); // prints "t.."
    bubbles->remember('o');
    bubbles->printMemory(); // prints "BUBBLES!"
    bubbles->remember('a');
    bubbles->remember('b');
    bubbles->printMemory(); // prints "BUBBLES!"
    bubbles->remember('c');
    bubbles->printMemory(); // prints "abc"
    return 0;
    */
    /*
    Butterflyfish *tad
    = new Butterflyfish(3, "tad");
    tad->printMemory();
    tad->remember('a');
    tad->remember('x');
    tad->remember('a');
    tad->remember('b');
    tad->remember('c');
    tad->remember('a');
    tad->remember('d');
    tad->printMemory();
    tad->forget();
    tad->printMemory();
    return 0;
    */
    
    Fish *nemo = new Fish(3, "nemo");
    nemo->remember('a');
    nemo->remember('c');
    Fish *dory = new Fish(*nemo);
    Butterflyfish *tad
    = new Butterflyfish(4, "tad");
    tad->remember('a');
    tad->remember('a');
    Yellowtang *bubbles
    = new Yellowtang(3, "bubbles");
    bubbles->remember('t');
    std::cout << "----------AQUARIUM" << std::endl;
    Aquarium aq;
    aq.addFish(nemo);
    aq.addFish(dory);
    aq.addFish(tad);
    aq.addFish(bubbles);
    aq.oracle();
    std::cout << "----------Feed" << std::endl;
    aq.feed("abcdefghijkfdfdhgl");
    aq.oracle();
    std::cout << "----------Bubbles!" << std::endl;
    aq.feed("oooo");
    aq.oracle();
    std::cout << "----------Boo!" << std::endl;
    aq.startle();
    aq.oracle();
    
    delete bubbles;
    delete tad;
    delete dory;
    delete nemo;
    system("pause");
    return 0;
     
}
