////i declare, upon my honor, that i made this MPA bymyself
#include <stdio.h>

int main(){
	int choice,n=1,i,sum,num,x,p,cp=2,cf,prime,ctr=0,gp,z;
	//gp=germain prime,z for n postive in germain,x for n positive in perfect.
	do{
		printf("\t\t\tMenu\n\t1. Germain Prime\n\t2. Perfect Numbers\n\t3. Exit\n");
		fflush(stdin);
		scanf("%d",&choice);
	
		if(choice == 1){
			do{
			printf("Enter a postive number\n");
			fflush(stdin);
			scanf("%d",&z);
		}while(z<0);
		//i reset them because what if the user presses 1 again.
		gp=0;
		ctr=0;
		cp=2;
		
		while(ctr < z){
		cf = 2;
		prime = 1;
		while(cf*cf<=cp && prime){
			if(cp%cf==0)
				prime = 0;
			else
				cf++;
		}
		if(prime){
			cf = 2;
			prime = 1;
			
			gp=cp*2+1;
			while(cf*cf<=gp && prime){
			if(gp%cf==0)
				prime = 0;
			else
				cf++;
		}
		if(prime){
			printf("%i ", cp);
		ctr++;	
		}
		
}
	cp++;
	}
		}
		else
		if(choice == 2){
			do{
			printf("Enter a positive number.\n");
			fflush(stdin);
      		scanf("%d",&x);
			}while(x<0);
      //reset because what if the user enters 2 again.
 n=1;
 sum=0;
 num=0;
 
/*it will stop if the number of perfect numbers is equal to the input.*/
 while(num!=x){
   i=1;
   sum = 0;
/*to generate perfect numbers*/
   while(i<n){
     if(n%i==0)
          sum=sum+i;
         i++;
   }
/*if it has found 1, num or ctr will increase*/
   if(sum==n){
     printf("%d ",n);
    num++;
  }
 
 n++;
}
}
		else
		if(choice == 3){
			printf("Exit");
			break;
		}
		else
			printf("It's not one of the choices!\n");
			printf("\n");
			printf("\n");
	}while(choice!=3);
	
	getch();
	return 0;
}
