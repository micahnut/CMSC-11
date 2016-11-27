#include <stdio.h>

int isP(char);

int main(){
	char ch;
	int p=1;
	//int ans;
	
	scanf("%c",&ch);
	
	p = isP(ch);
	
	if(p==1)
		printf("true");
	else
		printf("false");
		
	return 0;
	
	
}

int isP(char ch){
	if(ch>='33' && ch<='37')
		return 1;
	else
		return 0; 
}
	
