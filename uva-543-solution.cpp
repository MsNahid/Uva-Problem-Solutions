#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 1009

int numbers[sz + 10], primes[sz + 10];

void sieve(){

    int i, j, k, sqrtN;

    sqrtN = sqrt(sz);
    for(i = 2; i <= sz; i++) numbers[i] = 0;

    for(i = 3; i <= sqrtN; i += 2){
        if(numbers[i] == 0){
            for(j = i * i; j <= sz; j += i + i){
                numbers[j] = 1;
            }
        }
    }

    k = 0;
    primes[k++] = 2;

    for(i = 3; i <= sz; i += 2){
        if(numbers[i] == 0){
            primes[k++] = i;
        }
    }

    //for(i = 0; i < k; i++) printf("%d ", primes[i]);
}
bool isPrime(int n){

    int i, j, sqrtN;
    bool flag;

    sqrtN = sqrt(n);
    flag = true;

    for(i = 0; primes[i] <= sqrtN; i++){
        if(n % primes[i] == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){

    sieve();

    int i, j, sqrtN, proxy;
    int n;
    bool flag, flag2;

    while((scanf("%d", &n) == 1) && n){

        flag = true;
        flag2 = true;
        proxy = 0;

        if(n == 6){
            puts("6 = 3 + 3");
            continue;
        }

        for(i = n - 3, j = 3; i >= j; ){

            flag = isPrime(i);
            flag2 = isPrime(j);

            if(flag && flag2){

                if(i + j == n){

                    printf("%d = %d + %d\n",n, j, i);
                    proxy = 1;
                    break;

                } else{

                    if(i + j > n){
                        i -= 2;

                    }
                    if(i + j < n){
                        j += 2;
                    }
                }


            }

            if(!flag) i -= 2;
            if(!flag2) j += 2;

        }

        if(proxy == 0)
            puts("Goldbach's conjecture is wrong.");

    }

    return 0;
}
