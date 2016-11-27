#include<stdio.h>
	int main(){
    int a,ctr=1,cm;

    printf("Please enter a measurement in kilometers:\n");
    scanf("%i",&a);
    if(a<0) {
	
	do{
		printf("Please enter postive values only.\n");
		scanf("%i",&a);
					
	}while(a<=0);
    }
	cm=0;
    
    while(ctr<=100000){
        cm=cm+a;
        ctr=ctr+1; 
    }
    printf("%i km is equivalent to %i cm.\n",a,cm);
    return 0;
}    

//Ask the user to enter a measurement in kilometers (assume to be int and positive). Convert this into its equivalent in centimeters without using the multiplication operator. Name this file <yourFamilyName>5-1.c (e.g. dulaca5-1.c).
