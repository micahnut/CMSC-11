//i declare, upon my honor, that i made this MP by myself
#include<stdio.h>

int main(){
	
	char name1[50],name2[50],str[100],substr[30]; //string1 & substring;
	int count1,count2,points=0,a,b,sum=0,choice;
	int i=0,j=0,ctr=0,k,check=1;
	do{
		printf("\t\t\tMenu\n\t1. Flames\n\t2. Genes\n\t3. Exit\n");
		fflush(stdin);
		scanf("%d",&choice);

		if(choice == 1){
			i=0;
			j=0;
			ctr=0;
			count1=0;
			count2=0;
			points=0;
			a=0;
			b=0;
			sum=0;

		//do{
			printf("Enter the name of the first person:\n");
			fflush(stdin);
			scanf("%[^\n]s",name1);
		//}while(!(name1>='a' && name1<='z') || (name1>='A' && name1<='Z'));

		//do{
			printf("Enter the name of the second person:\n");
			fflush(stdin);
			scanf("%[^\n]s",name2);
		//}while(!(name2>='a' && name2<='z') || !(name2>='A' && name2<='Z'));
	
	for(i=0,ctr=0;name1[i]!='\0';i++) { //count length of name1
		if(name1[i]!=' ')
			ctr++;
	}
	count1=ctr;

	//printf("%i\n",count1);
	
	for(j=0,ctr=0;name2[j]!='\0';j++){ //count length of name2
	
		if(name2[j]!=' ')
		  ctr++;
	}
	count2=ctr;

	//printf("%i\n",count2);
	
	
	for(i=0;i<count1;i++)
	{
			
	for(j=0;j<count2;j++) 
		{ 
			if(name1[i]==name2[j]) { 	//if current letter in name1 is found in name2
			//points++;
			//arr[]=name[i];
			//if()
			for(a=0;a<count1;a++){		//if found, the current letter will search duplicates in name1
				if(name1[i]==name1[a])
					points++;
					
			}
			for(b=0;b<count2;b++){		//if found, the current letter will search duplicates in name2
				if(name1[i]==name2[b])
					points++;
					
			}
		  }
		} 

	}	

	printf("%i\n",points);
	
	sum=points;
	
	if(sum>6){
		do
		{
			sum=sum-6;
		
		}while(sum>6);
	}
		if(sum==0 || sum<0)
			printf("You have no compatibility\n");
		else if(sum==1)
			printf("You'll end up as Friends\n");
		else if(sum==2)
			printf("You'll end up as Lovers\n");
		else if(sum==3)
			printf("You'll end up as just Acceptance\n");
		else if(sum==4)
			printf("You'll end up having Marriage\n");
		else if(sum==5)
			printf("You'll end up having an Engagement\n");
		else if(sum==6)
			printf("You'll end up as Sweethearts\n");
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


//no checking of input to be only letters for flames
