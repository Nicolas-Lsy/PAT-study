#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,maxA,maxB;
  maxA=maxB=-1;
  int A[3]={0},B[3]={0};        //0,1,2λ�÷ֱ��ʤ����ƽ�֣�ʧ��..�������
  int HARSH1[3]={0},HARSH2[3]={0};  //0������1���ӣ�2������
  scanf("%d",&n);
  int t = 0;
  for(t=0 ; t<n ; ++t)
  {
    getchar();            //���ն���Ŀո񣬱�֤���������
    char a,b;
    scanf("%c %c",&a,&b);
    if(a==b)
    {
      ++A[1];
      ++B[1];
    }
    else
    {              //C�������ӡ���J������������B��������
      if(a=='C' && b=='J')
      {
        ++A[0];
        ++B[2];
        HARSH1[1]+=1;
      }
      if(a=='J' && b=='B')
      {
        ++A[0];
        ++B[2];
        HARSH1[2]+=1;
      }
      if(a=='B' && b=='C')
      {
        ++A[0];
        ++B[2];
        HARSH1[0]+=1;
      }
      if(a=='C' && b=='B')
      {
        ++A[2];
        ++B[0];
        HARSH2[0]+=1;
      }
      if(a=='B' && b=='J')
      {
        ++A[2];
        ++B[0];
        HARSH2[2]+=1;
      }
      if(a=='J' && b=='C')
      {
        ++A[2];
        ++B[0];
        HARSH2[1]+=1;
      }
    }
  }
  char p1,p2;
  int i = 0;
  for(i=0 ; i<3 ; ++i)
    if(HARSH1[i]>maxA)
    {
      maxA=HARSH1[i];
      if(i==0)
        p1='B';
      else if(i==1)
        p1='C';
      else
        p1='J';
    }
    int j;
  for(j=0 ; j<3 ; ++j)
    if(HARSH2[j]>maxB)
    {
      maxB=HARSH2[j];
      if(j==0)
        p2='B';
      else if(j==1)
        p2='C';
      else
        p2='J';
    }
  printf("%d %d %d\n",A[0],A[1],A[2]);
  printf("%d %d %d\n",B[0],B[1],B[2]);
  printf("%c %c\n",p1,p2);
  //system("pause");
  return 0;
}
