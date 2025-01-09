
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10] = {62, 12, 1, 1, 3, 5, 7, 9, 11, 13};
    printf("Tableau normal : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }

   

   // affiche les doublons dans le tableau
    printf("\nDoublons : ");
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (tab[i] == tab[j]) {
                printf("%d ", tab[i]);
            }
        }
    }
    
    return 0;
}


