#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 110

#define sf scanf
#define pf printf
#define ll long long
#define ull unsinged long long
#define pi 2*acos(0.0)
#define so puts
#define co putchar

int numbers[sz + 4], primes[sz + 4];
int List[sz + 4], listSize;
int cont[sz];

void sieve(){

    int i, j, sqrtN;

    sqrtN = sqrt(sz);

    for(i = 2; i <= sz; i++) numbers[i] = 0;

    for(i = 3; i <= sqrtN; i += 2){
        if(numbers[i] == 0){
            for(j = i * i; j <= sz; j += i + i){
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
}

void primeFactorize(int n){

    int i, sqrtN;

    sqrtN = sqrt(n);

    for(i = 0; primes[i] <= sqrtN; i++){
        if(n % primes[i] == 0){
            while(n % primes[i] == 0){
                n /= primes[i];
                cont[primes[i]]++;
            }
        }
    }

    if(n > 1){
        cont[n]++;
    }

   /* for(i = 0; i < listSize; i++){
        printf("%d ", List[i]);
    }
    */
}

int main(){

    int i, j,tmp, tmp2;
    int n;

    sieve();


    while(scanf("%d", &n) && n){

        tmp = n;
        tmp2 = 0;

        for(i = 0; i <= 101; i++){
            cont[i] = 0;
        }

        for(i = n; i > 1; i--){
            primeFactorize(i);
        }

        for(i = 101; i >= 2; i--){
            if(cont[i] != 0){
                break;
            }
        }
        j = i;

        int flag = 0;

        printf("%3d! =", tmp);

        for(i = 2; i <= j/*101*/; i++){
            if(cont[i] != 0){
                if(flag == 15){
                    printf("\n%6c",' ');
                }

                printf("%3d", cont[i]);
                flag++;
            }

        }
        printf("\n");
    }

    return 0;

}
