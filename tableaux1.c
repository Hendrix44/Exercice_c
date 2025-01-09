#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille[5];
    for (int i = 0; i <5; i++)
    {
        printf("Entrer le  nombre %d : " , i+1);
        scanf("%d",&taille[i]);//%d pour les nombre , avec &toujours la pcq pointer,taille[i]
                                // pcq  on sauvegarde un element dans le tab
    }

    for (int i = 0; i < 5; i++)
    {
        printf("L'indice du  %d est le nombre %d \n" ,i, taille[i]);
    }
    
    
    return 0;
}
