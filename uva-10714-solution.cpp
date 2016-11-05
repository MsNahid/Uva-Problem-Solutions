#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;
#define sz 1000002

long long ara[sz + 3];

int main(){

    long long i, j, k, mn, mx;
    long long l, tc, ants, mx2;

    scanf("%lld", &tc);

    while(tc--){

        scanf("%lld%lld", &l, &ants);
        mx = 0;
        mn = 1000002;
        mx2 = 0;

        for(i = 0; i < ants; i++){
            scanf("%lld", &ara[i]);

            if(mx < ara[i]) mx = ara[i];
            if(mn > ara[i]) mn = ara[i];
            //if(mx2 < ara[i] && mx != ara[i]) mx2 = ara[i];
        }

        for(i = 0; i < ants; i++){
            if(mx2 < ara[i]){
                if(ara[i] != mx){
                    mx2 = ara[i];
                }
            }
        }

        //printf("%lld %lld %lld\n", mn, mx2, mx);
        if(mx == l) printf("0 %lld\n", l - mx2);
        else if(mx == l - 1) printf("%lld %lld\n", l - mx2, mx);
        else{
            printf("%lld %lld\n", l - mx2, l - mn);
        }

        memset(ara, NULL, sizeof(ara));

    }

    return 0;
}
