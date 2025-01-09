#include <stdio.h>

int main()
{
    int tab[10] = {15, 23, 7, 42, 89, 56, 100, 32, 78, 60}; 
    int *ptr = tab;  
    int r, f = 0;

    
    printf("Entrez un nombre à rechercher : ");
    scanf("%d", &r);

    // Recherche de l'élément dans le tableau
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) == r) {
            f = 1;  // L'élément a été trouvé
            
        }
    }

    // Affichage du résultat
    if (f) {
        printf("L'élément %d est présent dans le tableau.\n", r);
    } else {
        printf("L'élément %d n'est pas présent dans le tableau.\n", r);
    }

    return 0;
}
