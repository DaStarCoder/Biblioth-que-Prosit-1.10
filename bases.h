// Structs & Fonctions de base - Damien - Tristan
/*

CE FICHIER CONTIENT LA STRUCTURE DES FRACTIONS UTILIS�ES DANS TOUT LE PROGRAMME ET DES FONCTIONS DE BASE POUR LES MANIPULER

*/

// Ceci est la structure contenant les nombres avec lesquels nous travaillons. Les entiers seront repr�sent�s par une fraction sur 1.
typedef struct fraction
{
	int numerateur;			//Rappel de 6�me: une fraction c'est num�rateur / d�nominateur.
	int denominateur;
} Fraction;

// Cet �num�ration repr�sente l'�tat d'un r�sultat.
typedef enum etatresultat {
	etatSucces, // = int 0
	etatErreur  // = int 1
} etatResultat;

// Structure repr�sentant le r�sultat d'une op�ration. Elle permet d'indiquer s'il y a eu une erreur, ou le r�sultat.
// Veuillez retourner une valeur de ce type � la fin d'un calcul!
typedef struct resultat
{
	etatResultat estErreur;
	Fraction resultat;
} Resultat;


// Structure repr�sentant le r�sultat d'une op�ration renvoyant un code entier. Elle permet d'indiquer s'il y a eu une erreur, ou le r�sultat.
// Veuillez retourner une valeur de ce type si le calcul ne fait que renvoyer un �tat (type Vrai, Faux, �gal...)!
typedef struct resultatInt
{
	etatResultat estErreur;
	int resultat;
} ResultatInt;

// Si qq'un a besoin, ceci permet de cr�er une Fraction avec deux entiers.
Fraction Frac(int n, int d);

// Si qq'un a besoin, ceci permet d'obtenir l'approximation d�cimale d'une fraction.
double Decimal(Fraction f);