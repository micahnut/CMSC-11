//i declare, upon my honor, that i made this MP by myself
#include<stdio.h>

void dispflames(int,char[],char[],int);//A function for displaying flames
int countflames (char[], char[],int);//A function for counting the letters

int main(){
	
	char name1[50],name2[50],str[100],substr[30]; //string1 & substring;
	int count1,count2,points=0,a,b,sum=0,choice;
	int i=0,j=0,ctr=0,k,check=1,fin=0;
	
	do{
		printf("\t\t\tMenu\n\t1. Flames\n\t2. Genes\n\t3. Exit\n");
		fflush(stdin);
		scanf("%d",&choice);

		if(choice == 1){
			i=0;
			ctr=0;
			a=0;

		
			printf("Enter the name of the first person:\n");
			fflush(stdin);
			scanf("%[^\n]s",name1);
		

		
			printf("Enter the name of the second person:\n");
			fflush(stdin);
			scanf("%[^\n]s",name2);
		
	
	ctr=countflames(name1, name2, fin);
	
	 a=a+ctr;//Gets the counter of the first flames
        if (a!=0){
            ctr=countflames(name2, name1, fin);
            a=a+ctr;//Adds the count of the flames to the second
            fin=1;
            dispflames(a,name1, name2,fin);//To display the future flames of both
        }
        
}
	else if(choice ==2){
			i=0;
			ctr=0;
			count1=0;
			count2=0;
			k=0;
			j=0;
			check=1;
			ctr=0;

			printf("Enter a human gene sequence(ex. GTACTATTATA):");
			fflush(stdin);
			scanf("%s",&str);
	
		for(i=0,ctr=0;str[i]!='\0';i++) { //count length of name1
			//if(name1[i]!=' ')
			ctr++;
		}
		count1=ctr;
	
	do{
		printf("Enter a sequence a shorter sequence of the human gene:");
		fflush(stdin);
		scanf("%s",&substr);

		for(i=0,ctr=0;substr[i]!='\0';i++) { //count length of name1
			//if(name1[i]!=' ')
				ctr++; 
		}    
		count2=ctr;
		if(count2>count1){
			printf("Substring cannot be longer than the first string. Please enter a shorter substring.\n");
		}
	}while(count2>count1);
	
	printf("the shorter string is found at index ");
		ctr=0;
		for(i=0;str[i]!='\0';i++){  //for first string
			j=0, k=i+1;      
			if(str[i]==substr[j]){  //if first index 0f second string is found in the first string
				j++;                //since what needs to be checked is second letter of the second string
				for(;substr[j]!='\0' && str[k] == substr[j]; k++,j++){ //k=i+i to check if the next letter of i matches second letter of string 2.
				}
				if(substr[j]=='\0'){
					printf("%d, ", i);
					ctr++;
					//printf(" the shorter string is found at index %d\n",i);
					check=0;
				}
			}
		}
	
		if(check==0)
			printf(". It is found %d time/s.\n",ctr);
		if(check==1)
			printf("... It is not found in the string.\n");		
	
		
		
	/*if (flag == 1)
        printf("SEARCH SUCCESSFUL!");
    else
        printf("SEARCH UNSUCCESSFUL!");
*/

		}
		else if(choice == 3){
			printf("Exit\n");
			break;
		}
		else
			printf("It's not one of the choices!\n");
		
	}while(choice!=3);

return 0;	
}

void dispflames(int ctr, char fname[], char sname[], int fin){
        if (ctr>0){//This checks the flames which part it is going to display
            if (fin==1)//changes to future tense for the total part
                printf("\n %s is going to", fname);
            else
                printf("\n %s wants to",fname);
            if (ctr>6)
                ctr=ctr%6;
            if(ctr==1)
                printf(" be friends with %s\n", sname);
            else if(ctr==2)
                printf(" be lovers with %s\n", sname);
            else if(ctr==3)
                printf(" have acceptance from %s\n", sname);
            else if(ctr==4)
                printf(" be married with %s\n", sname);
            else if(ctr==5)
                printf(" be engaged with %s\n", sname);
            else if(ctr==0 || ctr==6)
                printf("  be sweethearts with %s\n", sname);
        }
}
int countflames(char fname[], char sname[], int fin){//counts the number of same letters
    int ctr=0,a,si,fi;
    char temp[30]; 
    strcpy(temp,fname);//Copies the original string into a temporary string so that the temporary string will be altered
    for (fi=0; temp[fi]!='\0';fi++){//Sees the first name if there is any repition within itself and then changes that to zero so that there wont be repitions in counting.
        for (a=0; temp[a]!='\0';a++){
            if (a==fi)
            break;
            else if (temp[a]==temp[fi])
            temp[fi]='0';
            }
    }
    
    for (fi=0; temp[fi]!='\0';fi++){//For every letter in the second string it compares to the 1st string and counts if they are the same
        for(si=0; sname[si]!='\0';si++){
            if (temp[fi]==' ')//skips counting if there is a space
                break;
            if(sname[si]==temp[fi])
                ctr++;
            }
    }
    
    if (ctr==0){//This displays if they have no letter in common
        printf("\nThe two have no chemistry with each other and are not meant to be.\n");
        return ctr;
    }
    dispflames(ctr,fname,sname, fin);
    return ctr;//returns the number of characters they have in common to be merged for the final display
}

