//I declare, upon my honor, that I made this MP by myself and Hanika.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void weapon(int);
void shield(int);
void mirror(int);
int main(){
    srand((unsigned int)time(NULL)); 

    int phealth1=10,phealth2=10,pmanna1=10,pmanna2=10,weapon1,weapon2,shield1,shield2;
    int choice1=1,choice2=1,attack,UseShield,damage=0,counterD=0,mirror1=0,mirror2=0,flag1=0;
    /* wooden spear-1 silver ax-2 diamond scythe-3 
    wooden shield can repel wooden spear but only 1 pt for silver ax and no repel from diamond scythe
    
    */
    weapon1=rand()%3+1;
    shield1=rand()%3+1;
    weapon2=rand()%3+1;
    shield2=rand()%3+1;
    /*
    weapon1 and weapon2 -> generate the weapons to be used by the players throughout the game
    shield1 and shield2 -> generate the kind of shield to be used by the players throughout the game
    */
   
    do{
    
        printf("\n Player 1");
        
        printf("\n Health : %i \t Manna: %i \n",phealth1,pmanna1);
        weapon(weapon1); //displays the weapon of Player 1
        shield(shield1); //displays the kind of shield of Player 1

        if(pmanna1>=6)
            printf(" Kiss of the Jade Palapa: Available\n");
        else
            printf(" Kiss of the Jade Palapa: Not Available\n");
        //The Kiss of the Jade Palapa can only be available if the player has 6 or more unit points of manna.

        if(mirror2!=1 && mirror1!=1){
            mirror1=rand()%20+1;
        } //randomly generate the Bai-a-Labi's Blink, with 1/20 probability
		    mirror(mirror1); //displays whether the Bai-a-Labi's Blink is available for Player 1 to use or not
        

        printf("\n Player 2");


        printf("\n Health : %i \t Manna: %i \n",phealth2,pmanna2);
        weapon(weapon2); //displays the weapon of Player 2
        shield(shield2); //displays the kind of shield of Player 2

        if(pmanna2>=6)
            printf(" Kiss of the Jade Palapa: Available\n");
        else
            printf(" Kiss of the Jade Palapa: Not Available\n");
        //The Kiss of the Jade Palapa can only be available if the player has 6 or more unit points of manna.

        if(mirror1!=1 && mirror2!=1){
            mirror2=rand()%20+1;
        } //randomly generate the Bai-a-Labi's Blink, with 1/20 probability
        	mirror(mirror2); //displays whether the Bai-a-Labi's Blink is available for Player 2 to use or not
        
        
               
        printf("\n Player 1's turn\n \tChoose your offense.\n\t1.Melee Attack\n\t2.Kiss of the Jade Palapa\n");
        
        if(pmanna1<6){
            do{
                printf("\n You have no manna left. You can only use Melee Attack. Press 1.\n");
                scanf("%i", &attack);
            }while(attack!=1);
              }
        else{
            do{
                printf("\n Melee Attack or Kiss of the Jade Palapa? Press 1 or 2.\n");
                scanf("%i",&attack);           
            }while(attack!=1 && attack!=2);
        }//If Player 1 has less than 6 manna points, he/she can only use Melee Attack.

        if(attack==1){
            printf("\n Player 1 has chosen Melee Attack!\n");
            UseShield = rand()% 3 + 1; //randomly generates whether the other player could use the shield, with 1/3 probability

            if(UseShield==1){
                printf(" Wrong Timing! Player 2 used his shield\n");
                if(shield2 == weapon1){
                    damage = 0;
                    counterD=0;
                }//If the weapon used by Player 1 is of the same kind as the shield used by Player 2, no damage is done.
                else if(shield2 > weapon1){
                    damage =0;
                    counterD = weapon1;
                }
                else if(weapon1 - shield2 == 1){
                    damage= weapon1 - 1;
                    counterD = 0;
                }  
                else{
                    damage = weapon1;
                    counterD =0;
                }    
            }    
            else{
                printf(" Right Timing! No defense was used by Player 2.\n");
                damage = weapon1;
                counterD=0;
            }//Damage is at its maximum if Player 2 uses no shield.
        }
        else if(attack==2){
            printf("\n Player 1 has chosen Kiss of the Jade Palapa.\n");
            pmanna1 -=6;

            if(mirror2==1){
                printf(" Player 2 repelled Player 1's spell using Bai-a-Labi's Blink!\n");
                damage=0;
                counterD=0;
                mirror2=0;                
            }//The spell can only be repelled if Player 2 has the Bai-a-Labi's Blink.
            else{
                printf(" Player 2 was not able to repel Player 1's spell\n ");
                damage=4;
                counterD=0;
            }
        }
        phealth1 -= counterD;
        phealth2 -= damage;

    //printf("%i %i\n",phealth1,pmanna1);
    //printf("%i %i\n",phealth2,pmanna2);
    
        printf("\n Player 2's turn\n \tChoose your offense.\n\t1.Melee Attack\n\t2.Kiss of the Jade Palapa\n");
        attack=0;
        if(pmanna2<6){
            do{
                printf("\n You have no manna left. You can only use Melee Attack. Press 1.\n");
                scanf("%i", &attack);
            }while(attack!=1);
        }
        else{
            do{
                printf("\n Melee Attack or Kiss of the Jade Palapa? Press 1 or 2.\n");
                scanf("%i",&attack);           
            }while(attack!=1 && attack!=2);
        }//If Player 2 has less than 6 manna points, he/she can only use Melee Attack.

        if(attack==1){
            printf("\n Player 2 has chosen Melee Attack!\n");
            UseShield = rand()% 3 + 1; //randomly generates whether the other player could use the shield, with 1/3 probability

            if(UseShield==1){
                printf(" Wrong Timing! Player 1 used his sheild\n");
                if(shield1 == weapon2){
                    damage = 0;
                    counterD=0;
                }//If the weapon used by Player 2 is of the same kind as the shield used by Player 1, no damage is done.
                else if(shield1 > weapon2){
                    damage =0;
                    counterD = weapon2;
                } 
                else if(weapon2 - shield1 == 1){
                    damage = weapon2 - 1;
                    counterD = 0;
                }  
                else{
                    damage = weapon2;
                    counterD = 0;
                }    
            }    
            else{
                printf(" Right Timing! No defense was used by Player 1.\n");
                damage = weapon2;
                counterD =0;
            }//Damage is at its maximum if Player 1 uses no shield.
         }
         else if(attack==2){
            printf("\n Player 2 has chosen Kiss of the Jade Palapa\n");
            pmanna2 -=6;

            if(mirror1==1){
                printf(" Player 1 repelled Player 2's spell using Bai-a-Labi's Blink!\n");
                damage=0;
                counterD=0;
                mirror1=0;                
            }//The spell can only be repelled if Player 1 has the Bai-a-Labi's Blink.
            else{
                printf(" Player 1 was not able to repel Player 2's spell\n ");
                damage=4;
                counterD=0;
            }

        }
        phealth1-=damage;
        phealth2-=counterD;

        pmanna1 += 2;
            if(pmanna1>10)
                pmanna1=10;

        pmanna2 += 2;
            if(pmanna2>10)
                pmanna2=10;
        /*
        pmanna1 and pmanna2 represent the manna points of the two players.
        It regenerates by 2 points for every turn.
        */

    //printf("%i %i\n",phealth1,pmanna1);
    //printf("%i %i\n",phealth2,pmanna2); 
                    
    }while(phealth1>0 && phealth2>0);
  
     return 0;
}


void weapon(int weapon){
    if(weapon==1)
        printf(" Weapon : Wooden Spear\n");
    else if(weapon==2)
        printf(" Weapon : Silver Axe\n");
    else
        printf(" Weapon : Diamond Scythe\n");
}

void shield(int shield){ 
    if(shield==1)
        printf(" Shield : Wooden Shield\n");
    else if(shield==2)
        printf(" Shield : Silver Shield\n");
    else
        printf(" Shield : Diamond Shield\n");
}

void mirror(int mirror){
    
    if(mirror==1)
        printf(" Bai-a-Labi's Blink: Available\n");
       
    else
        printf(" Bai-a-Labi's Blink: Not Available\n");
}
