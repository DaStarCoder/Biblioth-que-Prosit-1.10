#include <stdio.h>
#include <stdlib.h>
#include "bases.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Resultat factorial (Fraction f)
{
	if(f.denominateur==1){
		int i;
		long rslt;
		for(i=1,i<=f.numerateur,i++){
			rslt*=i;
		}
		Fraction x={rslt,1};
		Resultat r={etatSucces,x};
		return r;
	}
	else{
		Resultat r={etatErreur,NULL};
		return r;
	}
	
}
