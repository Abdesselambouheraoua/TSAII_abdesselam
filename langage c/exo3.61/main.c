#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A ;
    printf("quel age a l'enfant  :\n");
    scanf( "%d", &A);
    if (A<6 )
    {
      printf("baby  :\n");
    }
    else if (A<8)
    {
      printf("poussin :\n");
    }
    else if (A<10)
    {
     printf("pupille :\n");
    }
    else if(A<12)
    {
      printf("minime :\n");
    }
    else
    {
    printf("cadet :\n");
    }
    return 0;
}



