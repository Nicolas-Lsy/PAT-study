int Count_Digit ( const int N, const int D )
{   
int n=N,count = 0;

if(D>=0&&D<=9){
    if(n< 0) n=-n;
if(n==0)
{
if(D==0)
return 1;
else
return 0;

}
    while(n){ 
         if(n%10==D) count++;
         n=n/10;
}

return count;
}

}


/*int Count_Digit ( const int N, const int D )
{
int n=N,count=0;
if(D>=0&&D<=9&&N<=2147483647)
{
if(n<0) n=-n;
if(n==0)
{
if(D==0)
return 1;
else
return 0;

}
while(n)
{
if(n%10==D)
 count++;

n=n/10;
}
}
return count;
}*/

