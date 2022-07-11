#include<stdio.h>


int main(){
	
	int fin, i, top = 0;
	
	printf("Sýnýr sayýsýný giriniz: ");
	scanf("%d",&fin);
	
	for(i=1; i<=fin; i++){
		if(i%2==1){
			continue;
		}
		
		top += i;
		
			
	}
	
	printf("%d",top);
	
	return 0;
}
