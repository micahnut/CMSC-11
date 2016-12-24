#include <stdio.h>
  int main(){
  unsigned int x=0,t=0;
  
  printf("Press 1 for kph or press 2 for mph.\n");
  scanf("%u", &x);

  if (x==1){
	  printf("Please enter a wind speed:"); 
	  scanf("%u", &t);
	  if (t==0)
	  	printf("It is not a tropical disturbance.\n");
	  else if (t<=63)
	   	printf("A cyclone having %i kph is a Tropical Depression.\n",t);
	  else if (t>=64 && t<=118)
	   	printf("A cyclone having %i kph is a Tropical Storm.\n",t);
	  else if (t>118)
	   	printf("A cyclone having %i kph is a Typhoon.\n",t);
   }
  if(x==2){
	  printf("Please enter a wind speed:"); 
	  scanf("%u", &t);
	  if (t==0)
	   printf("It is not a tropical disturbance.\n");
	  else if (t<=25)
	   printf("A cyclone having %i mph is a Tropical Depression.\n",t);
	  else if (t>=25 && t<=75)
	   printf("A cyclone having %i mph is a Tropical Storm.\n",t);
	  else if (t>75)
	   printf("A cyclone having %i mph is a Typhoon.\n",t);
   }

return 0;
}
