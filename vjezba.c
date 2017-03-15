#include<stdio.h>
void main(void)
{
//this is comment
   float zarada,porez;
   printf("Unesite iznos zarade:");
   scanf("%f",&zarada);
   if(zarada<=1000.)
    porez=zarada*0.05;
   else if(zarada<=10000.)
    porez=zarada*0.06;
   else if(zarada<=20000.)
    porez=zarada*0.08;
   else porez=zarada*0.1;
   printf("Na zaradu u iznosu %.3f obracunat je porez u iznosu od %.3f \n",zarada,porez);
}
