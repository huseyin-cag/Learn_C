#include <stdio.h>


int main(){
	int fact;
	int n;
	
	printf("Fakt�riyel sayisini girin:");
	scanf("%d",&fact);
	n = fact;
	
	while (n > 1){
		printf("%d\n",n);
		n -= 1;
		fact *= n;
		
	}
	
	printf("\n%d",fact);
	
	
	
}
