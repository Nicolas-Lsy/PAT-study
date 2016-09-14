#include <stdio.h>

int main(void){
	
	int a;
	char c;
	double f1,f2;
	
	scanf("%lf %d %c %lf", &f1,&a,&c,&f2);
	
	printf("%c %d %.2lf %.2lf", c,a,f1,f2);
	
	return 0;
}
