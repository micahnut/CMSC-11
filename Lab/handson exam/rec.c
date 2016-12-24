#include<stdio.h>

int main(){
	int length,width;
	int i,j;
	
	printf("Enter width \n");
	scanf("%d",&width);
	
	printf("Enter length \n");
	scanf("%d", &length);
	
		
	
	for(i=0;i<width;i++){
		if(i==0){
			for(j=0;j<length;j++)
			printf("*");
		}
		if(i==width-1){
			for(j=0;j<length;j++)
			printf("*");
		}
		if(i!=0 && i!=width-1){
			printf("*");
			for(j=1;j<length-1;j++)
				printf(" ");
			printf("*");
				
		}
		printf("\n");	
	}
	
		return 0;
	
}
