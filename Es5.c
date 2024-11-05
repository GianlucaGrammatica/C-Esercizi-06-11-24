#include <stdio.h>
#include <stdlib.h>

/*
Scrivi un programma che implementi una semplice rubrica telefonica in C:
1. Definisci una `struct Contatto` con i campi `nome`, `cognome`, e `numero`.
2. Chiedi all’utente di inserire un numero di contatti e riempi un array di `struct
Contatto`.
3. Salva i dati inseriti in un file di testo chiamato `"rubrica.txt"`.
4. Alla fine, stampa i contatti leggendo dal file.
*/

struct Contatto {
    char Nome[50];
    char Cognome[50];
    char Numero[12];
};

int main(void) {
    int NContatti;
    FILE* fp = fopen("../rubrica.txt", "w");

    printf("Inserisci il numero di contatti: ");
    scanf("%d", &NContatti);

    struct Contatto Rubrica[NContatti];

    for (int i = 0; i < NContatti; i++) {
        printf("Inserisci il nome: ");
        scanf("%s", Rubrica[i].Nome);

        printf("Inserisci il cognome: ");
        scanf("%s", Rubrica[i].Cognome);

        printf("Inserisci il numero: ");
        scanf("%s", Rubrica[i].Numero);
    }

    for (int i = 0; i < NContatti; i++) {
        fprintf(fp, "%s %s %s \n", Rubrica[i].Nome, Rubrica[i].Cognome, Rubrica[i].Numero);
    }

    fclose(fp);
    return 0;
}
