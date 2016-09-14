#include <stdio.h>

struct student{
	char name[11];
	char num[11];
	int grade;
	};

int main(void){
	//确定N 个学生 
	int N;
	scanf("%d", &N);
	struct student students[N];

	
	//输入  姓名 学号（字符） 成绩 
	int i = 0;
	
	//比较成绩 
	int index_MAX = 0, index_MIN = 0;
	int MIN = 100,MAX = 0;
	for(i=0; i<N; i++){
		scanf("%s %s %d",students[i].name,students[i].num,&students[i].grade);
		
		if(students[i].grade > MAX){
			MAX = students[i].grade;
			index_MAX = i;
		}
		if(students[i].grade < MIN){
			MIN = students[i].grade;
			index_MIN = i;
		}	
	}
	//输出  成绩最高，成绩最低  学生姓名+学号
	printf("%s %s\n", students[index_MAX].name,students[index_MAX].num);
	printf("%s %s\n", students[index_MIN].name,students[index_MIN].num);
	
	return 0;
	
} 



 
