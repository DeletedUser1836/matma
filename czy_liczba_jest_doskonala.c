#include <stdio.h>
#include <math.h>

int main() 
{
    int n = 0;
    int x = 0;
    
    printf("Podaj liczbę: ");
    scanf("%d", &n);
    
    for(int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            x += i;
        }
    }
    
    if(x == n)
    {
        printf("Liczba %d JEST doskonała.\n", n);
    } 
    
    else
    {
        printf("Liczba %d NIE JEST doskonała.\n", n);
    }
}