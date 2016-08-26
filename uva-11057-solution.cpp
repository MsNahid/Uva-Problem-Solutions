#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 10006

int ara[sz + 3];

int main(){

    int i, j, k, mn, mx;
    int n, m, diff, d;

    while(scanf("%d",&n) == 1){

        d =  10000010;
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }

        sort(ara, ara + n);

        scanf("%d", &m);

        for(i = 0; i < n - 1; i++){
            for(j = i + 1; j < n; j++){
                if(ara[i] + ara[j] == m){
                    diff = ara[j] - ara[i];

                    if(d > diff){
                        mn = ara[i];
                        mx = ara[j];
                        d = diff;
                    }
                }
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n", mn, mx);
        printf("\n");
    }

    return 0;

}
