#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;
#define sz 105
int numbers[sz + 5] = {0}, primes[sz + 10];

void sieve(){

    int i, j, k, sqrtN;

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
bool isPrime(int n){

    int i, j, sqrtN;
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

    int i, j, k, sqrtN;
    int tc, n;

    scanf("%d", &tc);

    while(tc--){
        scanf("%d", &n);
        k = n / 2 + 1;

        while(1){
            if(isPrime(k)){
                printf("%d\n", k);
                break;
            }
            k++;
        }
    }

    return 0;

}
