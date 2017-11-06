#include <stdio.h>
#include <stdlib.h>
#include "Comparaison.h"

//ResultatInt compare(a, b){
	
	
//return 0;
//}

int compare(int a, int b) {
	if (a == b) {
		return 0;
	}
	else if (a < b) { // 2 signifie que a est plus grand que b
		return 1; // 3 signifie que a et b sont opposés et que a est plus petit que b
	}
	else if (a>b) { // 4 signifie que a et b sont opposés et que a est plus grand que b
		return 2;
	}
	else if (a == -b && a<b) {
		return 3;
	}
	else if (a == -b && a>b) {
		return 4;
	}
}
