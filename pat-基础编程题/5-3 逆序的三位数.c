/*程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。

比如输入700，输出应该是7。
输入格式：

每个测试是一个3位的正整数。
输出格式：

输出按位逆序的数。*/

#include <stdio.h>

int main(void){
	int count,number=1;
	int num[3];

	 scanf("%d",&number);
	 if(number<1000&&number>0)
	 for(count=0; count<3; count++){
	 	num[count]=number%10;
	 	number/=10;
	 }

		if(num[0]==0&&num[1]!=0)
		printf("%d%d",num[1],num[2]);
		
		else if(num[0]==0&&num[1]==0)
		printf("%d",num[2]);
		
		else if(num[0]==0&&num[1]==0&&num[2]==0)
		printf("0");
		else
		printf("%d%d%d",num[0],num[1],num[2]);

}

/*#include <stdio.h>

int main(void)
{
  int a;
int n;

scanf("%d" ,&a);
while(a%10==0){a=a/10;}
while(a){
  n=a%10;
printf("%d", n);
  a=a/10;
}
return 0;
}*/
