#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    int tmp = 0;
    
    printf("Podaj liczbę: ");
    scanf("%d", &n);
    
    for(int i = n; i > 0; --i)
    {
        tmp += i;
    }
    
    printf("Słabnia liczby %d wynosi %d", n, tmp);
    return 0;
}