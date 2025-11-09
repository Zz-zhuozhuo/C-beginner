#include <stdio.h>
#include <windows.h>


int main()
{
    SetConsoleOutputCP(65001);

    int numbers[10] = {5, 3, 8, 6, 2, 7, 1, 9, 4, 0};  
    int i, j, temp;
    
        
    
    for(i = 0; i < 9; i++)
    {          
        for(j = 0; j < 9 - i; j++)
        {  
            if(numbers[j] > numbers[j + 1])
            {
                
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    

    printf("\n排序后的结果是：");
    
    for(i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}