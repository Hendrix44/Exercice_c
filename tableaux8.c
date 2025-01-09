
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10] = {62, 12, 86, 1, 3, 5, 7, 9, 11, 13};
    printf("Tableau normal : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }

   

    // Affiche le tableau inversé
    printf("\nTableau inversé : ");
    for (int i = 9; i >= 0; i--) { 
        printf("%d ", tab[i]);
    }

    
    
    return 0;
}


