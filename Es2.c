#include <stdio.h>

/*
    Scrivi una funzione ricorsiva in C che calcoli il fattoriale di un numero intero `n`
    dove `n` viene richiesto all'utente.

    La funzione dovrà restituire `1` se `n` è uguale
    a `0`, altrimenti dovrà calcolare `n * fattoriale(n - 1)`.
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
