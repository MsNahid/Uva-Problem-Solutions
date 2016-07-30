#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const int sz = 3;
int ara[sz + 1];

int main(){

    int n, f, i;
    long long int sum;

    scanf("%d", &n);
    while(n--){

        scanf("%d", &f);
        sum = 0;

        while(f--){
            for(i = 0; i < 3; i++) scanf("%d", &ara[i]);
            sum += ara[0] * ara[2];
        }
        printf("%lld\n", sum);
    }

    return 0;
}
