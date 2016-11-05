#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

#define sz 10000
char str[sz + 5], st[150];
long long int ara[150];

int main(){

    long long int i, j, n, k, m;
    long long int len, a, b, c;
    double price;

    while(scanf("%lld\n", &n) == 1){

        while(n--){
            scanf("%lld\n", &k);

            for(i = 0; i < k; i++){
                scanf("%c%lld\n", &st[i], &ara[i]);
            }

            scanf("%lld\n", &m);

            price = 0.0;
            while(m--){
                gets(str);

                for(i = 0; i < k; i++){
                    for(j = 0; str[j]; j++){
                        if(str[j] == st[i]) price += ara[i];
                    }

                }

            }

            printf("%0.2lf$\n", price / 100);
        }
    }

    return 0;
}

