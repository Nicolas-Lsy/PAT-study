#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int N, D;
double E;

void solve()
{
    int ansA = 0, ansB = 0;

    for(int i = 0; i < N; i ++){
        int K, n = 0;

        cin >> K;
        for(int j = 0; j < K; j ++){
            double e;
            cin >> e;
            if(e < E)
                n ++;
        }

        if(2*n > K){
            if(K > D)
                ansB ++;
            else
                ansA ++;
        }
    }

    printf("%.1lf%% %.1lf%%\n", 100.0 * ansA / N, 100.0 * ansB / N);
}

int main()
{
    cin >> N >> E >> D;
    solve();
    return 0;
}
