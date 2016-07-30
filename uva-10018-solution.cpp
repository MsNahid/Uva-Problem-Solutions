#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    long long int num, cont, sum1, sum2, proxy, proxy2, T;

    scanf("%lld", &T);
    while(T--){

        cont = 0;
        scanf("%lld", &num);
        proxy = num;
        sum1 = num;
        sum2 = 0;

        while(proxy != 0){
            sum2 = sum2 * 10 + (proxy % 10);
            proxy /= 10;
        }

        while(1){

            sum1 += sum2;
            cont++;
            sum2 = 0;
            proxy2 = sum1;

            while(proxy2 != 0){
                sum2 = sum2 * 10 + (proxy2 % 10);
                proxy2 /= 10;
            }

            if((sum2 == sum1) || (sum1 == 4294967295) || (cont == 999)){
                printf("%lld %lld\n", cont, sum2);
                break;
            }

        }

    }

    return 0;

}
