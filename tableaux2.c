
#include <stdio.h>
#include <stdlib.h>


void triABulles(int tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // Échange des éléments
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}
int main() {
  // ici je déclare directement mon tableau
  int tab[10] = {62, 12, 86, 1, 3, 5, 7, 9, 11, 13};
  int taille = sizeof(tab) / sizeof(tab[0]);

    // Trier le tableau avec le tri à bulles
    triABulles(tab, taille);

    // Le plus petit élément est le premier élément
    int min = tab[0];
    // Le plus grand élément est le dernier élément
    int max = tab[taille - 1];

    printf("Le plus petit nombre est : %d\n", min);
    printf("Le plus grand nombre est : %d\n", max);

    return 0;

}