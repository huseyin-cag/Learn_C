#include<stdio.h>


int main(){
	int matris[3][5];
	int i, j, k, toplam;
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	
	for(i=0; i<5; i++){
		toplam=0;
		
		for(j=0; j<3; j++){
			
			k = matris[j][i];
			toplam += k;
		}
		printf("%d ",toplam);
	}
	
	return 0;
}
