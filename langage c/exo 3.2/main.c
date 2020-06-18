#include <stdio.h>
#include <stdlib.h>

int main()
{
 int nb1,nb2,nb3;
    printf("entrer un nombre : \n");
    scanf( "%d", &nb1);
    printf("entrer un autre nombre : \n");
    scanf( "%d", &nb2);
    if (nb1>=0 & nb2>=0 || nb1<0 & nb2<0)
{
     printf("le produit est positif \n");
}
     else
     {

     printf("le produit est negatif \n");
     }
return 0;
}
