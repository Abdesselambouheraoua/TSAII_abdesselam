#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;
    printf("entrer en heure : \n");
    scanf("%d", &h);
    printf("entrer en minute : \n");
    scanf("%d", &m);
    printf("entrer en seconde: \n");
    scanf("%d", &s);
    s=s+1;
    if (s==60)
    {
        s=0;
        m=m+1;
        if (m==60)
        {
            m=0;
            h=h+1;
            if (h==24)
            {
                h=0;
            }
        }
    }


    printf("dans  1 seconde il sera %d h %d m %d s: \n",h,m,s);


    return 0;
}


