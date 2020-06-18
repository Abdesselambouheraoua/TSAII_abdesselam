#include <stdio.h>
#include <stdlib.h>

int main()
{
int nbx;
    printf("entrez un nombre \n");
    scanf( "%d", &nbx);
    if (nbx>=0)
    {
     printf("c'est positif\n");
    }
    else
    {
        printf("c'est negatif\n");
    }
    return 0;
}
