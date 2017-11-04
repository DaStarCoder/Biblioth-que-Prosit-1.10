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
    etatSucces, // = int 0
    etatErreur  // = int 1
} etatResultat;

// Structure représentant le résultat d'une opération. Elle permet d'indiquer s'il y a eu une erreur, ou le résultat.
// Veuillez retourner une valeur de ce type à la fin d'un calcul!
typedef struct resultat
{
	etatResultat estErreur;
	Fraction resultat;
} Resultat;


// Structure représentant le résultat d'une opération renvoyant un code entier. Elle permet d'indiquer s'il y a eu une erreur, ou le résultat.
// Veuillez retourner une valeur de ce type si le calcul ne fait que renvoyer un état (type Vrai, Faux, Égal...)!
typedef struct resultatInt
{
	etatResultat estErreur;
	int resultat;
} ResultatInt;


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

// Transforme un nombre en fraction avec un numérateur et un dénominateur si t'es pas aller au CP.
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
