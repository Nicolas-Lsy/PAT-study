/*������A��B��C����С��״��ͬ��������һ������������������ͬ��Ҫ���ҳ������һ������
�����ʽ��

������һ���и���3����������˳���Ӧ��A��B��C��������
�����ʽ��

��һ�������Ψһ���Ǹ���һ������
����������

1 1 2
���������

C

#include <stdio.h>

int main(void){
	int a,b,c;
	
	scanf("%d %d %d", &a,&b,&c);
	if(a-b==0)
		printf("C");
	else if(a-c==0)
		printf("B");
	else if(b-c==0)
		printf("A");
	
	return 0;
}*/

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<time.h>

#define M 4

int N = 2048; int END = 0; int SCORE = 0;

void draw(int Arr[M][M]);

void play(int Arr[M][M]);

char playValue();

void randLocate(int Arr[M][M]);

int gameover(int Arr[M][M]);

int main(){

printf("\n\n\n\n\n\n\n\n\n\n\n                     ��ӭ����2048���ڴ�ȷ�����������Ϸ�Ѷ�\n");
printf("                     PS:�����ȫ������ʾ�С�ȫ����Ϣ����ע�롱�������벻Ҫ����\n\n\n"); 
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                      ��ȷ����ϣ����ͨ�ط���(����2048��4096)\n");
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                      ��Ȼ�������ѡ����Ѷȵ�32or64or128...\n");
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                               �Ҳ��������Ĩr(�s���t)�q \n"); 
system("pause");
system("CLS");
printf("\n\n\n\n\n\n\n\n\n\n\n                                    �������Ѷ���ֵ:");



scanf("%d",&N);
system("CLS");
printf("\n\n\n\n\n\n\n\n\n                                      ��ѡ�����Ѷ�Ϊ%d",N);
printf("\n\n\n                                      ���ڿ�ʼ��Ϸ��(��?`�ء�?)  \n"); 
system("pause");
system("CLS");

int Arr[M][M]={0};

draw(Arr);

while(1){

play(Arr);
randLocate(Arr);
system("CLS");
draw(Arr);

int flag = gameover(Arr);
if(flag==1){
    printf("\n\n                          ��ȡ��ʤ��\n");
    while(1){
    }
    return 0;

}

if(END==1){
    printf("\n\n                          ������\n");
    while(1){
    }
    return 0;
}


}


return 0;
}

void draw(int Arr[M][M]){

int i=0;
printf("��Ŀǰ����Ϊ%d\n",SCORE);
for(int k=0;k<8;k++){
    if(k%2==0){
        printf("��������������������������");
    }else{            
        printf("| ");
        for(int j=0;j<4;j++){
            printf("%4d",Arr[i][j]);
            printf(" |");
        }
        i++;                        
    }

    printf("\n");
}    
printf("��������������������������\n");
}

char playValue(){ printf("�������(w,a,s,d):"); char x='\0';
while(x=='\0'){ //�������ж�������wasd���������� x=getch(); if((x!='w')&&(x!='a')&&(x!='s')&&(x!='d')){ x='\0'; printf("\n����������,�������:"); }
}
printf("%c\n",x);
return x;
}

void play(int Arr[M][M]){

int v = playValue();

if(v == 'd'){                //������Ϊd��������ʱ 

    for(int x=0;x<M;x++){
        for(int z=0;z<M;z++){        //    ÿ������������ 
            for(int y=M-2;y>=0;){

                if(Arr[x][y+1]==0){
                    Arr[x][y+1]=Arr[x][y];
                    Arr[x][y]=0;
                    y--;
                }else if(Arr[x][y+1]==Arr[x][y]){

                        Arr[x][y+1] *= 2;
                        Arr[x][y] = 0;
                        y--;
                    }else if(Arr[x][y+1]!=Arr[x][y]){
                        y--;
                    }

            }
        }
    }

}

if(v == 'a'){

    for(int x=0;x<M;x++){
        for(int z=0;z<M;z++){        //    ÿ������������ 
            for(int y=1;y<M;){

                if(Arr[x][y-1]==0){
                    Arr[x][y-1]=Arr[x][y];
                    Arr[x][y]=0;
                    y++;
                }else if(Arr[x][y-1]==Arr[x][y]){

                        Arr[x][y-1] *= 2;
                        Arr[x][y] = 0;
                        y++;
                    }else if(Arr[x][y-1]!=Arr[x][y]){
                        y++;
                    }

            }
        }
    }

}


if(v == 'w'){

    for(int y=0;y<M;y++){
        for(int z=0;z<M;z++){
            for(int x=1;x<M;){

                if(Arr[x-1][y]==0){
                    Arr[x-1][y]=Arr[x][y];
                    Arr[x][y]=0;
                    x++;
                }else if(Arr[x-1][y]==Arr[x][y]){

                        Arr[x-1][y] *= 2;
                        Arr[x][y] = 0;
                        x++;
                    }else if(Arr[x-1][y]!=Arr[x][y]){
                        x++;
                    }

            }
        }
    }

}

if(v == 's'){

    for(int y=0;y<M;y++){
        for(int z=0;z<M;z++){
            for(int x=M-2;x>=0;){

                if(Arr[x+1][y]==0){
                    Arr[x+1][y]=Arr[x][y];
                    Arr[x][y]=0;
                    x--;
                }else if(Arr[x+1][y]==Arr[x][y]){

                        Arr[x+1][y] *= 2;
                        Arr[x][y] = 0;
                        x--;
                    }else if(Arr[x+1][y]!=Arr[x][y]){
                        x--;
                    }

            }
        }
    }

}

printf("�ƶ����");
}

void randLocate(int Arr[M][M]){ int flag = 0; for(int i=0;i<M;i++){ for(int j=0;j<M;j++){ if(Arr[i][j]==0){

            flag++;                
        }

    }
}
if(flag==0){
    END = 1;
    return;        
}

srand(time(NULL));    
int t = rand()%flag+1;

int temp = 0;
for(int i=0;i<M;i++){
    for(int j=0;j<M;j++){
        if(Arr[i][j]==0){

            temp++;                
        }
        if(temp==t){
            printf("\n���������λ��%d  %d\n",i,j); 

            Arr[i][j] = 2;
            SCORE += 2;
            return;

        }

    }
}    
}

int gameover(int Arr[M][M]){

for(int i=0;i<M;i++){
    for(int j=0;j<M;j++){

        if(Arr[i][j]==N){
            return 1;                
        }
    }        
}

return 0;
}
