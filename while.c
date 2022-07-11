#include <stdio.h>

int main(){
	
	int islem;
	int bakiye = 1000;
	int tutar;
	
	
	while (1){
	printf("Ýslemler\n1:Para cekme\n2:Para yatýrma\n3:Havalae yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");
	
	printf("Ýslemi seciniz: ");
	scanf("%d",&islem);
	
	
	switch(islem){
		case 1:
			printf("Bakiyeniz %d\n",bakiye);
			printf("Cekilecek tutar:");
			scanf("%d",&tutar);
			
			if (tutar>bakiye){
				printf("Girdiginiz tutar gecersizdir\n\n");
				}
				
			else{
				bakiye -= tutar;
				printf("Bakiyeniz %d\n\n",bakiye);
			}
			break;
			
		case 2:
			printf("Bakiyeniz %d\n",bakiye);
			printf("Yatiilacak tutar:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Bakiyeniz %d\n\n",bakiye);
			
			break;
			
		case 3:
			printf("Bakiyeniz %d\n",bakiye);
			printf("Havale tutari:");
			scanf("%d",&tutar);
			
			if (tutar>bakiye){
				printf("Girdiginiz tutar gecersizdir\n\n");
				}
				
			else{
				bakiye -= tutar;
				printf("Bakiyeniz %d\n\n",bakiye);
			}
			break;
			
		case 4:
			printf("Bakiyeniz %d\n\n",bakiye);
			break;
			
		case 5:
			printf("Kart iade edildi.\n\n");
			break;
			
			
		default:
			printf("Girdiginiz tutar gecersizdir\n\n");
			break;
			
		
		}
		
	printf("----------------------------------------------------------------------------\n\n");
				
	}
	
	
	
}
