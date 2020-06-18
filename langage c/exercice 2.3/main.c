#include <stdio.h>
#include <stdlib.h>

int main()
{
int prixht,nbx, total, tva;
double prixttc, tva1;
    printf("Entrez le prix ht\n");
    scanf( "%d", &prixht);
    printf("Entrez le nombre darticle  \n");
    scanf( "%d", &nbx);
    total=prixht*nbx;
    printf("prix total de tous les articles est de %d euro\n",total);
    printf("indiquez tva \n");
    scanf( "%d", &tva);
    tva1=tva/100.0;
    printf("la taxe  est donc de %f \n",tva1);
    prixttc=total*(1+tva1);
    printf("le prix ttc est de %f \n",prixttc);

  return 0;
}
