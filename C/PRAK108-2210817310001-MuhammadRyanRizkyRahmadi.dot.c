#include <stdio.h>

int main (){
    float taman = 5;
    float jaraktempuh = 14;
    float tiapputaran = jaraktempuh / taman;
    float jari = tiapputaran / (2 * 3.14);

    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", taman);
    printf("Jarak tempuh Pak Dengklek = %.f Km\n", jaraktempuh);
    printf("Jari - jari taman yang dikelilingi = %.2f Km\n", jari);
}