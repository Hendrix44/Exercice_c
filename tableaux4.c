#include <stdio.h>
#include <stdlib.h>



int main()
{
    int sum=0 ;
    int avg;
    int tab[10];
     int total_sup_moyenne = 0;
    int count_sup_moyenne = 0;
     // Lecture des valeurs
    for (int i = 0; i < 10; i++) {
        printf("Entrer le nombre %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // find the average of my tab
    for (int i = 0; i < 10; i++)
    {
        sum+= tab[i];
        
    }
    avg = sum/10;
    printf("La moyenne est de %d  : ",avg);

    for (int i = 0; i < 10; i++) {
        if (tab[i] > avg) {
            printf("%d est supérieur à la moyenne.\n", tab[i]);
            total_sup_moyenne += tab[i];
            count_sup_moyenne++;
        }
    }
    
    
    return 0;
}
