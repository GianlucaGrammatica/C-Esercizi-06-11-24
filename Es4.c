#include <stdio.h>
#include <stdlib.h>

/*
Scrivi un programma in C che:
    1. Dichiari un array di numeri interi.
    2. Utilizzi un puntatore per stampare ciascun elemento dell'array.
    3. Incrementi il puntatore per accedere agli elementi successivi dell'array.
*/


int main(void) {
    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* pArr = &Arr[0];

    printf("Elemnti array");
    for(int i = 0; i < 10; i++) {
        printf("\n%d ", *pArr);
        pArr++;
    }

    return 0;
}
