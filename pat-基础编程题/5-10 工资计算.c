/*ĳ��˾Ա���Ĺ��ʼ��㷽�����£�һ���ڹ���ʱ�䲻����40Сʱ������������ʱ��Ƴꣻ
����40Сʱ�Ĺ���ʱ�䲿�֣�����������ʱ�䱨���1.5���Ƴꡣ
Ա��������˾ʱ���Ϊ��ְ������ְ��������˾������5���Ա��Ϊ��ְ����5�����µ�Ϊ��ְ����
��ְ������������Ϊ30Ԫ/Сʱ����ְ������������Ϊ50Ԫ/Сʱ���밴�üƳ귽ʽ����Ա���Ĺ��ʡ�
�����ʽ��

������һ���и���2�����������ֱ�ΪĳԱ����ְ�������ܹ���ʱ�䣬����Կո�ָ���
�����ʽ��

��һ�������Ա������н����ȷ��С�����2λ��*/

#include <stdio.h>

int main(void){

double salary;
int hours,per_money,years;

scanf("%d %d", &years, &hours);

if(years<5&&years>=0) //new or old ?
	per_money = 30;
else
	per_money = 50;

if(hours<=40&&hours>=0) //times ?
	salary = per_money * hours;
else
	salary = (hours - 40) * per_money * 1.5 + 40 * per_money;

	printf("%.2lf",salary);

return 0;
}

