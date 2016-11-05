#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int fib[5004][1005]= {0};

void fibo(){

    int i, j;

    fib[0][0]=0;
    fib[1][0]=1;
    for (int i=2; i<=5002; i++){
        for (int j=0; j< 1003; j++){
            fib[i][j] += fib[i-2][j]+fib[i-1][j];
            if (fib[i][j]>9){
                fib[i][j] -= 10;
                fib[i][j + 1]++;
            }
        }
    }
}

int main(){

    fibo();
    int n, i;
    while (scanf("%d",&n) == 1){
        i = 1003;

        while (fib[n][--i] == 0);
        for (; i>=0; i--)
            printf("%d",fib[n][i]);
        printf("\n");
    }

    return 0;
}
