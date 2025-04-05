#include <stdio.h>
#include <math.h>

void p(int n) 
{
    int i = 2;
    
    printf("Rozkład na czynniki pierwsze liczby %d: ", n);
    while (n > 1) 
    {
        while (n % i == 0) 
        {
            printf("%d ", i);
            n = n /i;
        }
        i++;
    }
    printf("\n");
}

int main() 
{
    int n;
    
    printf("Podaj liczbę do rozłożenia na czynniki pierwsze: ");
    scanf("%d", &n);
    
    p(n);
    return 0;
}