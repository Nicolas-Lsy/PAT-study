/*����ÿ�ζ���һ����3λ����Ȼ�������λ��������֡�ע�⣺����������ֺ��н�β��0ʱ�������Ӧ����ǰ����0��

��������700�����Ӧ����7��
�����ʽ��

ÿ��������һ��3λ����������
�����ʽ��

�����λ���������*/

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
