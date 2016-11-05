#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;
#define sz 1000008
long long numbers[sz + 5] = {0}, primes[sz + 10];

void sieve(){

    long long i, j, k, sqrtN;

    sqrtN = sqrt(sz);

    for(i = 3; i <= sqrtN; i += 2){
        for(j = i * i; j <= sz; j += i + i){
            if(numbers[j] == 0){
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
bool isPrime(long long n){

    long long i, j, sqrtN;
    bool flag = true;

    sqrtN = sqrt(n);

    for(i = 0; primes[i] <= sqrtN; i++){
        if(!(n % primes[i])){
            return false;
        }
    }

    return true;
}
int main(){
    sieve();

    long long i, j, k, tmp;
    long long low, high;
    long long tc, cont, cont2, proxy;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld%lld", &low, &high);

        cont2 = 0;

        if(low % 2 == 0){
            for(i = low; i <= high; i += 2){

                cont = 0;
                proxy = 0;


                tmp = (i / 2) + 1;
                for(j = 0; primes[j] <= tmp; j++){
                    if(i % primes[j] == 0){
                        cont++;
                        if(cont > 1){
                            proxy = 1;
                            break;
                        }
                    }
                }

                if(proxy == 0) cont2++;

            }
        }else{

            for(i = low; i <= high; i++){

                cont = 0;
                proxy = 0;
                if(!isPrime(i)){

                    tmp = (i / 2) + 1;
                    for(j = 0; primes[j] <= tmp; j++){
                        if(i % primes[j] == 0){
                            cont++;
                            if(cont > 1){
                                proxy = 1;
                                break;
                            }
                        }
                    }

                    if(proxy == 0) cont2++;
                }
            }
        }

        printf("%lld\n", cont2);
    }

    return 0;
}

