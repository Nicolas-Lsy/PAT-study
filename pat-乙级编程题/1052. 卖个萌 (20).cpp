#include<iostream>  
#include<cstring>  
using namespace std;  
  
int flag=0;  
void search(int num,string s,char tmp[],int& p){  
    int count=0;  
    for(int j=0;j<s.length();j++){  
        if(s[j]=='['){  
            count++;  
        }  
        if(count==num){  
            flag=1;  
            for(int k=j+1;s[k]!=']';k++){  
                tmp[p++]=s[k];   
            }  
            break;  
        }  
    }  
}  
int main(){  
    string a[3];  
//  a[0]="[¨r][¨q][o][~\\][/~]  [<][>]";  
//  a[1]=" [¨s][¨t][^][-][=][>][<][@][¡Ñ]";  
//  a[2]="[§¥][¨Œ][_][¦Å][^]";   
  
    for(int i=0;i<3;i++){  
        //cin>>a[i];  
        getline(cin,a[i]);  
        //cin.get();  
    }  
    int n;  
    cin>>n;  
    for(int i=0;i<n;i++){  
        int lh,le,m,re,rh;  
        cin>>lh>>le>>m>>re>>rh;  
        char tmp[50];  
        int p=0;  
        //left hand  
        search(lh,a[0],tmp,p);  
        if(flag){  
            tmp[p++]='(';  
            //left eye  
            flag=0;  
            search(le,a[1],tmp,p);  
            if(flag){  
                flag=0;  
                //mouth  
                search(m,a[2],tmp,p);  
                if(flag){  
                    flag=0;  
                    //right eye  
                    search(re,a[1],tmp,p);  
                    if(flag){  
                        tmp[p++]=')';  
                        flag=0;  
                        //right hand  
                        search(rh,a[0],tmp,p);  
                        if(flag){  
                            tmp[p]='\0';  
                            cout<<tmp<<endl;  
                        }else{  
                            cout<<"Are you kidding me? @\\/@"<<endl;  
                        }  
                    }else{  
                        cout<<"Are you kidding me? @\\/@"<<endl;  
                    }   
                }else{  
                    cout<<"Are you kidding me? @\\/@"<<endl;  
                }  
            }else{  
                cout<<"Are you kidding me? @\\/@"<<endl;  
            }   
        }else{  
            cout<<"Are you kidding me? @\\/@"<<endl;  
        }  
    }  
    return 0;  
}   
