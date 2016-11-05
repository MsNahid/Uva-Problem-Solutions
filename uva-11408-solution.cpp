#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

#define sz 500000

int numbers[sz + 3], primes[sz + 3];
int cont[sz + 4];

void sieve(){

    int i, j, k, sqrtN;

    sqrtN = sqrt(sz);

    for(i = 2; i <= sz; i++) numbers[i] = 0;

    for(i = 3; i <= sqrtN; i += 2 ){
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

int factorize(int n){

    int i, j, k, sqrtN;
    int sum, mx;

    for(i = 1; i <= sz; i++) cont[i] = 0;

    sqrtN = sqrt(n);
    sum = 0;

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

        if(sqrtN < n){
            mx = n;
        }else{
            mx = sqrtN;
        }
    }

    sum = 0;
    for(i = 2; i <= sz + 1; i++){
        if(cont[i] >= 1){
            sum += i;
        }
    }

    return sum;
}


int main(){

    sieve();
    int i, j, a, b, num, sqrtN;
    int val;
    bool flag = true;

    while(scanf("%d", &a) && a){

        scanf("%d", &b);
        num = 0;

        for(i = a; i <= b; i++){
            sqrtN = sqrt(i);
            for(j = 0; primes[j] <= sqrtN; j++){
                if(i % primes[j] == 0){
                    flag = false;
                    break;
                }
            }

            if(flag){
                num++;
            }else{
                val = factorize(i);
            }

            flag = true;
            sqrtN = sqrt(val);
            for(j = 0; primes[j] <= sqrtN; j++){
                if(i % primes[j] == 0){
                    flag = false;
                    break;
                }
            }

            if(flag){
                num++;
            }

        }

        printf("%d\n", num);
    }

    return 0;
}
