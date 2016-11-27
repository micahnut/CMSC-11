//i declare, upon my honor, that i made this MPA myself
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int dice1, dice2, sumDice;
	srand((unsigned int)time(NULL));
	
    int money1, money2, money3, banker, players, bet1, bet2, bet3, guess1, guess2, guess3,choice1=1, choice2=1, choice3=1;
    
    /*money of players initialized to 20000
    and banker to 100000*/
    
    money1 = money2 = money3 = 20000;
    banker = 100000;
    players = 3;
    
    	printf("Let's play a game.\n");
    
    do{
    //for rolling of the dice
		dice1=rand()%6+1;
    	dice2=rand()%6+1;
    	sumDice = dice1 + dice2;
    
		bet1=0;
    	bet2=0;
    	bet3=0;
    	
		do {
			if(players<=1){
				printf("You can't play alone.Game Over!\n");
				return 0;
		}
		//if player1 chooses 0 so this part won't come out.
		
		if(money1 > 100 && choice1==1){
			do{
				printf("\n\n PLAYER 1");
				printf("\n Enter your guess: ");
				scanf("%d", &guess1);
				if(guess1 > 12 || guess1<2) {
	            	    printf("\n Invalid input!");
				/*not greater than 12 since a die has a total of 6. 
				and cannot be 1 since there are 2 dices.
				*/
				}
			}while(guess1 > 12 || guess1<2);
			
			do{
				 printf("\n Enter your bet: ");
				 scanf("%d", &bet1);
				 if(bet1 > money1-100) {
	    	            printf("\n You dont have that much money!");
	                }
			}while(bet1 > money1-100);
			
		}
		
		if(money2 > 100 && choice2==1) {
			do{
				printf("\n\n PLAYER 2");
				printf("\n Enter your guess: ");
				scanf("%d", &guess2);
				if(guess2 > 12 || guess2<2) {
				printf("\n Invalid input!");	
				}	
			}while(guess2 > 12 || guess2<2);
			
			do{
				printf("\n Enter your bet: ");
				scanf("%d", &bet2);
				if(bet2 > money2-100){
				printf("\n You dont have that much money!");	
				}
				
			}while(bet2 > money2-100);
			
		}
		
		if(money3 > 100 && choice3==1) {
			do{
				printf("\n\n PLAYER 3");
				printf("\n Enter your guess: ");
				scanf("%d", &guess3);
				if(guess3 > 12 || guess3 <2) {
				printf("\n Invalid input!");	
				}	
			}while(guess3 > 12 || guess3 <2);
			
			do{
				printf("\n Enter your bet: ");
				scanf("%d", &bet3);
				if(bet3 > money3-100){
				printf("\n You dont have that much money!");	
				}
			}while(bet3 > money3-100);
			
		}
		
			if((bet1 + bet2 + bet3) > banker) {
	    	    printf(" All must re-enter bets!");
	        }
    	}while((bet1 + bet2 + bet3) > banker);
    	
    	if(choice1==1){
		/* if guess is 7 or 11, the money he gets will be double.*/
    	if(guess1 == sumDice && guess1 == 7) {
    	    printf("\n Player 1 is correct!");
    	    money1 += (bet1*2);
    	    banker -= (bet1*2);
    	}else if(guess1 == sumDice && guess1==11){
    		printf("\n Player 1 is correct!");
    	    money1 += (bet1*2);
    	    banker -= (bet1*2);
		}
		else if(guess1 == sumDice) {
    	    printf("\n Player 1 is correct!");
    	    money1 += bet1;
        	banker -= bet1;
    	}else {
            printf("\n Player 1 you're wrong");
    		money1 -= bet1;
    		banker += bet1;
    	}
    }
		if(choice2==1){
		
		if(guess2 == sumDice && guess2 == 7) {
    	    printf("\n Player 2 is correct!");
    	    money2 += (bet2*2);
    	    banker -= (bet2*2);
    	}else if(guess2==sumDice && guess2==11){
    		printf("\n Player 2 is correct!");
    	    money2 += (bet2*2);
    	    banker -= (bet2*2);
		}
    	
        else if(guess2 == sumDice) {
    	    printf("\n Player 2 is correct!");
    	    money2 += bet2;
        	banker -= bet2;
        }else {
            printf("\n Player 2 you're wrong");
    		money2 -= bet2;
    		banker += bet2;
    	}
    }
		if(choice3==1){
		if(guess3 == sumDice && guess3 == 7) {
    	    printf("\n Player 3 is correct!");
    	    money3 += (bet3*2);
    	    banker -= (bet3*2);
    	}else if(guess3==sumDice && guess3==11){
    		printf("\n Player 3 is correct!");
    	    money3 += (bet3*2);
    	    banker -= (bet3*2);
		}
        else if(guess3 == sumDice){
    	    printf("\n Player 3 is correct!");
    	    money3 += bet3;
    	    banker -= bet3;
        }else {
            printf("\n Player 3 you're wrong");
    		money3 -= bet3;
    		banker += bet3;
    	}
   }	
        //for players to know they are not cheated
   		printf("\n The sum of the dice is %d. \n",sumDice);
   		
   		//for players to choose if they still want to continue playing the game
		if(choice1==1)
		 printf("\n\n Player 1,your current balance is now %i.\n",money1);
    	if(choice2==1) 
		 printf("\n Player 2,your current balance is now %i.\n",money2);
    	if(choice3==1) 
		 printf("\n Player 3,your current balance is now %i.\n",money3);
    	 
		 printf("\n The banker's current balance is now %i.\n",banker);
    	
    	if(choice1==1){
		
		//fflush(stdin) for it to clear the initial input
    	do{
    		printf("\n\n Player 1, do you still want to play? 1 for yes, 0 for no.\n");
    		 fflush(stdin);
    		scanf("%d",&choice1);
    	}while(choice1!=1 && choice1!=0);
    	if (choice1==0)
    	 players--;
    }
		if(choice2==1){

    	do{
    		printf("\n\n Player 2, do you still want to play? 1 for yes, 0 for no.\n");
    		 fflush(stdin);
			scanf("%d",&choice2);
    	}while(choice2!=1 && choice2!=0);
    	if (choice2==0)
    	 players--;
	}	
		if(choice3==1){
		do{
    		printf("\n\n Player 3, do you still want to play? 1 for yes, 0 for no.\n");
    		 fflush(stdin);
			scanf("%d",&choice3);
    	}while(choice3!=1 && choice3!=0);
    	if (choice3==0)
    	 players--;
    }
 	//not equal to 1 or not equal to 0 is because what if the user enters numbers other than 1 and 0   		
    	
    }while(banker > 10000 && players>1); 
    
	printf("\n\n GAME OVER");
    
    
    getch();
    return 0;
}
