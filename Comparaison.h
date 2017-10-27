#include <stdio.h>
#include <stdlib.h>

// 0 signifie que a = b
int Comparaison (float a, float b){ // 1 signifie que a est plus petit que b
	if (a<b){ // 2 signifie que a est plus grand que b
		return 1; // 3 signifie que a et b sont opposés et que a est plus petit que b
	}else if(a>b){ // 4 signifie que a et b sont opposés et que a est plus grand que b
		return 2;
	}else if(a == b){
		return 0;
	}else if(a == -b && a<b){
		return 3;
	}else if(a == -b && a>b){
		return 4;
	}
}

int main(){
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
