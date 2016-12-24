#include<stdio.h>
	
	int length(char[]);
	int verifyIfH(char[]);
	int verifyIfB(char[]);
	int HtoD(char[]);	
	int BtoDecimal(char[]);

	int main(){
	char in1[50],in2[32];
	int choice,decimal;
	
		do{
		printf("\t\t\tMenu\n\t1. Hexadecimal to Decimal\n\t2. Binary to Decimal\n\t3. Exit\n");
		scanf("%i",&choice);

	if(choice==1){
		
		do{
			printf("Please enter Hexadecimal number to convert into decimal:");
			scanf("%s",in1);
			
		}while(!(verifyIfH(in1)));

		decimal=HtoDecimal(in1);
		
		printf("%i\n\n",decimal);
    }

	else if(choice==2){
		do{
			printf("Please enter a Binary number to convert into decimal:");
			scanf("%s",in2);
		}while(!(verifyIfB(in2))); 
		
		decimal=BtoDecimal(in2);
		printf("%i\n\n",decimal);
	}

	else if(choice==3){
		printf("Exit\n");
		break;	
	}
	
	else
		printf("Not one of the choices!\n");
	
	}while(choice!=3);
	
	return 0;
	}
	
    int length(char st[]){
	int i=0;
	for(;st[i]!='\0';i++);
	return i;		
	}

	int verifyIfH(char st[]){
		int i=0, flag = 1, len;
		len = length(st);
		for(;i<len;i++){
		if(!(st[i]>='0' && st[i]<='9' || st[i]>='a' && st[i]<='f' || st[i]>='A' && st[i]<='F')){
			flag=0;
			break;
		}
		}
		return flag;
	}
	
	int verifyIfB(char st[]){
		int i=0,flag=1,len;
		len = length(st);
		for(;i<len;i++){
		if(!(st[i]>='0' && st[i]<='1')){
			flag=0;
			break;
 	 	}
      }
		return flag;
	}	
	
	int HtoDecimal(char st[]){		
	int i=length(st)-1,dec=0,pwr=1;
	while(i>=0){
		if(st[i]>= 'a' && st[i]<= 'f')
			dec = dec + pwr*(st[i]-87);
		else if(st[i]>='A' && st[i]<='F')
			dec = dec + pwr*(st[i]-55);
		else
			dec = dec + pwr*(st[i]-'0');
		i--;
		pwr*=16; 
		
		
	}
	return dec;
	}
	
	int BtoDecimal(char st[]){
	int i=length(st)-1,dec=0,pwr=1;
	while(i>=0){
		dec = dec + pwr*(st[i]-'0');
		i--;
		pwr*=2; 
	}
	return dec;
	}
	

//negative sya if 32 digits



//if uppercase -55

//if lower -87


/*Topic: Strings

Prompt the user with the following menu:

    Hexadecimal to Decimal
    Binary to Decimal
    Exit

All the inputs in all the items must be string inputs and the outputs must be of integer type. For item 2, assume that the binary input is in a 32-bit system that can represent both positive and negative integers. For item 1, the user may use both the uppercase and lowercase letters. 

Recall that each character is just a number from 0-255. Use the knowledge that the characters from '0' - '9' are just numbers from 48 - 57. This means that converting the character '5' to its integer equivalent is a simple subtraction, i.e. '5' - 48 which gives you 5 because '5' is 53 and 53 - 48 is 5. The same can be applied with the letters from 'A' - 'F' and 'a' - 'f'. What are you going to subtract from 'A' which is 65 to give you 10 (since A in hexadecimal is 10)?

Note: Erroneous/Invalid inputs must be properly handled.*/
