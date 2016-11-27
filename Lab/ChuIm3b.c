#include<stdio.h>
int main(){
float euros, pesos,answer,exchangerate;

printf("Enter a number in Euros to convert it to Pesos:");
scanf("%f",&euros);
printf("Enter the exchange rate of euro to peso:");
scanf("%f",&exchangerate);

answer=euros*exchangerate;

printf("%f euros is equivalent to %f in pesos.\n",euros,answer);
return 0;
}




//Ask the user to enter an amount in euros and the exchange rate (euro to peso) as well. Display the peso equivalent of the euro input. Notice that some euro amounts are of the form 5.75.
