#include<stdio.h>
#include<math.h>
void main(void)
{
    float x,y;
    printf("Unesite vrijednost za koju zelite izvrsiti proracun:");
    scanf("%f",&x);
    if(x>=0.)
    {
        printf("Broj x=%.3f je pozitivan!\n",x);
        y=sqrt(x);
        printf("Kvadratni korijen broja x iznosi %.3f\n",y);

    }
    else {
        printf("Broj x=%.3f je negativan!\n",x);
        printf("Nije moguce izracunati kvadratni korijen iz negativnog broja!\n");
    }
y=x*x;
printf("Kvadrat broja x iznosi %.3f:\n",y);
}
