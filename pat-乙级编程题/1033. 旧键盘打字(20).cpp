#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int harsh[300];
char str1[100066],str2[100066];

int main()
{
  fill(harsh,harsh+300,true);    //��ʼ��ȫ���Ǻõ�
  gets(str1);
  gets(str2);
  int len1=strlen(str1),len2=strlen(str2);
  bool shift=0;            //��¼shift��û�л���
  for(int i=0 ; i<len1 ; ++i)
  {  
    if(str1[i]>='A' && str1[i]<='Z')
    {  
      str1[i]+=32;        //��ΪСд��ĸ��ASC    ����д��str1[i]-'A'+'a'
    }
    harsh[str1[i]]=false;      //�˰���ʧЧ
  }
  for(int i=0 ; i<len2 ; ++i)
  {
    if(str2[i]>='A' && str2[i]<='Z')  //��д��ĸ��ʱ��Ҫ��shift�Ƿ�����  ��skill���ϵ����á�+����ʾ
    {
      int tmp=str2[i]-'A'+'a';  //��ΪСд��ĸ��ASC
      if(harsh[tmp]==true && harsh['+']==true)    //����������shiftҲ����
        printf("%c",str2[i]);  //����ô�д��ĸ
    }
    else if(harsh[str2[i]]==true)
      printf("%c",str2[i]);
  }
  return 0;
}
