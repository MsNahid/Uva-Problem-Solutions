/* use stl */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

#define sz 504
int ara[sz + 2];

int main(){

    int i, j, s, tc,sum;
    int tmp, base;

    scanf("%d", &tc);

    while(tc--){

        sum = 0;
        scanf("%d", &s);

        for(i = 0; i < s; i++) scanf("%d", &ara[i]);

        sort(ara, ara + s);

        tmp = s / 2;

        if(s % 2 == 0){

            base = ara[tmp] + ara[tmp - 1];
            base /= 2;

        }else{

            base = ara[tmp];
        }

        for(i = 0; i < s; i++){

            sum += abs(base - ara[i]);
        }

        printf("%d\n", sum);


    }

    return 0;
}
