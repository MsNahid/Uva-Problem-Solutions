#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 1009

#define sf scanf
#define pf printf
#define ll long long
#define ull unsinged long long
#define pi 2*acos(0.0)
#define so puts
#define co putchar

int numbers[sz + 5], primes[sz + 5];

void sieve(){

    int i, j, k;
    int sqrtN;

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

    /*for(i = 0; i < k; i++){
        printf("%d ", primes[i]);
    }
    */
}

int main(){

    sieve();

    int i, j, k, sqrtN, n, m;
    int tc, sum, tmp, tmp2, cont;
    bool flag, flag2;

    scanf("%d", &tc);

    while(tc--){

        scanf("%d%d", &n, &m);
        cont = 0;

        if(n % 2 == 0) n = n + 1;
        if(m % 2 == 0) m = m - 1;

        for(i = n; i <= m; i++){
            //sqrtN = sqrt((double (i)));
            sqrtN = sqrt(i);
            flag = true;

            for(j = 0; primes[j] <= sqrtN; j++){
                if(i % primes[j] == 0){
                    flag = false;
                }
            }

            if(flag){
                tmp = i;
                tmp2 = 0;
                flag2 = true;

                while(tmp != 0){

                    tmp2 += (tmp % 10);
                    tmp /= 10;

                }

                //int sqrtN2 = sqrt((double(tmp2)));
                int sqrtN2 = sqrt(tmp2);

                for(k = 0; primes[k] <= sqrtN2; k++){
                    if(tmp2 % primes[k] == 0){
                        flag2 = false;
                    }
                }

                if(flag2) cont++;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}

