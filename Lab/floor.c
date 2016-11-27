#include <stdio.h>

int compfloor(float);

int main(){
	float x;
	int ans,z;
	
	scanf("%f",&x);
	
	ans=compfloor(x);
	z=x/1;
	printf("%i\n", ans);
	printf("%i", ans);
	
	
	
	return 0;
}

int compfloor(float x){

	int floor;
	
	floor= x/1;
	
	return floor;
}
