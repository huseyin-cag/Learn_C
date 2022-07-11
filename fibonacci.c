#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, j, toplam;
	int tekrar;
	
	for(i=1, j=0; tekrar<12;tekrar++){
		toplam = i+j;
		printf("%d\n",toplam);
		j=i;
		i=toplam;
		
	}
	
	
	return 0;
}
