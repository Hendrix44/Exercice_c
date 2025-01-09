#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
     printf("Donner Votrre premier nombre : ");
    scanf("%d",&n1);
     printf("Donner Votre Second nombre : ");
    scanf("%d",&n2);
    int tot=n1+n2;
    printf("La somme de %d et %d Donne %d \n ",n1,n2 ,tot);
    printf("----------------------------------------\n");

    float f1,f2;
    printf("Donner Votrre 1er nombre : ");
    scanf("%f",&f1);
     printf("Donner Votre 2e nombre : ");
    scanf("%f",&f2);
    float sum=f1+f2;
     printf("La somme de %f et %f Donne %f  ",f1,f2 ,sum);

    return 0;
}
