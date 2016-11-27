//i declare, upon my honor, that i made this MP by myself
#include <stdio.h>

int main(){
	//variables
	//len=length
	//temp for reverse of string
	
	int i,choice,ctr,j,palindrome=1,len;
	char in[100],temp;
	

	
	do{
		printf("\t\t\tMenu\n\t1. Palindrome\n\t2. String Reversal\n\t3. Count Words\n\t4. Exit\n");
		fflush(stdin);
		scanf("%d",&choice);
	
		if(choice == 1){
	//reset if ever the user chooses number 1 again
			i=0;
			ctr=0;
			j=0;
			printf("Enter a string.\n");
			fflush(stdin);
			scanf("%s",&in);
		
		for(i=0,ctr=0; in[i]!='\0'; i++){
		}
		for(--i,j=0;i>=0;i--,j++){
			//check letters if are the same
			//if not, at the middle , it will break immediately
			printf("%c %c",in[i],in[j]);
			if(in[i] != in[j]){
			palindrome=0;
			printf("\nThe word is not a palindrome\n");
			break;
			}
		}
		
		//printf("\n%i",palindrome);
		if(palindrome==1)
		printf("\nThe word is a palindrome\n");
		}

       	else if(choice == 2){
       	//reset cause what if the user chooses number 2 again	
			ctr=0;
       		i=0;
       		j=0;
       		len=0;
       		temp=0;
			printf("Enter a string:\n");
			fflush(stdin);
			scanf("%[^\n]s", &in);
			
			//for counting the length
		for(i=0,ctr=0; in[i]!='\0'; i++){
		}
		//printf("%i\n",i);
		len=i;
		
		j=len-1;
		i=0;
		
		while(i<j){
		temp=in[j];
		in[j]=in[i];
		in[i]=temp;
		i++;
		j--;
		}
		
		printf("\nThe reverse of the string is %s.\n\n",in);
		}
	 
		else if(choice == 3){
			ctr=0;
			i=0;
		printf("Enter a string\n");
			fflush(stdin);
			scanf("%[^\n]s",&in);
			
			for(i=0; in[i]!='\0'; i++){
		//check if it is not a white space and it is not the end of the word
				if(in[i]!=' ' && in[i+1]!='\0')	{
				ctr++;	
				while(in[i]!=' ' && in[i+1]!='\0')
					i++;
			}
		}
	
	printf("\nThe number of word/s is/are : %i\n",ctr);
		}
		else if(choice==4){
			printf("Exit\n");
			break;
		}
		
		else
			printf("It's not one of the choices!\n");
	}while(choice!=4);
	
	return 0;
}

/*Item 1 simply asks the user to enter a string and determines whether the string is a palindrome or not. A string is said to be a palindrome when read backwards, produces the same string. Samples: yehey, anna, thedevillivedon, racecar, etc.

Item 2 will also ask the user to enter a string. This time, it has to reverse the contents of the string. In doing so, the use of a temporary or extra string (or any form of temporary or extra array) is prohibited. Sample: if the string is "hello", then the string should be successfully reversed as "olleh". Simply printing the string backwards, i.e. printing the string from the last character down to the first character of the string does NOT reverse the string. Make sure that after the routine on reversing the string, printing it using printf("%s\n",st); - assuming that the string is st - should display the string in reverse.

same as

Item 3 will ask the user to enter a string as well. It should be able to display the count or the number of words found in the string. Assume that words are separated by a space. And we define a word as a sequence of one or more characters (space not included). Sample: "hello world" has 2 words. "hello      from      the             other side" has 5 words. Notice that simply counting the spaces present in the string will not work.

NOTE: For this exercise, you are not allowed to use any helper function from any librabry for the manipulation of the string. Also notice that when you enter a number for the choice in the menu, then ask the user to enter a string, the program "skips" the input. To solve this, use the fflush after asking the user's choice. This only happens when you ask the user to enter any numerical data followed by string data.

scanf("%d", &choice);

fflush(stdin);

or simply use scanf(" %[^\n]s",&str); to flush the new line character. If that wasn't clear, place a space prior to %.

To get an entire line from the user (including spaces) use scanf("%[^\n]s",str); */
