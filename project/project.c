#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100

// Structure pour une réservation
typedef struct {
    char nom[50];
    int tailleTable;  // Nombre de personnes
    char date[20];    // Date de réservation
    char heure[10];   // Heure de réservation
} Reservation;

Reservation reservations[MAX_RESERVATIONS];
int nbReservations = 0;


// Fonction pour ajouter une nouvelle réservation
void ajouterReservation(char* nom, int tailleTable, char* date, char* heure) {
    // Vérifie si la limite de réservations est atteinte
    if (nbReservations >= MAX_RESERVATIONS) {
        printf("Désolé, le restaurant est complet pour cette date.\n");
        return;
    }



     Reservation nouvelleReservation;
    strcpy(nouvelleReservation.nom, nom);         // Copie le nom du client
    nouvelleReservation.tailleTable = tailleTable; // Définit la taille de la table
    strcpy(nouvelleReservation.date, date);       // Copie la date de la réservation
    strcpy(nouvelleReservation.heure, heure);     // Copie l'heure de la réservation


    // Ajoute la réservation dans le tableau
    reservations[nbReservations] = nouvelleReservation;
    nbReservations++; // Incrémentation du nombre de réservations

    printf("Réservation ajoutée pour %s à %s le %s, Taille de la table : %d\n", nom, heure, date, tailleTable);
}


// Fonction pour afficher toutes les réservations
void afficherReservations() {
    // Si aucune réservation n'existe, affiche un message
    if (nbReservations == 0) {
        printf("Aucune réservation trouvée.\n");
        return;
    }

    
     // Affiche toutes les réservations présentes dans le tableau
    printf("\nListe des réservations:\n");
    for (int i = 0; i < nbReservations; i++) {
        printf("Nom : %s, Taille de la table : %d, Date : %s, Heure : %s\n",
               reservations[i].nom,       // Nom du client
               reservations[i].tailleTable, // Taille de  table
               reservations[i].date,       // Date de resa
               reservations[i].heure);     // Heure de  résa
    }
}





    int main() {
    // Ajouter quelques réservations
    ajouterReservation("President", 4, "2025-01-15", "19:30");
    ajouterReservation("Presidente", 2, "2025-01-16", "20:00");

    // Afficher toutes les réservations
    afficherReservations();

    

    return 0;
}


