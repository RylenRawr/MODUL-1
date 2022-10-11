#include <stdio.h>

int main() {
    int SepatuA=400000;
    int SepatuB=350000;
    int diskonAA = SepatuA-0.13*SepatuA;
    int diskonBB = SepatuB-0.21*SepatuB;

        printf("Harga Sepatu A adalah %.d\n", SepatuA);
            printf("Harga Sepatu A adalah %.d\n", SepatuB);
    printf ("Sepatu A mendapat Diskon 13%% =%d \n", diskonAA);
    printf ("Sepatu A mendapat Diskon 21%% =%d\n", diskonBB);
}