#include<stdio.h>


int main(){
	
	int fin, i, top = 0;
	
	printf("S�n�r say�s�n� giriniz: ");
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
