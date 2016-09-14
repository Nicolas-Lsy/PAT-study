

#include <stdio.h>

int main(void)
{
	int n = 1;
	double e, s = 1,m=1;
	scanf("%lf", &e);
	do {
		s += m = m*n / (2 * n + 1);
		++n;
	} while (m > e);
	printf("%lf", 2*s);
	return 0;
}

#include <stdio.h>

int main(void){

double sum = 1, temp = 1,e;
int n = 1;

scanf("%lf", &e);

do{
	temp *= 1.0 * n / (2 * n + 1);
	sum += temp;
	++n;
}while(temp>e);

printf("%lf", 2*sum);

return 0;
}
