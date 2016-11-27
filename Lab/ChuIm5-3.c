#include<stdio.h>
	int main(){
    int x,a=1,b=1,c,ctr=1;

    do{
 		 printf("Please enter a postive number:");
 		 scanf("%i",&x);

    }while(x<=0);
    printf("Fibonacci Sequence:%i",a);
   while(ctr<x){
     c=a+b;
     a=b;
     b=c;
     ctr=ctr+1;
     printf(" %i",a);
}
return 0;
}


//Ask the user to enter a number, say n (assume to be positive).  Print the first n elements of the Fibonacci sequence. For example, if n=8, then the values 1 1 2 3 5 8 13 21 should be displayed on the console. Name this file <yourFamilyName>5-3.c (e.g. dulaca5-3.c).
