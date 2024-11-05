#include <stdio.h>
#include <stdlib.h>

/*
Scrivi un programma in C che:
    1. Richieda all'utente la dimensione di un array.
    2. Allochi dinamicamente la memoria per l’array usando `malloc`.
    3. Chieda all’utente di riempire l’array con valori interi.
    4. Non si blocchi se l’utente vuole inserire più valori.
    5. Calcoli la media dei valori e la stampi a schermo.
    6. Libera la memoria allocata prima di terminare il programma.
*/


int main(void) {
    int Dimensione;
    int *Arr;

    printf("Dimensione dell'array: ");
    scanf("%d", &Dimensione);

    Arr  = (int*)malloc(Dimensione*sizeof(int));

    for (int i = 0; i < Dimensione; i++) {
        printf("\nValore cella %d:\t ", i);
        scanf("%d", &Arr[i]);
    }

    int Somma = 0, Media;
    for (int i = 0; i < Dimensione; i++) {
        Somma += Arr[i];
    }
    Media = Somma / Dimensione;

    printf("\nSomma: %d\t Media: %d", Somma, Media);

    free(Arr);
    return 0;
}
