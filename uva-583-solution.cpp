#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 46350

int numbers[sz + 10], primes[sz + 10], k = 0;

void sieve(){

    int i, j,sqrtN;
    sqrtN = sqrt((double) sz);

    for(i = 2; i <= sz; i++) numbers[i] = 0;

    for(i = 3; i <= sqrtN; i += 2){
        if(numbers[i] == 0){
            for(j = i * i; j <= sz; j += i + i){
                numbers[j] = 1;
            }
        }
    }
    primes[k++] = 2;
    for(i = 3; i <= sz; i += 2){
        if(numbers[i] == 0){
            primes[k++] = i;
        }
    }

}
int main(){

    sieve();
    int i, j, num, sqrtN;

    while((scanf("%d", &num) == 1) && num){
        if(num < 0){
            printf("%d = -1 x ", num);
            num *= -1;
        }else{
            printf("%d = ", num);
        }

        sqrtN = sqrt(num);
        for(i = 0; primes[i] <= sqrtN; i++){
            while(num % primes[i] == 0){
                printf("%d", primes[i]);
                num /= primes[i];

                if(num > 1){
                    printf(" x ");
                }
            }
        }
        if(num > 1){
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
