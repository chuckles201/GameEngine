// for header
#ifndef HEADGAME_H  
#define HEADGAME_H  

#include <iostream>
#include <string>
using namespace std;


// nation class
class Nation {
    public:
        Nation(string namei,float techi,float cspiriti);

        string name;
        float tech;
        float cspirit;
};


// Planet class
class Planet {
    public:
        Planet(string namei,float populationi,float recourcesi);
        void GetInfo();

        string name;
        float population;
        float recources;
};



#endif 