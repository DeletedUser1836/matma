#include <stdio.h>
#include <math.h>


int main()
{
	int x = 0;
	int check = 0;
	
	printf("Podaj liczbę:");
	scanf("%d", &x);
	
	if(x % 2 == 0)
	{
	    check++;
	}
	
	if(x % 3 ==  0)
	{
	    check++;
	}
	
	if(x % 6 == 0) //tak na wszelki wypadek to dam jeżeli by coś zawiodło
	{
	    check++;
	}
	
	if(check > 0)
	{
	    printf("Twoja liczba NIE JEST pierwsza.");
	}
	
	else
	{
	    printf("Twoja liczba JEST pierwsza.");
	}
}