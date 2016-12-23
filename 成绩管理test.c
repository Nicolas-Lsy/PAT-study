#include <stdio.h> 
#include <string.h>
#include <stdlib.h> 

#define SWN                3   //课程数
#define NAMELEN            10  //姓名长度
#define CODELEN            10  //学号长度
#define FNAMELEN           80  //文件名长度 
#define BUFLEN             80  //中间变量 （缓冲区长度） 



/**********初始化结构的定义*****************/
	//结构体的构建  （学生记录，很明显这是一个含有多个数据项的数据结构） 用结构体来实现 
	char schoolwork[SWN][NAMELEN+1]={"Chinese","English","Math"};  //这里定义课程的二维数组 保存课程 
	
	//学生记录  （用于前n项功能实现）
	struct record
	{
		char name[NAMELEN+1];
		char code[CODELEN+1];
		int marks[SWN];
		int total;
	}stu;
	
   
/*****************链表结构体定义************************/   
   /*结构体定义 node*/
struct node{
	char name[NAMELEN + 1];
	char code[CODELEN + 1];
	int marks[SWN];
	int total;
	struct node *next;
}*head;     //初始化一个头节点



   
    /*全局变量*/
    //定义一下变量来保存值 ： n科总成绩，文件名指针，文件名   
	int total[SWN];        //多科成绩，用数组
	FILE *stfpt;           //指针指向文件 类型FILE
	char stuf[FNAMELEN];   //文件名是字符嘛

/******************功能函数实现********************/

/*写入记录到文件*/
void writerecord(FILE *fpt, struct record *rpt)    //参数输入：   文件指针，记录指针
{	
	printf("开始写入记录到文件。。。\n");
	
	/*文件内容写入，从记录中获取*/
	int i;
	fprintf(fpt,"%s\n", rpt->name);
	fprintf(fpt,"%s\n", rpt->code);
	for(i=0; i<SWN; i++)
	{
		fprintf(fpt,"%d\n",rpt->marks[i]);
		}
	
	printf("写入文件成功！\n");
	}
/*显示信息*/
void displaystu(struct record *rpt)   //参数就是一条学生记录
{
	printf("开始显示信息。。。\n");
	
	int i;
	printf("Name:  %s\n",rpt->name);
	printf("ID:   %s\n", rpt->code);
	printf("Makrs:  \n");
	for(i=0;i<SWN; i++)
	{
		printf("%d\n", rpt->marks[i]);

	}
		printf("Total : %4d\n", rpt->total);
	
	printf("显示信息成功 ！\n");

}



/*文件内容读取，从文件中获取*/
int readrecord(FILE *fpt, struct record *rpt)
{
	printf("开始从文件获取内容。。。");	
	
	char buf[BUFLEN];
	int i;
	
	if(fscanf(fpt,"%s",buf) != 1) 
		return 0;
	//复制数据： 从中间变量 到 节点中name    参数：最后是长度
	strncpy(rpt->name,buf,NAMELEN); /*中间值已经在上面if中获取*/
	
	//同理复制 学号
	fscanf(fpt,"%s",buf);
	strncpy(rpt->code,buf,CODELEN);
	
	
	//课程有3门， 循环赋值 
	for(i=0; i<SWN; i++)
		fscanf(fpt,"%d",&rpt->marks[i]);
	//累加求和
	for(rpt->total=0,i=0; i<SWN; i++)
		rpt->total += rpt->marks[i];
	
	printf("文件内容读取成功 ！\n");
	return 1; 
	
	
	}
	
/*计算总成绩*/
	int totalmark(char *fname)
	{	
		//判断
		FILE *fp;
		struct record s;
		int count,i;
		if((fp=fopen(fname,"r"))==NULL)
		{
			printf("Can't open file.");
			return 0;
		
		}
		//读文件
		/*初始化分数*/
		for(i=0; i<SWN; i++)
		{
			total[i] = 0;
		}
		
		count = 0;
		while((readrecord(fp,&s))!=0)  //0表示没读取到内容
		{
			//计算
			for(i=0; i<SWN; i++)
			{
				total[i] += s.marks[i];
				//所有人各科成绩和
			}	
			count++;
		}
		fclose(fp);
		return count;  //返回了学生个数
	}
	
	

/*按名字从文件中查询学生信息，读取到记录中*/
int retrievebyn(char *fname, char *key)
{
	
	FILE *fp;    //文件指针，用于操作
	int c;
	struct record s;   //一个学生记录变量，用于保存读取的内容
	
	/*判断文件存在否*/
	if((fp = fopen(fname,"r"))==NULL)
	{
		printf("Can't open file.");
		return 0;
	}	
	c = 0;  //标记 判断
	while(readrecord(fp,&s)!=0)   //这里又涉及到一个函数，readrecord 需要实现
	{	
		//对于读取到的内容处理
		if(strcmp(s.name,key)==0)  //相等
		{
			displaystu(&s);   //新的函数需要实现，功能是显示查到的学生记录  
			c++;
		}
	}
	fclose(fp);
	if(c==0)
		printf("NO this name !");
	return 1;
	
}


/* 按照学号查找学生 */
int retrievebyc(char *fname, char *key)
{
	FILE *fp;    //文件指针，用于操作
	int c;
	struct record s;   //一个学生记录变量，用于保存读取的内容
	
	/*判断文件存在否*/
	if((fp = fopen(fname,"r"))==NULL)
	{
		printf("Can't open file.");
		return 0;
	}	
	c = 0;  //标记 判断
	while(readrecord(fp,&s)!=0)   //这里又涉及到一个函数，readrecord 需要实现
	{	
		//对于读取到的内容处理
		if(strcmp(s.code,key)==0)  //相等
		{
			displaystu(&s);   //新的函数需要实现，功能是显示查到的学生记录  
			c++;
			break;
		}
	}
	fclose(fp);
	if(c==0)
		printf("NO this code !");
	return 1;
}



/*显示所有信息*/
void liststu(char *fname)
{
	//存在判断 
	FILE *fp;
	struct record s;
	if((fp=fopen(fname,"r"))==NULL)
	{
		printf("Can't open file .");
		return ;
	}
	
	
	//读取显示
	while((readrecord(fp,&s))!= 0)
	{
		//循环
		displaystu(&s);
		printf("Input Enter continue...\n");
		while(getchar() != '\n');
	}
	fclose(fp);
	return ;
}


/*链表生成函数 (返回指针)*/
struct node *makelist(char *fname)
{
	FILE *fp;
	
	struct node *h,*v,*p,*u;  
	
	
	//判断存在
	if((fp=fopen(fname,"r")) == NULL)
		{
			printf("Can't open file .");
			return NULL;
		}
	
	h = NULL;                                       //h是头指针， 开始指向NULL
	p = (struct node*)malloc(sizeof(struct node));   //(数据类型)malloc（内存大小）
	
	/*注意： 要构建的是有序链表*/
	while(readrecord(fp, (struct record *)p) != 0)   //读取内容保存到p指向的内存
	{	
		//开始一条记录的 “操作” 及 “连接”
		v = h;        //v先指向头  
		while(v&&p->total<=v->total)  // 当 v是不是NULL  且 p量值 小于等于 v量值  
		{
			/*遍历过程  判断顺序 ，符合就u指向当前节点
			 * v指向下一节点，即链表往后移动，两个指针前后关系
			 * 符合这种状态往后连接，最后能够保证有序
			 * 直到不符合： 跳出循环*/
			u = v;
			v = v->next;
		}
		//由于不符合，一下开始插入
		
		//处理开始时刻
		if(v==h)
			h = p;   //让h指向p， 含有数据节点
		else
			u->next = p;  //其他时刻： 
		p->next = v;
		/*以上完成了插入到合适位置
		 * 且p重新申请空间*/
		
		p = (struct node *)malloc(sizeof(struct node));
		
		/*下次循环，v又指向头，然后扫描，找到合适位置，插入记录，如此反复*/
	}
	free(p);          //最后会多余一块空间 ，释放掉
	fclose(fp); 
	return h;         //返回头指针
	
	}

/*链表单个节点显示函数*/
void displaylist(struct node *h)   //参数带入一个链表
{
	while(h != NULL)
	{
		displaystu((struct record *)h);
		printf("\n   Press Enter to continue...\n");
		while(getchar()!='\n');
		h = h->next;
	
	}
	
	return ;
}



 /*************************主程序运行***************************/  
int main(void)
    {
		
    	int i,j,n;              //i，j用于计数，n为条件数值
    	char c;                 //代表指令
    	char buf[BUFLEN];       //中间值（缓存区）
    	FILE *fp;               //定义一个文件指针 (用于操作)
    	struct record s;        //定义一个学生记录变量
    	system("cls");               //清除屏幕
		
		/*得到文件*/
		printf("Input Your Filename : \n");
		scanf("%s", stuf);      //文件名赋值到stuf  ，之前就定义的指针变量
		
		/*文件操作----------------文件非空，含有内容时--------*/
		if((fp=fopen(stuf,"r"))==NULL)   
		{
			printf("文件是空\n");
			
			printf("The file doesn't exit, do you want to creat it ? Y/N"); 
			getchar();          //接收缓存区留下的字符
			c = getchar();
			
			
			/*--------没有原文件--开始创建-------*/
			
			if(c == 'Y' || c == 'y')
			{	
				printf("开始创建文件。。。\n");
			
				//创建文件，  设置初始值
				fp = fopen(stuf, "w");
				printf("Please input the record number you want to write to the file:  ");
				scanf("%d", &n);
				
				
				//循环，完成每条记录的 输入  与  写入
				for(i = 0; i < n; i++)
				{	
					printf("记录的输入写入 \n");
					
					/*赋值到变量中*/
					printf("Name ? ");
					scanf("%s",s.name);
					printf("ID ? ");
					scanf("%s", s.code);
					
					for(j = 0; j < SWN; j++)
					{
						printf("%s ? ", schoolwork[j]);
						scanf("%d", &s.marks[j]);
					}
					
					/*变量中的值，写入文件*/
					writerecord(fp, &s);
					
					printf("信息写入文件成功 ！\n");
				}
				//fclose(fp);      //关闭这个文件记录
				//printf("关闭了文件\n");
			} 
			//文件创建结束，关闭文件
			
		}
		
		/*否则，  文件为空----------*/			
		fclose(fp);
		printf("估计问题是这里，又关闭文件\n");
		getchar();     //接收一个 之前缓存区的字符    ： 这样的操作是为了给后面一个初始化。 防止后面指令输入受到干扰
		
		/*屏幕显示*/
		puts("Now you can input your command to manage the records.");
		puts("n : search record by student's name.");   //暂时只实现一个功能
		puts("t : get total marks.");   //再加一个功能 
		puts("c : search record by student's code.");  //继续加一个类似功能
		puts("l : list all records.");
		puts("s : sort and list all records.");
		puts("q : Quit");
		while(1)
		{
			puts("Please input command : ");  //自带‘\n’
			scanf(" %s", &c);         //要注意，这里的%s前面 一个空格，  scanf的特点遇到空格，算一次接收，所有这种方法把缓存区清空
			
			/*退出功能*/
			if(c == 'q' || c == 'Q')
			{
				puts("\n Thank for you using .");
				break;
			}
			
			/*其他功能*/
			switch(c)
			{
				case 'n': 
				case 'N': 
					printf("Please input student's name you want to search: ");
					scanf("%s",buf);
					retrievebyn(stuf,buf);
					break;
				case 't':
				case 'T':
					if((n=totalmark(stuf)) == 0)
					{
						printf("Error !\n");
						break;
						}
					printf("\n");
					for(i=0; i<SWN; i++)
						printf("%s mark is :  %d\n", schoolwork[i], total[i]);   //total 是全局变量
						break;
				case 'm':
				case 'M':
					if((n=totalmark(stuf))==0)
						{
							printf("Error !");
							break;
						}
					printf("\n");
					for(i=0; i<SWN; i++)
					{
						printf("%s average is :  %f\n", schoolwork[i], (float)total[i]/n); 
						break;
					}
				case 'c':
				case 'C':
					printf("Please input student's code you want to search: ");
					scanf("%s",buf);
					retrievebyc(stuf,buf);
					break;
				
				case 'l':
				case 'L':
					liststu(stuf);
					break;
					
				case 's':
				case 'S':
					if((head=makelist(stuf))!= NULL)
						displaylist(head);
					break;
				
				default:
					break;
			}	
		}
		
		return 0;
	}
	

	
