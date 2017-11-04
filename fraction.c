#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bases.h"
void purger(void) {                                    //Fonction qui permet de résoudre le problème du scanf(%c)
  int c;
  while ((c = getchar()) != '\n' && c != EOF);

}
Fraction depuisDouble(double x){
double c;
double d;
float j;
double entree;
d=0;
c=0;
j=0;
entree=x;
purger();
c=entree;
while (floor(c)!=c){
    c=c*10;
    j++;
}
d=entree*(pow(10,j));
j=pow(10,j);
Fraction f={d,j};
return f;
}
