/*#include <stdio.h>
#include <string.h>
int main(void){
	
	int flag = 0,i = 0,j = 0;
	char num[30];
	
	scanf("%s", num);
	
	while(num[i] != '\0'){
		i++;
	}
	
	int sum = 0, temp = 0, number;
	for(j=0; j<i; j++){
		if(j%2==0){
			number = num[j] - '0';
			sum += number;
		}
		else{

			number = (num[j] - '0') * 2;
			temp = number%10 + number/10;	
			sum += temp;

		}

	}
	flag = 10 - sum%10;
	
	printf("num = %s  ,count =  %d,  sum = %d, flag = %d", num, i, sum, flag);
	
	return 0;
}*/




