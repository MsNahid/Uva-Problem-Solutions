#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;



int main(){

    long long int i, multi, N, M;

    while(scanf("%lld %lld", &N, &M) == 2){
        if(N == 0){
            printf("1\n");

        }else{
            multi = 1;
            for(i = N - M + 1; i <= N; i++){
                multi *= i;
                while(multi % 10 == 0) multi /= 10;

                multi %= 100000000000;
        }
             printf("%d\n", multi % 10);
        }

    }

    return 0;
}
