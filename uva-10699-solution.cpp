#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 1020

int numbers[sz + 5], primes[sz + 5];

void sieve(){

    int i, j, k;
    int sqrtN;

    for(i = 2; i <= sz; i++) numbers[i] = 0;
    sqrtN = sqrt(sz);

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


    /*for(i = 0; i < k; i++){
        printf("%d ", primes[i]);
    }

    printf("\n");
    */
}
int primeFactorize(int n){

    int i, j, k;
    int sqrtN, cont;

    sqrtN = sqrt(n);
    cont = 0;

    for(i = 0; primes[i] <= sqrtN; i++){
        if(n % primes[i] == 0){
            cont++;
            while(n % primes[i] == 0){
                n /= primes[i];
            }
        }
    }

    if(n > 1){
        cont++;
    }

    return cont;
}


int main(){

    sieve();

    int i, j, k;
    int n;

    while(scanf("%d", &n) && n){

        k = primeFactorize(n);

       printf("%d : %d\n", n, k);

    }

    return 0;
}
