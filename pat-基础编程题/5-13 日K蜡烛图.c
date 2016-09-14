#include <stdio.h>

int main(void){
	double open=1,close=1,high=1,low=1;
	int flag = 0;

do{
	scanf("%lf %lf %lf %lf", &open,&high,&low,&close);}while(!(open>0&&high>0&&low>0&&close>0));
	
	if(close < open) 
		printf("BW-Solid");
	if(close > open)
		printf("R-Hollow");
	if(close == open)
		printf("R-Cross");
		
	if(low < open && low < close && ++flag)
		printf(" with Lower Shadow");
	if(high > open && high > close )
		printf(" %s Upper Shadow",flag? "and":"with");

	
	return 0;
} 
