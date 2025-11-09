#include <iostream> 
#include <windows.h> 
using namespace std; 

int main() 
{   
    SetConsoleOutputCP(65001); 
    
    
    char str[1001];
    fgets(str, 1001, stdin);
    int len = strlen(str);
    int found_chenzu = 0;
    int found_chengzu = 0;

    for (int i = 0; i < len; i++) 
    {
        if (i + 5 < len) 
        {
            if ( str[i] == 'c' 
            && str[i+1] == 'h' 
            && str[i+2] == 'e' 
            && str[i+3] == 'n' 
            && str[i+4] == 'z' 
            && str[i+5] == 'u') 
            {
                found_chenzu = 1;
            }
         }
        if (i + 6 < len) 
        {
            if ( str[i] == 'c' 
            && str[i+1] == 'h' 
            && str[i+2] == 'e' 
            && str[i+3] == 'n' 
            && str[i+4] == 'g' 
            && str[i+5] == 'z' 
            && str[i+6] == 'u') 
            {
                found_chengzu = 1;
             }
        }
    }

    if (found_chenzu && found_chengzu) 
        printf("error\n");
    else if (found_chenzu)
        printf("chen\n");
    else if (found_chengzu) 
        printf("orange\n");
    return 0;
}//解决中文乱码