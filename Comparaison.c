#include <stdio.h>
#include <stdlib.h>
#include "Comparaison.h"

int main(int argc, char *argv[]) {
	float a, b;
	printf("Veuillez entrer 2 nombres avec un espace entre les deux : ");
	scanf("%f %f", &a, &b);
	Comparaison(a,b);
	int i;
	switch (i){
	
	case 0 :
		printf("a = b");
		break;
	case 1 :
		printf("a < b");
		break;
	case 2 :
		printf("a > b");
		break;
	case 3 :
		printf("a = -b et a<b");
		break;
	case 4 :
		printf("a = -b et a>b");
		break;
	}
	return 0;
}
