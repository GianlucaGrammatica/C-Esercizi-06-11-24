#include <stdio.h>

/*
    Scrivi una funzione ricorsiva in C che calcoli il fattoriale di un numero intero `n`
    dove `n` viene richiesto all'utente.

    La funzione dovrà restituire `1` se `n` è uguale
    a `0`, altrimenti dovrà calcolare `n * fattoriale(n - 1)`.
*/

int CalcoloFattoriale(int n) {
    if(n == 0) {
        return 1;
    }

    n * CalcoloFattoriale(n-1);
}

int main(void) {
    printf("%d\n", CalcoloFattoriale(3));
    return 0;
}
