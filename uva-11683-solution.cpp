#include <iostream>
#include <cstdio>
using namespace std;

#define SZ 10000
int ara[SZ + 15];

int main(){

    int i, j, diff, on;
    int a, c;

    while((scanf("%d%d", &a, &c) == 2) && a){

        on = 0;
        scanf("%d", &ara[0]);
        on += a - ara[0];

        for(i = 1; i < c; i++){

            scanf("%d", &ara[i]);
            if(ara[i] != a){

                diff = ara[i - 1] - ara[i];
                if(diff > 0){
                    on += diff;
                }
            }
        }

        printf("%d\n", on);
    }

    return 0;
}
