#include <iostream>
#include <cstdio>

using namespace std;
long long int ara[100];

int main(){

    int i, num;
    long long int sum;
    ara[0] = 0;
    ara[1] = 1;

    while((scanf("%d", &num) == 1) && num){
        sum = 2;
        if(num == 1){
            printf("1\n");
            continue;
        }
        for(i = 2; i < num; i++){
            ara[i] = ara[i - 2] + ara[i - 1];
            sum += ara[i];
        }

        printf("%lld\n", sum);
    }

    return 0;

}
