//i declare, upon my honor, that i made this MP by myself
#include<stdio.h>


//functions
int largest(int,int,int);
void series(int);
int base(int);

int main(){
//variables
	int choice,x,y,z,ans,n,m;

	//menu
	do{
	
	printf("\t\t\tMenu\n\t1. Largest\n\t2. Series\n\t3. Base 8 to Decimal \n\t4. Exit\n");
		fflush(stdin);
		scanf("%i",&choice);

	//largest
		if(choice == 1)
		{
			x=0;
			y=0;
			z=0;
			
				printf("Enter three numbers:.\n");
				scanf("%i%i%i",&x,&y,&z);

		ans = largest(x,y,z);

		printf("the largest among the three is %i\n",ans);
		}
	//Series
		else 
		if(choice == 2)
		{
			n=0;
			do{

			printf("Enter a positive number.\n");
			scanf("%i",&n);
			}while(n<0);

			series(n);  

		}
	//base8
		else 
		if(choice == 3)
		{
			m=0;
			printf("Please enter a number in base 8\n");
			scanf("%i",m);

		ans = base(m);

		printf("the number in base 10 is %i\n",ans);

		}
		else 
		if(choice==4)
		{
			printf("Exit\n");
			break;
		}
		
		else
			printf("It's not one of the choices!\n");
		
	}while(choice!=4);

	return 0;
	}
	//largest
	int largest(int a,int b,int c){

		if(a>b && a>c)
			return a;
		else if (b>a && b>c)
			return b;
		else if (c>a && c>b)
			return c;

	}
	//series
	void series(int n){
		int ctr,k; //x=4,y=7;

			for(ctr=1; ctr<=n; ctr++){
			    k = (ctr/4);
				if(ctr%4 == 1)
                {
                    printf(" %i", ((2*k)+1)*4);
                }

                else
                if(ctr%4 == 2)
                {
                    printf(" %i", (k+1)*8);
                }

                else
                if(ctr%4 == 3)
                {
                    printf(" %i", ((2*k)+1)*7);
                }

                else
                {
                    printf(" %i", (k)*14);
                }
				/*if(ctr%4 == 1 || ctr%4 == 2){
					printf("%i ",x);
					x=x+4;
				}
				else{
					printf("%i ",y);
					y=y+7;
				}*/

			}
		}


	int base(int a){
	int	rem,base=0,i=0;
		for(i=0; a%10!=0; i++){
			rem = a%10;
			base = base + rem * power(8, i);
			a=a/10;
			
		}

		return base;

	}
int power(int base, int exp)
	{
	    int i, n;

	    if(exp == 0)
        {
            return 1;
        }
        else
	    {
	        n = base;
            for(i = 1; i < exp; i++)
            {
                n = n*base;
            }

            return n;
	    }
	}







/*Objective: The students should be to demonstrate modularity using functions.

Instructions:

Prompt the user with a menu that looks like this:

    Largest
    Series
    Base 8 to Decimal
    Exit

The following are the descriptions for the items (a function for each of the items should be implemented. If you feel the need to create the additional functions, then do so.

    The user should enter 3 numbers. Pass these 3 numbers as arguments in a function that returns the largest among these 3 inputs. Display the largest (the function should not display anything). Sample: 5 7 1, the largest among the 3 is 7.

    Observe the series following series: 4 8 7 14/ 12 16 21 28 /20 24 35 42... Ask the user to enter a number n.  Pass this number to a function that displays the first n elements of the series. If n = 5, then the display is 4 8 7 14 12.

    Ask the user to enter a number in base 8. Pass this number to a function that converts the base 8 number to its decimal equivalent. Error checking must be made since the number input should not contain any digits greater 7.*/
