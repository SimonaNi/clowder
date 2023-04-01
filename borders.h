#include <iostream>
#include <ctime.h> //za spawnvaneto

using namespace std;

const int Wide = 30; //??
const int Tall = 30; //da sa ednakvi vse pak

int x, y, fishX, fishY;

void fishSpawn(){    //tyka ima oshte neshta ama ne mi se zanimava rn
                    //dobaviane na koga spawn i score
fishX = rand() % Wide;
fishY = rand() % Tall;

}