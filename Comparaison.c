#include <stdio.h>
#include <stdlib.h>
#include "Comparaison.h"

// 0 signifie que f1 = f2
// 1 signifie que f1 est plus petit que f2
// 2 signifie que f1 est plus grand que f2
// 3 signifie que f1 et f2 sont opposés et que f1 est plus petit que f2
// 4 signifie que f1 et f2 sont opposés et que f1 est plus grand que f2
int PPCM (int a, int b){
        int r ,i,p;
        r=a%b;
        if (r==0){
            return b;

        }else{
        while (r !=0){
            i=r;
            r=b%r;
        }
   }
p = (a*b)/i;

    return p;
   }

int compare(Fraction a, Fraction b){ 
Fraction f1 = a;
Fraction f2 = b;
int denocommun = PPCM(f1.denominateur, f2.denominateur);
int multiplicateur1 = denocommun / f1.denominateur;
int multiplicateur2 = denocommun / f2.denominateur;
f1.numerateur = f1.numerateur * multiplicateur1;
f2.numerateur = f2.numerateur * multiplicateur2;

	if (f1.numerateur == f2.numerateur) {
		return 0;
	}
	else if (f1.numerateur < f2.numerateur) { 
		return 1; 
	}
	else if (f1.numerateur > f2.numerateur) { 
		return 2;
	}
	else if (f1.numerateur == -f2.numerateur && f1.numerateur < f2.numerateur) {
		return 3;
	}
	else if (f1.numerateur == -f2.numerateur && f1.numerateur > f2.numerateur) {
		return 4;
	}
}
