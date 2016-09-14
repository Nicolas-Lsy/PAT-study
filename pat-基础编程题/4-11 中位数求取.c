#include <stdio.h>
#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main()
{
	ElementType A[MAXN];
	int N, i;
	
	scanf("%d", &N);
	for(i=0; i<N; i++)
		scanf("%f", &A[i]);
	printf("%.2f\n", Median(A,N));
	
	return 0;
 } 
 //思路: 先排序再寻找中位数
 //考察知识点：快速排序 （其他排序超时） 
void Swap(ElementType *a, ElementType *b){
    ElementType temp = *a;
    *a = *b;
    *b = temp;
}

ElementType Median3(ElementType A[], int Left, int Right){
    int Center = (Left + Right) / 2;
    if(A[Left]>A[Center])
        Swap( &A[Left], &A[Center] );
    if(A[Left]>A[Right])
        Swap( &A[Left], &A[Right] );
    if(A[Center]>A[Right])
        Swap( &A[Center], &A[Right] );
    Swap( &A[Center], &A[Right-1] );
    return A[Right-1];
}

void QSort(ElementType A[], int Left, int Right){
    if(Left>=Right) return;
    ElementType Pivot = Median3(A, Left, Right);
    int i = Left, j = Right - 1;
    while(1){
        while( A[++i] < Pivot ) { }
        while( A[--j] > Pivot) { }
        if( i<j ) 
            Swap(&A[i], &A[j]);
        else break;
    }
    Swap(&A[i], &A[Right-1]);   
    QSort(A, Left, i-1);
    QSort(A, i+1, Right);
}

ElementType Median( ElementType A[], int N ){
    QSort(A, 0, N-1);
    return A[N/2];
}*/
void Swap(ElementType *a, ElementType *b){
	ElementType temp = *b;
	*b = *a;
	*a = temp;
}
 
ElementType Median3(ElementType A[], int Left, int Right){
	int Center = (Left+Right)/2;
	
	if(A[Left]>A[Center])
		Swap(&A[Left],&A[Center]);
	
	if(A[Left]>A[Right])
		Swap(&A[Left],&A[Right]);
	
	if(A[Center]>A[Right])
		Swap(&A[Center],&A[Right]);
	
	Swap(&A[Center],&A[Right-1]);
	return A[Right-1];
}

void QuickSort(ElementType A[], int Left, int Right){
	if(Left>=Right) return;
	ElementType Pivot = Median3(A,Left,Right);
	int i = Left, j = Right-1;
	while(1){
		while(A[++i]>Pivot){ }
		while(A[--j]>Pivot){ }
		if( i<j )
		Swap(&A[i], &A[j]);
		else break; 
	}
	Swap(&A[i],&A[Right-1]);
	QuickSort(A,Left,i-1);
	QuickSort(A,i+1,Right);
	
}

ElementType Median( ElementType A[], int N ){
    QuickSort(A, 0, N-1);
    return A[N/2];
}

/*  //调用快速排序库函数实现 
int compare (const void *p, const void *q) {
    int x = *(const int *)p;
    int y = *(const int *)q;
    if (x < y) {
        return -1;
    } else if (x > y) {
        return 1;
    }
    return 0;
}
    
ElementType Median ( ElementType A[], int N ) {

    qsort(A, N, sizeof(ElementType), compare);
    
    return A[N/2];
}

*/
 

 
 
