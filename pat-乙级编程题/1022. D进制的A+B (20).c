#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,D;
  scanf("%d%d%d",&a,&b,&D);
  int sum=a+b;
  if(sum==0)            //��caution������0��ʱ��
  {
    printf("0");
    return 0;
  }
  int arr[35];          //����Ҫ��charȻ��memset��ԭʼ��ʲô������ν�����ᱻ���
  int i=0;
  while(sum!=0)
  {
    arr[i]=sum%D;
    sum/=D;
    ++i;
  }
  int j;
  for(j=i-1 ; j>=0 ; --j)
    printf("%d",arr[j]);
  //system("pause");
  return 0;
}
