//cpp

#include<stdio.h>
#include<string.h>

bool HARSH[256]={false};      //标记字符，初始化都未输出过

int main()
{
  char str1[100],str2[100],tmp[100];
  gets(str1);
  gets(str2);
  int len1=strlen(str1),len2=strlen(str2);
  int i,j;
  char c1,c2;                  //暂存第一第二行某字符
  for(i=0 ; i<len1 ; ++i)
  {
    for(j=0 ; j<len2 ;++j)
    {

      c1=str1[i],c2=str2[j];
      if(c1>='a' && c1<='z')
        c1-=32;              //【skill】小写转为大写
      if(c2>='a' && c2<='z')
        c2-=32;              //【skill】小写转为大写
      if(c1==c2)
        break;
    }
    if(j==len2 && HARSH[c1]==false)      //j==len2表示c1这个字符在c2中没有；false代表c1这个字符额米有输出过
    {
      printf("%c",c1);
      HARSH[c1]=true;
    }
  }
  return 0;
}
