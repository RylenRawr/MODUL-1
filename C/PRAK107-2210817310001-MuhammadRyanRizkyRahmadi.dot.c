#include <stdio.h>

int main() {
    int SisiA = 4;
    int SisiB = 5;
    int SisiC = 7;
    int TanahPerMeter = 85000;
    int HasilSisi = SisiA+SisiB+SisiC;
    int HasilBiaya = TanahPerMeter*HasilSisi;

    printf("Diketahui:\n");
    printf("Panjang Sisi berturut %.d m, %.d m, dan %.d m\n", SisiA, SisiB, SisiC);
    printf("Keliling Tanah Pak Dengklek adalah %.d\n", HasilSisi);
    printf("Harga Tanah per Meter adalah %.d\n", TanahPerMeter);
    printf("\n");
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", HasilBiaya);
}