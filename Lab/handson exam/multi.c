#include<stdio.h>

int main(){
	int num,i,j,temp;
	
	printf("MULTIPLICATION TABLE \n");
	
	scanf("%d",&num);
	
	temp=num;
	
	for(i=1;i<=num;i++){
		//printf("\n");
		for(j=1;j<=10;j++){
			printf("%d * %d = %d\n", i,j,i*j);	
			//printf("\n");
		}
		
		
	}
	printf("\n");
	
}
