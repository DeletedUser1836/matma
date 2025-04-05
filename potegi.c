#include <stdio.h>

int main()
{
    int x =0;
    int y =0;
    
    printf("Podaj podstawę: ");
    scanf("%d", &x);
    
    printf("Podaj potęgę: ");
    scanf("%d", &y);

    if(y == 0)
    {
        printf("Potęga wynosi: 1");
    }
    
    else 
    {
        int tmp = 1;
        
        for(int i = 0; i < y; i++)
        {   
            tmp = tmp * x;
        }  
        
        printf("Potęga wynosi: %d", tmp);
        
        return tmp;
    }
    
}