// L1.5 (Esercizio proposto)
#include <stdio.h>
#include <math.h>
#define p_greco 3.14
float input();
int main()
{
    //Info
    printf("----------------------------------------------------------------\n");
    printf("\t\tEsercizio \n");
    printf("Si scriva un programma che dato un numero \n");
    printf("reale immessoo da tastiera, detto D, calcoli e stampi :\n");
    printf("-L'area del quadrato di lato D. \n");
    printf("-L'area del cerchio di diametro D. \n");
    printf("-L'area del triangolo eqilatero di lato D.");
    printf("----------------------------------------------------------------\n");
    //Area quadrato
    float a;
    a = input();
    float area;
    area = a * a;
    float r;
    printf("\nL'area del quadratato e : %1.f \n", area);
    printf("----------------------------------------------------------------\n");
    //L' area del cerchio di diametro D
    r = a / 2;
    area = p_greco * (r*r);
    printf("\nL'area del cerchio e : %1.3f \n", area);
    printf("----------------------------------------------------------------\n");
    float calcolo;
    float h;
    calcolo = a * (sqrt(3) /2 );
    h = a * sin(p_greco/3);
    area = (a * h) /2;
    printf("\nL'area del triangolo equilatero e : %1.3f \n", area);
    printf("----------------------------------------------------------------\n");

    return 0;
}
float input()
{
    float input_;
    printf("Inserisci D: \n");
    scanf("%f",&input_);
    return input_;
}