#include <stdio.h>
#include <math.h>

int Euclid(int a, int b)
{
    while(b != 0)
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }

    return a;
}

int main()
{
    printf("NWD liczb wynosi: %d", Euclid(1, 1));
}