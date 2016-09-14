#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
	int N;
	
	scanf("%d", &N);
	Print_Factorial(N);
	return 0;
}
/*本题要求实现一个打印非负整数阶乘的函数。
其中N是用户传入的参数，其值不超过1000。
如果N是非负整数，则该函数必须在一行中打印出N!的值，
否则打印“Invalid input”。*/

void Print_Factorial ( const int N ){


	if(N>0&&N<=12){
		int i;
		long int sum=1;
		for(i=2; i<=12; i++){
			sum *= i;
		}
		printf("%ld", sum);
	}
	else if(N==0)
	{
	printf("1\n");
	}
	else if(N>12&&N<=1000){
		int num[3000] = {1},n,temp,i,j,k=1;
			for(i=2; i<=N; i++){
				
				for(j=0; j<k; j++){	
				temp = i*num[j] + n;
				num[j] = temp%10;
				n = temp/10;
			}
			while(n!=0){  //用k来保留位数  j被每次循环时还原了 
				num[k] = n%10;
				k++;
				n /= 10;
			}
			}
			for(j=k-1; j>=0; j--){
				printf("%d", num[j]);
			}
	}else	
	printf("Invalid input\n");
	
}
/*
void Print_Factorial(const int N)
{   

	if(N>0&&N<=12)
	{
		int i;
		long int sum=1;
		for(i=1; i<=N; i++){
			sum *= i;
		}
		printf("%ld", sum);
	}
    else if(N==0)
    {
    	printf("1\n");
	}
	else if(N>12&&N<=1000)
    {
    	int n=0,i=2,j=0,k=1,temp,num[1000]={0}; //进位 
        num[0] = 1;
    	
    	for(i=2; i<=N;i++){ //阶乘过程 

    		for(j=0;j<k;j++){ //获得每一位相乘结果 
    			temp = i*num[j] + n;
    			num[j]=temp%10;//m每一位进行更新 
    			n = temp/10;
			}
			while(n!=0){//所有位数都赋值 
				num[k] = n%10;
				k++;
				n = n /10;
			}
		}
        for(i=k-1;i>=0;i--)
        { 
            printf("%d",num[i]);
        }
	}
	else
    	printf("Invalid input\n"); 
}






