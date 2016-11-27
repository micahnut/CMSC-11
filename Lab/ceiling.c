#include <stdio.h>

int ceiling(float);

int main(){
	float x;
	int ans,z;
	
	scanf("%f",&x);
	
	ans=ceiling(x);
	z=x/1;
	printf("%i\n", ans);
	printf("%i", z);
	
	
	
	return 0;
}

int ceiling(float x){

	int ceiling,i;
	
	for(i=1;i<x;i++)
			ceiling=x/i;
	
	return i;
}
