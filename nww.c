#include <stdio.h>
#include <math.h>

void p1(int n) 
{
    int i = 2;
    
    printf("Rozkład na czynniki pierwsze liczby %d: ", n);
    
    while (n > 1) 
    {
        while (n % i == 0) 
        {
            printf("%d ", i);
            
            n = n / i;
        }
        
        i++;
    }
    
    printf("\n");
}

void p2(int m) 
{
    int j = 2;
    
    printf("Rozkład na czynniki pierwsze liczby %d: ", m);
    
    while (m > 1) 
    {
        while (m % j == 0) 
        {
            printf("%d ", j);
            
            m = m / j;
        }
        
        j++;
    }
    
    printf("\n");
}


int nwd(int a, int b) 
{
    while (b != 0) 
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main() 
{
    int n, m;
    
    printf("Podaj liczbę pierwszą: ");
    scanf("%d", &n);
    
    printf("Podaj liczbę drugą: ");
    scanf("%d", &m);
    
    p1(n);
    p2(m);
    
    int gcd = nwd(n, m);
    int odp = (n * m) / gcd;
    
    printf("NWW liczb %d i %d wynosi: %d\n", n, m, odp);
    
    return 0;
}