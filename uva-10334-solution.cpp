#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int fib[5005][1005] = {0};

void fibo(){

    int i, j;

    fib[0][0] = 1;
    fib[1][0] = 2;

    for(i = 2; i <= 5003; i++){
        for(j = 0; j < 1003; j++){
            fib[i][j] += fib[i- 2][j] + fib[i - 1][j];

            if(fib[i][j] > 9){
                fib[i][j] -= 10;
                fib[i][j + 1]++;
            }
        }
    }
}
int main(){

    fibo();

    int n, i;

    while(scanf("%d", &n) == 1){

        i = 1003;

        while(fib[n][--i] == 0);

        for(; i >= 0; i--){
            printf("%d", fib[n][i]);
        }

        putchar('\n');
    }
    return 0;
}
