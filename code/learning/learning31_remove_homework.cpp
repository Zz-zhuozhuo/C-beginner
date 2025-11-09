#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); 

    int * Arr = new int[11];

    Arr[0] = 3;
    Arr[1] = 5;
    Arr[2] = 7;
    Arr[3] = 9;
    Arr[4] = 11;
    Arr[5] = 13;
    Arr[6] = 15;
    Arr[7] = 17;
    Arr[8] = 19;
    Arr[9] = 21;
    Arr[10] = 23;

    int * Arr_new = new int[9];
    int offset = 0;

    for (int i = 0; i < 11; i++) 
    {
        if (i == 0 || i == 5)
        {
            offset++;
            continue;
        }

        Arr_new[i-offset] = Arr[i];
    }
     
        
    

    delete[] Arr;

    Arr = Arr_new;

    for (int j = 0; j < 9; j++)
    {
        cout << Arr[j] << " ";
    }

    cout << endl;
    

    delete[] Arr_new;

    return 0; 
}
        


        




     