#include <iostream>
#include <string>
#include "headGame.h"
using namespace std;


/*
Forward-declare function in .h file
for ease of use and to only port function/class
functionality.

Just defining the functions we had in the header.
*/


// Initialization
Nation::Nation(string namei,float techi,float cspiriti) {
    name = namei;
    tech = techi;
    cspirit = cspiriti;

    //////////////////
    // print out stats fancily
    string start = "Initializing nation : ";
    int str_len = name.length() + start.length();
    for (int i = 0; i <= str_len; i ++) {
        cout << "-";
    } cout << endl;
    cout << start << name << endl;
    cout << "> Tech lvl : " << tech << endl;
    cout << "> Colonizing Spirit : " << cspirit << endl;

    for (int i = 0; i <= str_len; i ++) {
        cout << "-";
    } cout << endl;
    //////////////////

}

