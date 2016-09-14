#include<stdio.h>  
#include<algorithm>  #include<stdio.h>  
#include<algorithm>  
using namespace std;  
 struct N{  
        double num;  
        double total;  
        double price;  
        }data[1100];  
          
bool cmp(N a,N b){  
     return a.price>b.price;  
     }  
int main(){  
    int n,m;  
    scanf("%d%d",&n,&m);  
      
    for(int i=0;i<n;i++)  
     scanf("%lf",&data[i].num);  
       
    for(int i=0;i<n;i++)  
    scanf("%lf",&data[i].total);  
    for(int i=0;i<n;i++)  
      data[i].price=data[i].total/data[i].num;   
    sort(data,data+n,cmp);  
    double x=0;  
    int j=0;  
    while(m>0&&j<n){  
       if(m>data[j].num){  
            m-=data[j].num;  
            x+=data[j].total;                 
                  }  
       else{  
            
            x+=data[j].price*m;  
              m-=data[j].num;  
            }  
          j++;   
                 
               }  
     
     printf("%.2lf\n",x);    
      
    return 0;  
    }  
using namespace std;  
 struct N{  
        double num;  
        double total;  
        double price;  
        }data[1100];  
          
bool cmp(N a,N b){  
     return a.price>b.price;  
     }  
int main(){  
    int n,m;  
    scanf("%d%d",&n,&m);  
      
    for(int i=0;i<n;i++)  
     scanf("%lf",&data[i].num);  
       
    for(int i=0;i<n;i++)  
    scanf("%lf",&data[i].total);  
    for(int i=0;i<n;i++)  
      data[i].price=data[i].total/data[i].num;   
    sort(data,data+n,cmp);  
    double x=0;  
    int j=0;  
    while(m>0&&j<n){  
       if(m>data[j].num){  
            m-=data[j].num;  
            x+=data[j].total;                 
                  }  
       else{  
            
            x+=data[j].price*m;  
              m-=data[j].num;  
            }  
          j++;   
                 
               }  
     
     printf("%.2lf\n",x);    
      
    return 0;  
    }  
