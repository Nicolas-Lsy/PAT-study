#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int A[10];
  fill(A,A+10,0);
  for(int i=0 ; i<10 ;++i)
  {
    scanf("%d",&A[i]);
  }
  //���һ����С��0��
  for(int i=1 ; i<10 ; ++i)
  {
    if(A[i]>0)
    {
      printf("%d",i);
      --A[i];
      break;
    }
  }
  //����С����ʼ���
  for(int i=0 ; i<10 ; ++i)
  {
    while(A[i]>0)      //�������������
    {
      printf("%d",i);
      --A[i];
    }
  }
  return 0;
}
