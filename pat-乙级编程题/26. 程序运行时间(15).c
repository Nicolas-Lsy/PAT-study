#include <stdio.h>

int main(void){
	
	//����
	int c1,c2;
	scanf("%d %d", &c1, &c2);
	
	//(int)((c1-c2)/CLK_TCK + 0.5)
	int second;
	
	second = (c2-c1)%100<50?((c2-c1)/100):((c2-c1)/100+1 );
	//printf("%d\n",second);
	//ʱ��ת�� 
	int hour,minute;
	hour = second / 3600;
	second = second - hour*3600;
	minute = second / 60;
	second = second - minute*60;
	//�����ʾ 
	printf("%d:%d:%d", hour,minute,second);
	return 0;
}

/*
#include<stdio.h>
const int CLK_TCK=100;
int main()
{
int c1,c2,x;
scanf("%d%d",&c1,&c2);
x=c2-c1;
if(x%CLK_TCK>=50)	//������룬���������봦��
x=x/CLK_TCK+1;
else
x=x/100;
printf("%02d:%02d:%02d\n",x/3600,x%3600/60,x%60);	//ʱ����ļ����ʾ
return 0;
}
*/











