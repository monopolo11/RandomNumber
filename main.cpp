#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

int main()
{
    float cpuNumber;
    srand(time(NULL));
    cpuNumber = 0;
    cpuNumber = rand() % 10 + 1;
    ofstream myfile;
    myfile.open ("number.txt");
    myfile << cpuNumber;
    myfile.close();
    cout << cpuNumber;
    return 0;
}
