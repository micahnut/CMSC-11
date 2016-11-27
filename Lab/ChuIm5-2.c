#include <stdio.h>

int main(){
	int x=0,cf=2;

    do{
 		printf("Please enter a postive number:");
 		scanf("%i",&x);

    }while(x<=0);
 	
 	while(cf*cf>x && x!=1)
 		cf=cf+1;

 	if(cf>=x)
    		printf("%i is prime.\n",x);
    	else if(x==1)
    		printf("%i is not prime.\n",x);
    else
	    printf("%i is not prime.\n",x);

    return 0;
}


	//Ask the user to enter a positive number. Determine whether this number is prime or not. Name this file <yourFamilyName>5-2.c (e.g. dulaca5-2.c).
