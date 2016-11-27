#include<stdio.h>
int main(){
unsigned int length,width,area, perimeter,a,b;
 
printf("Please enter a measurement for the width of a rectangle:");
scanf("%u",&width);

printf("Please enter a measurement for the length of a rectangle:");
scanf("%u",&length);

area=width*length;
a=length*2;
b=width*2;
perimeter=a+b;

printf("The area of the rectangle is %u. The perimeter of the rectangle is %u.\n",area,perimeter);
return 0;
}








//Ask the user to enter a length and width of a rectangle. Compute and display the rectangle's area and perimeter. Area is length x width. Perimeter is 2 x length + 2 x width.
