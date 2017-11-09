#include <stdio.h>
#include <stdlib.h>
#include "bases.h"
//#include "arithmetique.h"
#include "factorielle.h"
#include "Comparaison.h"
//#include "puissance.h"

Fraction entrerFrac() {
	Fraction f = { 0, 0 };
	printf("Entrer numerateur: ");
	scanf("%d", &(f.numerateur));
	printf("Entrer denominateur: ");
	scanf("%d", &(f.denominateur));
	return f;
}

void PrintfFrac(Fraction f) {
	printf("\n%d\n-------\n%d\n", f.numerateur, f.denominateur);
}

int main()
{
	printf("Entrez le numéro de l'opération voulue:\n"
		"0\tAddition\n"
		"1\tSoustraction\n"
		"2\tMultiplication\n"
		"3\tDivision\n"
		"4\tModulo\n"
		"5\tPuissance\n"
		"6\tRacine\n"
		"7\tComparer\n"
		"8\tPGCD\n"
		"9\tPPCM\n"
		"10\tSimplifier\n"
		"11\tFactorielle\n");
	int entree;
	scanf("%d\n",&entree);
	
	switch (entree)
	{
	//case 0:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(somme(f1, f2));
	//break;
	//case 1:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(difference(f1, f2));
	//break;
	//case 2:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(produit(f1, f2));
	//break;
	//case 3:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(quotient(f1, f2));
	//break;
	//case 4:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(modulo(f1, f2));
	//break;
	//case 5:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(puissance(f1, f2));
	//break;
	//case 6:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(racine(f1, f2));
	//break;
	case 7:
		Fraction f1 = entrerFrac();
		Fraction f2 = entrerFrac();
		printf("%d\n",compare(f1, f2).resultat);
		break;
	//case 8:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(pgcd(f1, f2));
	//break;
	//case 9:
	//	Fraction f1 = entrerFrac();
	//	Fraction f2 = entrerFrac();
	//	PrintfFrac(ppcm(f1, f2));
	//break;

	//case 10:
	//	Fraction f1 = entrerFrac();
	//	PrintfFrac(simplifier(f1));
	//break;
	case 11:
		Fraction f1 = entrerFrac();
		PrintfFrac(factorial(f1));
		break;
	default:
		printf("Mauvais choix\n");
		break;
	}
    return 0;
}
