#include <stdio.h>
#include <stdlib.h>

// Fonction de tri à bulles
void trierTableau(int tableau[], int taille) {
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


// Fonction de recherche dichotomique
int rechercheDichotomique(int tableau[], int taille, int valeur) {
    int debut = 0;
    int fin = taille - 1;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        if (tableau[milieu] == valeur) {
            return milieu; // Élément trouvé
        } else if (tableau[milieu] < valeur) {
            debut = milieu + 1; // Chercher dans la moitié droite
        } else {
            fin = milieu - 1; // Chercher dans la moitié gauche
        }
    }

    return -1; // Élément non trouvé
}



int main() {
    int tab[10];
    int valeur;

    // Lecture des valeurs
    for (int i = 0; i < 10; i++) {
        printf("Entrer le nombre %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // Trier le tableau
    int taille = sizeof(tab) / sizeof(tab[0]);
    trierTableau(tab, taille);

    // Afficher le tableau trié (facultatif)
    printf("Tableau trié : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Recherche de la valeur
    printf("Veuillez entrer la valeur à rechercher : ");
    scanf("%d", &valeur);

    int resultat = rechercheDichotomique(tab, taille, valeur);

    if (resultat != -1) {

        printf("Valeur %d trouvée à l'indice %d\n", valeur, resultat);

        // Compter combien de fois la valeur apparaît dans le tableau
        int occurrences = compterOccurrences(tab, taille, valeur);
        printf("La valeur %d apparaît %d fois dans le tableau.\n", valeur, occurrences);
    } else {
        printf("Valeur %d non trouvée dans le tableau\n", valeur);
    }

    return 0;
}
