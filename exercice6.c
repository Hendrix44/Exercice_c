#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Entrer 1er nombre : ");
    scanf("%d",&n1);
    printf("Entrer le 2e nombre : ");
    scanf("%d",&n2);
    printf("n1 vaut %d \n ",n1);
    printf("n2 vaut %d \n ",n2);
    int reserv=n1;
    n1=n2;
    n2=reserv;
    printf("Apres le mix ...\n");
    printf("-----------------------------------------------\n");
    printf("n1 donne %d \n ",n1);
    printf("n2 donne %d \n " ,n2);

    return 0;
}
