#include <stdio.h>
  int main(){
  float x=0;
  printf("Please enter the observed rainfall(in millimeters) within the past hour:");
  scanf("%f",&x);
 
 if (x<=0)
	printf("Cannot be, it means there was no rainfall at all.\n");
 else{
  	if(x<2.5)
  	printf("There is a Light rainfall happening within the past hour.\n");
  
  	else if(x>=2.5 && x<7.5)
  	printf("There is a Moderate rainfall happening within the past hour.\n");
  

    else if (x>=7.5 && x<15) 
  	printf("There is a HEAVY rainfall happening within the past hour.\n Flooding is possible. You need to Monitor the weather condition.\n");
	
	else if(x>=15 && x<30)
    printf("There is an INTENSE rainfall happening within the past hour.\n The flooding is threatening. You need to be Alert for evacuation.\n");
    else if(x>30)
    printf("There is TORRENTIAL rainfall happening within the past hour.\n There will be a serious flooding expected in low lying areas.\n You need to evacuate immediately.\n");
  }
return 0;
}



