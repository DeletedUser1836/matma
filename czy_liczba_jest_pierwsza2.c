<include stdio.h>
int main()
{
    int liczba, odp = 0;
    printf("Podaj liczbę: ");
    scanf("%d", &liczba);
    for(int i = liczba; i > 0; i--)
      {
        if(liczba % i == 0)
        {
          odp++;
        }
      }

      if(odp != 2)
      {
        printf("Liczba jest pierwsza");
      }
      else
      {
        printf("Liczba NIE jest pierwsza");
      }
}
