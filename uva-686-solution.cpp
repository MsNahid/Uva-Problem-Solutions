#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 200

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

    //printf("%d\n", n);
    return flag;
}

int main(){

    sieve();

    int i, j, sqrtN, cont;
    int n;
    bool flag, flag2;

    while((scanf("%d", &n) == 1) && n){

        flag = true;
        flag2 = true;
        cont = 0;

        if(n == 6 || n == 4){
           puts("1");
           continue;
        }

        for(i = n, j = 2; i >= j; ){

            flag = isPrime(i);
            flag2 = isPrime(j);

            if(flag && flag2){

                if(i + j == n){

                    i--;
                    j++;
                    cont++;


                } else{

                    if(i + j > n){
                        i--;


                    }
                    if(i + j < n){
                        j++;
                    }
                }
            }

            if(!flag) i--;
            if(!flag2) j++;

        }

        printf("%d\n", cont);
    }

    return 0;
}

