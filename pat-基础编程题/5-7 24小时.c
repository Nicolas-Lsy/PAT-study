#include <stdio.h>

int main(void){
	int hours,minuts,flag=0;
	
	scanf("%d:%d",&hours,&minuts);
	if(minuts>=0&&minuts<60) 
	flag = 1;
	
	if(hours==0&&flag){
		printf("%d:%d AM",hours,minuts);
	}
	else if(hours==12&&flag){
		printf("%d:%d PM",hours,minuts);
	}
	else if(hours<12&&hours>0&&flag){
		printf("%d:%d AM",hours,minuts);
	}
	else if(hours!=0&&flag){
		hours = hours-12;
		printf("%d:%d PM",hours,minuts);
	}
	
	
	return 0;
}
