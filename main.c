#include <stdio.h>


int main(){
	
	int a1 = 66;
	float b1 = 5.4;
	char c1 = 66;
	char c2 = "B";
	double d1 = 0.21;
	
	printf("%d %.2f %c %.2f\n\n",a1,b1,c1,d1);
	
	
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	
	return 0;
}
