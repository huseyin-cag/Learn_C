#include<stdio.h>

int main(){
	int sayi, hane = 0, toplam = 0;
	
	printf("sayiyi girin");
	scanf("%d",&sayi);
	
	do{
		toplam += (sayi%10);
		hane++;
		sayi = sayi/10;
	}
	
	while(sayi>0);
	
	printf("Rakamlari toplami = %d\n", toplam);
	printf("Basamak sayisi = %d", hane);
	
	
}
