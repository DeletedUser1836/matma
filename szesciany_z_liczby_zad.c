#include <stdio.h>
#include <math.h>

int szesciany(int n)
{
    int tmp = n / 2;

    for(int i = 1; i * i * i < tmp; i += 2)
    {
        printf("%d, ", i * i * i);
    }
}

int main()
{
    szesciany(100);
    return 0;
}