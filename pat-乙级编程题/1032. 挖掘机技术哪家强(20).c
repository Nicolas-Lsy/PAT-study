#include <stdio.h>  
#include<stdlib.h>  
typedef struct {  
  int schooln;  
  int gra;  
} stu;  
typedef struct {  
  int num=0;  
  int sum=0;  
}school;  
int cmp(const void *a, const void *b)  
{  
  school *pa;  
  school *pb;  
  pa = (school *)a;  
  pb = (school *)b;  
  return pa->sum - pb->sum;  
}  
  
  
int main()  
{  
  //school schoola[100000];  
  //stu stua[100000];  
  int n,max=0,i;  
  stu *stua=NULL;  
  school *schoola=NULL;  
  scanf("%d", &n);  
  stua = (stu *)malloc(sizeof(stu)*n);  
  for (i = 0; i < n; i++)  
  {  
    scanf("%d%d", &stua[i].schooln, &stua[i].gra);  
    //schoola[stua[i].schooln-1].sum += stua[i].gra;  
    //schoola[stua[i].schooln-1].num = stua[i].schooln;  
    if (stua[i].schooln-1>max)  
      max = stua[i].schooln-1;  
  }  
  schoola = (school *)malloc(sizeof(school)*(max + 1));  
  for (i = 0; i < max+1; i++)  
  {  
    schoola[i].sum = 0;  
  }  
  for (i = 0; i < n; i++)  
  {  
    schoola[stua[i].schooln - 1].sum += stua[i].gra;  
    schoola[stua[i].schooln - 1].num = stua[i].schooln;  
  }  
  qsort(schoola, max + 1, sizeof(school), cmp);  
  printf("%d %d", schoola[max].num, schoola[max].sum);  
  free(schoola);  
  free(stua);  
  
  
    return 0;  
}  
