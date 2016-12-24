#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand((unsigned int)time(NULL));  //sets the seed of the random() function to the system time
    
    int x,c=5, r;
    
    r = rand()%100+1;
	
	do{
		printf("Guess the number:");
		scanf("%i",&x);

		if(x==r){
			printf("Congratulations you have guessed the number!\n");
       		c=0;
	}
		if(x<r && c>=2)
			printf("The number is higher than what you guessed.\n");
        
        if(x>r && c>=2)
			printf("The number is lower than what you guessed.\n");
		c--;

	}while(c!=0 && x!=r);
		
		if(c==0)
			printf("Sorry, you didn't guess the number.The number was %d.You lose!!!!\n",r);
    return 0;
}
