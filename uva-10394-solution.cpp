#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

#define sz 20000009

long long numbers[sz + 5], primes[sz + 5];
long long tp[sz + 5], k, l;

void sieve(){

    long long  i, j, tmp, tmp2;
    long long sqrtN;

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

}
void twinPrimes(){

    long long i, j, t;
    long long sqrtN;


    t = 1;
    for(i = 0; i < k - 1; i++){
        if(primes[i + 1] - primes[i] == 2){
            tp[t++] = primes[i];
        }
    }
}

int main(){

    long long  i, j, k, n;
    sieve();
    twinPrimes();

    while(scanf("%lld", &n) == 1){

        printf("(%lld, %lld)\n", tp[n], tp[n] + 2);
    }

    return 0;
}
