#include <iostream>
#include <string>
using namespace std;

// including custom file headers
#include "includes/headGame.h"


int main() {
    Nation usa("USABBY",12.32,41.22);
    Planet earth("earth",200,30);
    earth.GetInfo();
    return 0;
}

