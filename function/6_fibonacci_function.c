
// Challenge 6 : Fonction de Fibonacci

#include <stdio.h>

int factorielle(int terme_p)
{
    if (terme_p == 0)
    {
        return 0;
    }
    else
    {
        int terme_final = 1;
        for (int i = 0; i < terme_p; i++)
        {
            terme_final = i+1 ;
        }
        return terme_final;
    }
}

int main()
{
    int terme;
    printf(" terme de la suite de Fibonacci : ");
    scanf("%d", &terme);

    printf("le term numero %d dans la suite de Fibonacci est : %d", terme, factorielle(terme));
    return 0;
}