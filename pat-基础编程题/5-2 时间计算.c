#include <stdio.h>

//hour to minut 
int hour_minut(int hours);

//minut to hour 
int minut_hour(int minuts);


int main(void){
//main 
int hours,temp,minuts = 0;
scanf("%d %d", &hours, &temp);  //input 

minuts = temp + hour_minut(hours); //¼ÆËã

hours = minut_hour(minuts);

printf("%d", hours);
return 0;
}


int hour_minut(int hours){
    int minuts;
	minuts = hours/100*60 + hours%100;
	
	return minuts; 
} 

int minut_hour(int minuts){
    int hours;
	hours = (minuts/60)*100 + minuts%60;
	
	return hours; 
} 
