#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 1000029
int numbers[sz + 5] = {0}, primes[sz + 5];

void sieve(){

    int i, j, sqrtN;

    sqrtN = sqrt(sz);

    for(i = 3; i <= sqrtN; i += 2){

        for(j = i * i; j <= sz; j += i + i){
            if(numbers[j] == 0){
                numbers[j] = 1;
            }
        }
    }

    int k = 0;
    primes[k++] = 2;

    for(i = 3; i <= sz; i += 2){
        if(numbers[i] == 0){
            primes[k++] = i;
        }
    }

    /*for(i = 0; i < k; i++){
       printf("%d ", primes[i]);
    }
    */

    //printf("%d\n", k);
}

bool isPrime(int n){

    int i, j, sqrtN;

    sqrtN = sqrt(n);

    if(n == 1 || n == 0) return false;

    for(i = 0; primes[i] <= sqrtN; i++){
        if(n % primes[i] == 0){
            return false;
        }
    }

    return true;
}

int main(){

    sieve();

    int i, j, n, t, k;
    int low, up;
    bool flag;
    int ara[5000000 + 3], ara2[5000000 + 3], cont[5000000 + 3];

        scanf("%d", &n);

        for(t = 0; t < n; t++){

            k = 0;
            scanf("%d%d", &low, &up);

            for(i = low; i <= up; i++){
                flag = isPrime(i);
                if(flag){
                    ara[k++] = i;
                }
            }

            for(i = 0; i <= 5000000; i++) cont[i] = 0;

            int diff, mx, mx2;
            int proxy, val;
            mx = 0;

            for(i = 0, j = 1; j < k; i++, j++){
                diff = ara[j] - ara[i];
                //printf("%d ", diff);
                cont[diff]++;
                if(mx < diff){
                    mx = diff;
                }
            }

            //printf("\n");

           mx2 = 0;
           for(i = 1; i <= mx; i++){
                //printf("%d = %d\n", i, cont[i]);
                if(cont[i] > mx2){
                    mx2 = cont[i];
                    val = i;
                }
           }

           proxy = 0;
           //printf("%d\n", mx2);

           for(i = 1; i <= mx; i++){
                if(cont[i] == mx2){
                    proxy++;
                }
            }

            if(proxy > 1 || mx2 == 0) puts("No jumping champion");
            else{
                printf("The jumping champion is %d\n", val);
            }

        }


    return 0;
}
