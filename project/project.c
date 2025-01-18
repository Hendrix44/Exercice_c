#include <stdio.h>
#include <string.h>



#define MAX_RESERVATIONS 100



// Structure pour une réservation
typedef struct {
    char nom[50];
    int tailleTable;  // Nombre de personnes sur ttable
    char date[20];    // Date de réservation
    char heure[10];   // Heure de réservation
} Reservation;



Reservation reservations[MAX_RESERVATIONS];
int nbReservations = 0;




// Fonction pour ajoutrer une nouvelle réservation
void ajouterReservation() {
    if (nbReservations >= MAX_RESERVATIONS) {
        printf("Désolé, le restaurant est complet pour cette date.\n");
        return;
    }




    // Pointeur vers la prochaine réservation
    Reservation *nouvelleReservation = &reservations[nbReservations];

    printf("Entrez le nom du client : ");
    scanf("%s", nouvelleReservation->nom);
    printf("Entrez la taille de la table (nombre de personnes) : ");
    scanf("%d", &nouvelleReservation->tailleTable);
    printf("Entrez la date (YYYY-MM-DD) : ");
    scanf("%s", nouvelleReservation->date);
    printf("Entrez l'heure (HH:MM) : ");
    scanf("%s", nouvelleReservation->heure);




    nbReservations++; // Incrémentation du nombre de réservations

    printf("Réservation ajoutée pour %s à %s le %s, Taille de la table : %d\n",
           nouvelleReservation->nom, nouvelleReservation->heure, 
           nouvelleReservation->date, nouvelleReservation->tailleTable);
}




// Fonction pour afficher toutes les réservations
void afficherReservations() {
    if (nbReservations == 0) {
        printf("Aucune réservation trouvée.\n");
        return;
    }



    printf("\nListe des réservations:\n");
    for (Reservation *res = reservations; res < reservations + nbReservations; res++) {
        printf("Nom : %s, Taille de la table : %d, Date : %s, Heure : %s\n",
               res->nom, res->tailleTable, res->date, res->heure);
    }
}





// Fonction pour rechercher une réservation par nom
void rechercherReservation() {
    char nom[50];
    printf("Entrez le nom du client à rechercher : ");
    scanf("%s", nom);

    int trouve = 0;
    for (Reservation *res = reservations; res < reservations + nbReservations; res++) {
        if (strcmp(res->nom, nom) == 0) {
            printf("Réservation trouvée : Nom : %s, Taille de la table : %d, Date : %s, Heure : %s\n",
                   res->nom, res->tailleTable, res->date, res->heure);
            trouve = 1;
            break;
        }
    }




    if (!trouve) {
        printf("Aucune réservation trouvée pour %s.\n", nom);
    }
}

// Fonction pour supprimer une réservation par nom
void supprimerReservation() {
    char nom[50];
    printf("Entrez le nom du client pour annuler la réservation : ");
    scanf("%s", nom);





    for (Reservation *res = reservations; res < reservations + nbReservations; res++) {
        if (strcmp(res->nom, nom) == 0) {
            // Décale les réservations suivantes
            for (Reservation *next = res; next < reservations + nbReservations - 1; next++) {
                *next = *(next + 1);
            }
            nbReservations--; // Décrémente le nombre de réservations
            printf("Réservation pour %s annulée avec succès.\n", nom);
            return;
        }
    }
    printf("Aucune réservation trouvée pour %s.\n", nom);
}





// Fonction pour trier les réservations par nom (ordre alphabétique)
void trierReservationsParNom() {
    for (int i = 0; i < nbReservations - 1; i++) {
        for (int j = i + 1; j < nbReservations; j++) {
            if (strcmp(reservations[i].nom, reservations[j].nom) > 0) {
                // Échange des réservations
                Reservation temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Réservations triées par nom.\n");
}







// Fonction pour modifier une réservation
void modifierReservation() {
    char nom[50];
    printf("Entrez le nom du client pour modifier la réservation : ");
    scanf("%s", nom);

    for (int i = 0; i < nbReservations; i++) {
        if (strcmp(reservations[i].nom, nom) == 0) {
            printf("Modification de la réservation pour %s.\n", nom);
            printf("Nouvelle taille de la table : ");
            scanf("%d", &reservations[i].tailleTable);
            printf("Nouvelle date (YYYY-MM-DD) : ");
            scanf("%s", reservations[i].date);
            printf("Nouvelle heure (HH:MM) : ");
            scanf("%s", reservations[i].heure);

            printf("Réservation mise à jour avec succès.\n");
            return;
        }
    }
    printf("Aucune réservation trouvée pour %s.\n", nom);
}






// Fonction pour initialiser des données prédéfinies pour les patrons qui passent tout les jours
void initialiserDonnees() {
    strcpy(reservations[0].nom, "Dupont");
    reservations[0].tailleTable = 4;
    strcpy(reservations[0].date, "2025-01-20");
    strcpy(reservations[0].heure, "19:30");

    strcpy(reservations[1].nom, "Martin");
    reservations[1].tailleTable = 2;
    strcpy(reservations[1].date, "2025-01-21");
    strcpy(reservations[1].heure, "20:00");

    nbReservations = 2;
}


// Fonction principale
int main() {
    int Action;

    initialiserDonnees(); // Initialiser les données prédéfinies

    while (1) {
        printf("\nQue voulez-vous faire :\n");
        printf("* Ajouter une réservation          (1)\n");
        printf("* Afficher toutes les réservations (2)\n");
        printf("* Rechercher une réservation       (3)\n");
        printf("* Annuler une réservation          (4)\n");
        printf("* Modifier une réservation         (5)\n");
        printf("* Trier les réservations par nom   (6)\n");
        printf("* Terminer                         (7)\n");

        printf("Votre choix : ");
        scanf("%d", &Action);

        if (Action == 1) ajouterReservation();
        else if (Action == 2) afficherReservations();
        else if (Action == 3) rechercherReservation();
        else if (Action == 4) supprimerReservation();
        else if (Action == 5) modifierReservation();
        else if (Action == 6) trierReservationsParNom();
        else if (Action == 7) break;
        else printf("Choix invalide. Veuillez réessayer.\n");

        printf("\n");
    }

    printf("Programme terminé. Merci d'avoir utilisé notre système de gestion des réservations Premium. \n A bientot  ;) \n");
    return 0;


}
