#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    long long int  a, b, c, N;

    while((scanf("%lld", &N) == 1) && N >= 0){
        a = 0;
        c = 1;
        b = 1;
        while(N--){
            c = a + b + 1;
            a = b;
            b = c;
        }
        printf("%lld %lld\n", a, c);
    }
}
