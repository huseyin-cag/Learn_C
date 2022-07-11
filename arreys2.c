#include<stdio.h>


int main(){
	float toplam = 0.0;
	float sayilar[5];
	int i;
	
	for(i=0; i<5; i++){
		printf("Sayýyý giriniz: ");
		scanf("%f",&sayilar[i]);
		}
		
	for(i=0; i<5; i++){
		printf("%.2f\n",sayilar[i]);
		toplam += sayilar[i];
	}	
	
	printf("%.2f",toplam);
	
	
	
	
	
	
	
	return 0;
}
