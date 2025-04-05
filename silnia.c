#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    int tmp = 1;
    
    printf("Podaj liczbę: ");
    scanf("%d", &n);
    
    for(int i = n; i > 1; --i)
    {
        tmp *= i;
    }
    
    printf("Silnia liczby %d wynosi %d", n, tmp);
    return 0;
}