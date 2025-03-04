#include <iostream>
#include <string>
#include "headGame.h"
using namespace std;

// Planet intialization (Background)
Planet::Planet(string namei,float populationi,float recourcesi){
    name = namei;
    recources = recourcesi;
    population = population;
}

void Planet::GetInfo(){
    //////////////////
    // print out stats fancily
    string start = "Info For : ";
    int str_len = name.length() + start.length();
    for (int i = 0; i <= str_len; i ++) {
        cout << "-";
    } cout << endl;
    cout << start << name << endl;
    cout << "> Population : " << population << endl;
    cout << "> Recources : " << recources << endl;

    for (int i = 0; i <= str_len; i ++) {
        cout << "-";
    } cout << endl;
    //////////////////

}