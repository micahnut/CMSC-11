#include <stdio.h>

int main(){
int num;
int cm;
int m;
int km;
int a;
int b;

printf("Please Enter a cm measurement.");
scanf("%i",&num);

km=(num)/100000;
a=num%100000;
m=(a/100);
b=a%100;
cm=b;


printf("%i centimeters is equivalent to %i kilometers and %i meters and %i centimeters.",num,km,m,b);

return 0;

}
