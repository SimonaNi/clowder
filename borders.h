#include <iostream>
#include <ctime.h> //za spawnvaneto

using namespace std;

const int Wide = 30; //??
const int Tall = 30; //da sa ednakvi vse pak

int x, y, catX, catY;

void catSpawn(){     //tyka ima oshte neshta ama ne mi se zanimava rn
                    //dobaviane na koga spawn i score
catX = rand() % Wide;
catY = rand() % Tall;

}