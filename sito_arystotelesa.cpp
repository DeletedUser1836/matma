#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>
using namespace std;

int main()
{
    long long n = 0;
    printf("Podaj rozmiar tablicy: ");
    scanf("%lld", &n);
    bool D[n + 1];
    for(long long i = 0; i < n; i++)
    {
        D[i] = true;
    }
    
    D[0], D[1] = false;
    for(long long i = 2; i < sqrt(n); i++)
    {
        if(D[i] == true)
        {
            for(long long j =2*i; j <= n; j+=i)
            {
                D[j] = false;
            }
        }
    }
    
    for(long long i = 0; i < n; i++)
    {
        if(D[i] == true)
        {
            printf("%lld ", i);
        }
    }
}