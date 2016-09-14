#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;
				
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

int Factorial( const int N)
{
	int sum = 1;
	int n = N;
	
	if(n<0 || n>12)
	 return 0;
	else {
		while(n){
			sum *= n;
			n--; 
		}
		return sum; 
	}
	
	 
 } 
 
 
 
 
 
 
 
 
 
 
