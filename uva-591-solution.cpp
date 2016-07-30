#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 51
int ara[sz + 4];

int main(){

    int i, j, n, sum, avg, mn;
    j = 1;

    while((scanf("%d", &n) == 1) && n){
        sum = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
            sum += ara[i];
        }

        avg = sum / n;
        sum = 0;
        for(i = 0; i < n; i++){
            sum += abs(ara[i] - avg);
        }

        mn = sum / 2;
        printf("Set #%d\n", j);
        printf("The minimum number of moves is %d.\n\n", mn);
        j++;

    }
}
