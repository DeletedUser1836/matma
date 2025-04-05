#include <stdio.h>
#include <math.h>

int main()
{
    int x = 0;
    int y = 0;
    
    if(x < 0)
    {
        printf("Nie można wyliczyć pierwiastka z liczby ujemnej.");
    }
    
    printf("Podaj liczbę: ");
    scanf("%d", &x);
    
    printf("2 - kwadratowy(sqrt)\n3 - szescienny(cbrt)\n");
    printf("Potęga pierwiastka: ");
    scanf("%d", &y);
    
    switch(y)
    {
        case 2:
        printf("Wyznaczenie pierwiastka wynosi około: %f", sqrt(x));
        break;
        
        case 3:
        printf("Wyznaczenie pierwiastka wynosi około: %f", cbrt(x));
        break;
        
        default:
        printf("Wybierz spośród tych dwóch dobra?\n");
        
        printf("2 - kwadratowy(sqrt)\n3 - szescienny(cbrt)\n");
        printf("Potęga pierwiastka: ");
        scanf("%d", &y);
        
        switch(y)
        {
            case 2:
            printf("Wyznaczenie pierwiastka wynosi około: %f", sqrt(x));
            break;
                
            case 3:
            printf("Wyznaczenie pierwiastka wynosi około: %f", cbrt(x));
            break;
                
            default:
            printf("Właśnie coś powiedziałem.");
            
                printf("2 - kwadratowy(sqrt)\n3 - szescienny(cbrt)\n");
            printf("Potęga pierwiastka: ");
            scanf("%d", &y);
            
            switch(y)
            {
                case 2:
                printf("Wyznaczenie pierwiastka wynosi około: %f", sqrt(x));
                break;
                    
                case 3:
                printf("Wyznaczenie pierwiastka wynosi około: %f", cbrt(x));
                break;
                    
                default:
                printf("Nie robię więcej switch'ów. A mi się nie chce robić pętli.");
            }
        }
        
        break;
    }
}