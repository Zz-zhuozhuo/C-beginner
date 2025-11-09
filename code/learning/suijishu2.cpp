#include <iostream>
#include <windows.h>
#include <random>
using namespace std;



int get_random_num(int min , int max)
{
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dis(min, max);
   int random_num = dis(gen);
   return random_num;
}


int main()
{
    int num = get_random_num(1, 100);
    cout << "The random number is: " << num << endl;

    return 0;
}
