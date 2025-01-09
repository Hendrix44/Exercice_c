#include <stdio.h>

int main()
{
    
    int tab1[5] = {1, 2, 3, 4, 5};
    int tab2[5] = {1, 2, 9, 4, 5};  

    int *ptr1 = tab1;  
    int *ptr2 = tab2;  

    int identique = 1;  

    // Comparer les éléments des deux tableaux
    for (int i = 0; i < 5; i++) {
        if (*(ptr1 + i) != *(ptr2 + i)) {
            identique = 0;  // Si un élément diffère, les tableaux ne sont pas identiques
            
        }
    }

    // Affichage du résultat
    if (identique) {
        printf("Les tableaux sont identiques.\n");
    } else {
        printf("Les tableaux ne sont pas identiques.\n");
    }

    return 0;
}
