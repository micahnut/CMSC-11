#include <stdio.h>
int main(){
int a,b,c,d,x,y,z,answer;

printf("Please enter the first number:");
scanf("%i",&a);
printf("Please enter the second number:");
scanf("%i",&b);
printf("Please enter the third number:");
scanf("%i",&c);
printf("Please enter the fourth number:");
scanf("%i",&d);

printf("%i/%i-%i/%i=\n",a,b,c,d);

x=b*d;
y=a*d;
z=b*c;
answer=y-z;

printf("%i/%i\n",answer,x);

return 0;
}








//Ask the user to enter 4 numbers. Consider the first two as one fraction and the second two as another. Display in fraction form when the second fraction is subtracted from the first. Your answer is not necessarily in the lowest terms and should be in fraction form.
