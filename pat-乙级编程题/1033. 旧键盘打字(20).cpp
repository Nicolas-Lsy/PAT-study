#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int harsh[300];
char str1[100066],str2[100066];

int main()
{
  fill(harsh,harsh+300,true);    //初始化全都是好的
  gets(str1);
  gets(str2);
  int len1=strlen(str1),len2=strlen(str2);
  bool shift=0;            //记录shift有没有坏掉
  for(int i=0 ; i<len1 ; ++i)
  {  
    if(str1[i]>='A' && str1[i]<='Z')
    {  
      str1[i]+=32;        //改为小写字母的ASC    或者写成str1[i]-'A'+'a'
    }
    harsh[str1[i]]=false;      //此按键失效
  }
  for(int i=0 ; i<len2 ; ++i)
  {
    if(str2[i]>='A' && str2[i]<='Z')  //大写字母的时候要看shift是否正常  【skill】上档键用‘+’表示
    {
      int tmp=str2[i]-'A'+'a';  //改为小写字母的ASC
      if(harsh[tmp]==true && harsh['+']==true)    //按键正常且shift也正常
        printf("%c",str2[i]);  //输出该大写字母
    }
    else if(harsh[str2[i]]==true)
      printf("%c",str2[i]);
  }
  return 0;
}
