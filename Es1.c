#include <stdio.h>

/*
Scrivi un programma in C che:
    1. Chieda all’utente di inserire la dimensione di un array.
    2. Inizializzi l'array con valori inseriti dall'utente.
    3. Calcoli e stampi la somma di tutti i numeri pari contenuti nell’array.
*/

int CheckPari(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int Dimensione;

    printf("Dimensione dell'array: ");

    scanf("%d", &Dimensione);
    int Array[Dimensione];

    for (int i = 0; i < Dimensione; i++) {
        printf("\nValore cella %d:\t ", i);
        scanf("%d", &Array[i]);
    }

    int Somma = 0;
    for (int i = 0; i < Dimensione; i++) {
        if(CheckPari(Array[i])) {
            Somma += Array[i];
        }
    }

    printf("\nSomma numeri pari: %d ", Somma);
    return 0;
}
