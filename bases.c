// Structs & Fonctions de base - Damien Nouilhan
/*

CE FICHIER CONTIENT LA STRUCTURE DES FRACTIONS UTILISÉES DANS TOUT LE PROGRAMME ET DES FONCTIONS DE BASE POUR LES MANIPULER

*/


// Ceci est la structure contenant les nombres avec lesquels nous travaillons. Les entiers seront représentés par une fraction sur 1.
typedef struct fraction
{
	int numerateur;			//Rappel de 6ème: une fraction c'est numérateur / dénominateur.
	int denominateur;
} Fraction;

// Cet énumération représente l'état d'un résultat.
typedef enum etatresultat {
    succes, // = int 0
    erreur  // = int 1
} etatResultat;

// Structure représentant le résultat d'une opération. Elle permet d'indiquer s'il y a eu une erreur, ou le résultat.
// Veuillez retourner une valeur de ce type à la fin d'un calcul!
typedef struct resultat
{
	etatResultat estErreur;
	Fraction resultat;
} Resultat;


// Si qq'un a besoin, ceci permet de créer une Fraction avec deux entiers.
Fraction Frac(int n, int d)
{
	Fraction f = { n,d };
	return f;
}


// Si qq'un a besoin, ceci permet d'obtenir l'approximation décimale d'une fraction.
double Decimal(Fraction f)
{
	return (double)f.numerateur / f.denominateur;
}
