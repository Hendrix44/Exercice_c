#include <stdio.h>

int main()
{
    int tab1[5] = {10, 20, 30, 40, 50};  
    int tab2[5];  

    int *ptr1 = tab1; 
    int *ptr2 = tab2;  

    // Copie des éléments de tableau1 dans tableau2 
    for (int i = 0; i < 5; i++) {
        *(ptr2 + i) = *(ptr1 + i);  // Copier les éléments
    }

    // Affichage des deux tableaux
    printf("Tableau 1 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr1 + i)); 
    }

    printf("\n");

    printf("Tableau 2 : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));  
    }
    

    return 0;
}
