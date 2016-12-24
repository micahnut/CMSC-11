MP14 (Guessing Game)
Topic: While loop, break, and random numbers
Instructions:
Generate a random number from 1-100. Ask the user to guess this number. Give him/her 5 tries. If in the 5th try he/she isn't able to guess the number, reveal the magic number. If he/she is able to the guess the number within the allotted tries, congratulate the user. Use the "higher/lower" scheme to give clues to the user. Below is a sample file on how to generate random numbers and how to use the break. Study the code and run it so you can use it for this exercise.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand((unsigned int)time(NULL));  //sets the seed of the random() function to the system time
    
    int c = 0, r;

    while(c<5){
        r = rand();    //generates a random number
        printf("%d ",r);
        c++;
    } //this generates 5 different random numbers, but for the MP, generate only 1 number.
    printf("\n");

    while(c>0){
        if(c == 3)
            break;  //observe what the break does to the while
        c--;
    }
    printf("%d ",c);
    return 0;
}