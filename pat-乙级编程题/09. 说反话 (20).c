/*#include <stdio.h>

int main(void){
	char words[80][80],n;
	int i = 0,j = 0;
	while((n=getchar())!= '\n'){
		if(n != ' '){
			words[i][j++] = n;
		}else{
			i++;
			j = 0;
		}
		
	}
	for(; i>=0; i--){
		printf("%s", words[i]);
		if(i!=0)
			printf(" ");
	}
	
	return 0;
	
}*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char in[90];
  gets(in);
  char save[90][90];
  memset(save,0,sizeof(save));    //��warning��memsetһ�£��������0���Ų���һֱ������������������������̡�
  int len=strlen(in);
  int x=0,y=0,i;
  for(i=0 ; i<len ; ++i)
  {
    if(in[i]!=' ')          //�����ĸ���룬ֱ�����ֿո�
      save[x][y++]=in[i];
    else
    {
      ++x;            //���ֿո񣬿�ʼ����һ�����ʣ�x+1��y����
      y=0;
    }
  }
  for(; x>=0 ; --x)
  {
    printf("%s",save[x]);
    if(x!=0)
      printf(" ");
  }
  //system("pause");
  return 0;
}



















