#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb , prix;
    printf("Combien de Photocopies");
    scanf("%d",nb);
    if (nb<=10)
    {
      prix = nb*0.10;
    }
    else if (nb<=30)
    {
     prix = 10*0.10 + (nb-10)*0.09;
    }
    else
    {
     prix = 10*0.10 + 20*0.09 + (nb-30)*0.08;
    }
    printf("Le prix est de %d prix  %d nb photocopies : \n",prix,nb);
    return 0;
}




