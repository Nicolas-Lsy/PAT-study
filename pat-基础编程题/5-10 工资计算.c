/*某公司员工的工资计算方法如下：一周内工作时间不超过40小时，按正常工作时间计酬；
超出40小时的工作时间部分，按正常工作时间报酬的1.5倍计酬。
员工按进公司时间分为新职工和老职工，进公司不少于5年的员工为老职工，5年以下的为新职工。
新职工的正常工资为30元/小时，老职工的正常工资为50元/小时。请按该计酬方式计算员工的工资。
输入格式：

输入在一行中给出2个正整数，分别为某员工入职年数和周工作时间，其间以空格分隔。
输出格式：

在一行输出该员工的周薪，精确到小数点后2位。*/

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

