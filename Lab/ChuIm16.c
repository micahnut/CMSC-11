//i declare, upon my honor, that i made this MP by myself
#include <stdio.h>

int main(){
	int i=1, min=1,min2=0,max=1,max2=1,j=1,min3=1,max3=1,ctr=0;
	float jsd[10],jr[10],jf[20],sum=0,ave=0;


	do{	
		do{
			printf("\nEnter the score by Stadium Judge %i\n",min);		
			scanf("%f",&jsd[i]);
			jf[i]=jsd[i];
		}while(jsd[i]<0 || jsd[i]>10);
		i++;
		min++;
	}while(i<11);

	i = 1;
	min = 1;
	while(i<11){
		if(jsd[i] < jsd[min])
			min = i;
		i++;
		
	}

	// if possible duplicates
	while(j<11){
	
		if(jsd[min] == jsd[j])
			printf("\nThe smallest score is %.2f by Stadium judge %i\n", jsd[min],j);
		j++;
	}
	
	i = 1;	
	max = 1;
	while(i<11){
		if(jsd[i] > jsd[max])
			max = i;
		i++;
	}
	
	// if possible duplicates
	j=1;
	while(j<11){
	
		if(jsd[max] == jsd[j])
			printf("\nThe greatest score is %.2f by Stadium judge %i\n", jsd[max],j);
		j++;
	}


//remote judge
	i=1;
	min2=1;
	do{	
		do{
			printf("\n\nEnter the score by Remote Judge %i\n",min2);	
			scanf("%f",&jr[i]);
			jf[i+10]=jr[i];
	     }while(jr[i]<0 || jr[i]>10);
	     	i++;
	     	min2++;
	}while(i<11);

	i = 1;
	min2=1;
	
	while(i<11){
		if(jr[i] < jr[min2])
			min2 = i;
			i++;
	}

	// if possible duplicates
	j=1;
	while(j<11){
	
		if(jr[min2] == jr[j])
			printf("\nThe smallest score is %.2f  by Remote judge %i\n", jr[min2],j);
		j++;
	}


	i = 1;
	max2=1;
	while(i<11){
		if(jr[i] > jr[max2])
			max2 = i;
		i++;
	}
	// if possible duplicates
	j=1;
	while(j<11){
	
		if(jr[max2] == jr[j])
			printf("\nThe greatest score is %.2f  by Remote judge %i\n", jr[max2],j);
		j++;
	}


	i=1;
	do{
	printf("\n%.2f ",jf[i]);
	i++;
	}while(i<21);

	i=1;
	do{
		sum += jf[i];
		i++;
	}while(i<21);
	printf("\n\nsum equal of all scores: %.2f",sum);
	
	//if the same min and same max both group
	if(jsd[min] == jr[min2] && jsd[max]==jr[max2]){
		
		sum-=(jsd[min]*2+jsd[max]*2);
		printf("\nsum equal of scores subtracted of the same max and min: %.2f",sum);
	//if two 2's then minus one 2 then minus the min which is still 2. 
	//if two 5's then minus one 5 then minus the max which is still 5.	
 	}
 	
 	//if same min or max for both group
 	else if(jsd[min] == jr[min2] || jsd[max]==jr[max2]){
 
 	//if same min only
 		if(jsd[min] = jr[min2] && jsd[max] !=jr[max2]){
 	
	 		sum-=(jsd[min]*2);
	 		printf("\nsum equal of scores subtracted with the same min(stadium&remote): %.2f",sum);
		//check for the max of all
		i = 1;	
		max3 = 1;
		while(i<21){
			if(jf[i] > jf[max3])
				max3 = i;
			i++;
		}
	    // if possible duplicates
	    ctr=0;
		j=1;
		while(j<21){
	
		if(jf[max3] == jf[j]){
			printf("\nThe greatest score of all scores is %.2f by the judge %i\n", jf[max3],j);
			ctr++;
		}
		j++;
		}
		//printf("\n%i",ctr);
			
		
		if(ctr>=2){
			sum-=(jf[max3]*2);
			printf("\nsum equal of all scores subtracted by max and min: %.2f",sum);
		}
		else if(ctr==1){
			sum-=jf[max3];
			printf("\nsum equal of all scores subtracted by max and min: %.2f",sum);
		}
  }
 	//if same max only
 		if(jsd[max] = jr[max2] && jsd[min] != jr[min2] ){
 	
	 		sum-=(jr[max2]*2);
	 		printf("\nsum equal of scores subtracted with the same max(stadium&remote): %.2f",sum);
		//check for the min of all
		i = 1;	
		min3 = 1;
		while(i<21){
			if(jf[i] < jf[min3])
				min3 = i;
			i++;
		}
	    // if possible duplicates
	    ctr=0;
		j=1;
		while(j<21){
	
		if(jf[min3] == jf[j]){
			printf("\nThe smallest of all scores is %.2f by the judge %i\n", jf[min3],j);
			ctr++;
			}
		j++;
		}		
		//printf("%i",ctr);
			
		if(ctr>=2){
			sum=sum-(jf[min3]*2);
			printf("\nsum equal of all scores subtracted by max and min: %.2f",sum);
		}
		if(ctr==1){
			sum-=jf[min3];
			printf("\nsum equal of all scores subtracted by max and min: %.2f",sum);
 		}
 	}
 
 }
 	//if not same min and max for both so check the max and min for both then minus 
 	
 		else if(jsd[min] != jr[min2] && jsd[max] !=jr[max2]){
	 		i = 1;	
			min3 = 1;
		while(i<21){
			if(jf[i] < jf[min3])
				max3 = i;
			i++;
			}
		//duplicates
		ctr=0;
		j=1;
		while(j<21){
	
			if(jf[min3] == jf[j]){
				printf("\nThe smallest of all scores is %.2f by the judge %i\n", jf[min3],j);
			ctr++;
			}	
		j++;
		}
		//printf("%i",ctr);
		
		
		if(ctr>=2){
			sum=sum-(jf[min3]*2);
			printf("\nsum equal of all scores subtracted by min: %.2f",sum);
		}
		if(ctr==1){
			sum-=jf[min3];
			printf("\nsum equal of all scores subtracted by min: %.2f",sum);
		}
		
	 
		i = 1;	
		max3 = 1;
		while(i<21){
			if(jf[i] > jf[max3])
				max3 = i;
			i++;
			}
		 // if possible duplicates
	    ctr=0;
		j=1;
		while(j<21){
	
			if(jf[max3] == jf[j]){
				printf("\nThe greatest of all scores is %.2f by the judge %i\n", jf[max3],j);
				ctr++;
			}
			j++;
		}
		//printf("%i",ctr);		
		
		if(ctr>=2){	
			sum=sum-(jf[max3]*2);
			printf("\nsum equal of all scores subtracted by max and min: %.2f",sum);
		}
		if(ctr==1){
			sum-=jf[max3];
			printf("\nsum equal of all scores subtracted by max and min:  %.2f",sum);
		}//printf("\nThe greatest score is %.2f  by the judge %i\n", jf[max3],i);
	 	
	 	
		 }

	ave=sum/20;
	
	printf("\n The average is equals to %.2f", ave);
	return 0;
}
