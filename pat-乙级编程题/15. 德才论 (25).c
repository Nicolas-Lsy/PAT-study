#include <stdio.h>

int main(void){
	int L,H,N;
	scanf("%d", &N);
	int i,num[N],d[N],c[N],sum[N];
	for(i=0; i<N; i++){
		scanf("%d %d %d", &num[i], &d[i], &c[i]);
		sum[i] = d[i]+c[i];
	}
	//һ������
	//��������
	//��������
	int compare()
	qsort();
	return 0; 
	//����ʹ�� 
}


/*#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Student
{
  char mID[10];
  int de,cai,sum;
  int tag;        //�����ǵڼ���:1�²Ŷ����飬2��ʤ�ţ�3
}STU[100010];

bool cmp(Student a,Student b)    //��warning������дSTU
{
  if(a.tag!=b.tag)
    return a.tag<b.tag;
  else if(a.sum!=b.sum)
    return a.sum>b.sum;
  else if(a.de!=b.de)
    return a.de>b.de;
  else
    return strcmp(a.mID,b.mID)<0;  //��caution��С�ں���������
}

int main() 
{
  int n,L,H;
  scanf("%d%d%d",&n,&L,&H);
  int m=n;              //m��¼��Ч����
  for(int i=0 ; i<n ; ++i)
  {
    scanf("%s %d %d",&STU[i].mID,&STU[i].de,&STU[i].cai);
    STU[i].sum=STU[i].cai+STU[i].de;
    if(STU[i].de < L || STU[i].cai < L)        //��̭����
    {
      STU[i].tag=5;
      --m;
    }
    else if(STU[i].de >=H && STU[i].cai >=H )
      STU[i].tag=1;
    else if(STU[i].de >=H && STU[i].cai < H )
      STU[i].tag=2;
    else if(STU[i].de < H && STU[i].cai < H && STU[i].de >= STU[i].cai)
      STU[i].tag=3;
    else
      STU[i].tag=4;
  }
  sort(STU,STU+n,cmp);
  printf("%d\n",m);
  for(int i=0 ; i<m ; ++i)
    printf("%s %d %d\n",STU[i].mID,STU[i].de,STU[i].cai);
  return 0;
}*/
