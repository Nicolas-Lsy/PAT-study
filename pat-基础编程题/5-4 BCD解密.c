
#include <stdio.h>

int main(void){
	//input
	int BCD,number=0;
	do{
	scanf("%d",&number);}while(!(number>=0&&number<=153));

	
	//¼ÆËã
	BCD = (number/16)*10 + number%16;  //ox12 
	
	
	
	//output 
	printf("%d", BCD);
	
	return 0;
}

