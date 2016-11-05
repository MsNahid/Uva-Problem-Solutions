#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long long F(long long b, long long p, long long m);

int main(){

    long long b, p, m;

    while(scanf("%lld %lld %lld", &b, &p, &m) == 3){

        printf("%lld\n", F(b, p, m));
    }

    return 0;
}

long long F(long long b, long long p, long long m){

    long long ret;

    if(p == 0) return 1;

    if(p % 2 == 0){

        ret = F(b, p/ 2, m);

        return ((ret % m) * (ret % m)) % m;

    }else{

        return ((b % m) * (F(b, p - 1, m) % m)) % m;

    }
}
