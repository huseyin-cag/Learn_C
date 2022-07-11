#include <stdio.h>

int main(){
	int note;
	float ort;
	int toplam;
	
	printf("1. notunuzu girin: ");
	scanf("%d",&note);
	toplam += note;
	
	printf("2. notunuzu girin: ");
	scanf("%d",&note);
	toplam += note;
	
	printf("3. notunuzu girin: ");
	scanf("%d",&note);
	toplam += note;
	
	ort = toplam/3.0;
	
	if (ort < 50){
		printf("kaldin");
	}
	
	else if (ort >= 50 && ort < 85){
		printf("tesekkur");
	}
	
	else{
		printf("takdir");
	}

	
	return 0;
}
