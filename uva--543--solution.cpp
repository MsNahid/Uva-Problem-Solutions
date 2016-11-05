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

    int i, j, n, sqrtN;
    bool flag, flag2, proxy;

    while((scanf("%d", &n) == 1) && n){

        proxy = flag = flag2 = true;
        i = 3;

        while(i <= n - i &&  proxy){

            flag = isPrime(n - i);
            flag2 = isPrime(i);

            if(flag && flag2){
                printf("%d = %d + %d\n", n, i, n - i);
                proxy = false;
            }

            i += 2;
        }
    }

    return 0;
}
