#include <stdio.h>
#include <math.h>
int main (){
    
    float a =5;
    float t =12;
    float A =t;
    float B = sqrt(a*a + t*t);
    float C =a;
    float Kel = A + B + C;
    float L = C*A/2;

    printf ("Diketahui :\n");
    printf ("Alas %.f Cm\n", a);
    printf ("Tinggi %.f Cm\n", t);
    printf ("\n");
    printf ("Jawab:\n");
    printf ("Sisi A = %.0f Cm\n", C);
    printf ("Sisi B = %.0f Cm\n", B);
    printf ("Sisi C = %.0f Cm\n", A);
    printf ("Keliling = %.0f Cm\n", Kel);
    printf ("Luas = %.0f Cm\n", L);
}

