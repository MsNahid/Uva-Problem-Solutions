#include <iostream>
#include <cstdio>
#include <cmath>#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 3000

int ara[sz + 5], dif[sz + 5];

int main(){

    int m, n, i, j;

    while(scanf("%d", &n) == 1){

        j = 0;

        for(i = 0; i < n; i++) scanf("%d", &ara[i]);

        for(i = 0; i < n - 1; i++){
            dif[j++] = abs(ara[i] - ara[i + 1]);
            //printf("%d\n", dif[i]);
        }

        //for(i = 0; i < j; i++) printf("%d ", dif[i]);
        sort(dif, dif + n - 1);

        for(i = 0; i < j; i++){
            if(dif[i] != i + 1){
                puts("Not jolly");
                break;
            }
        }

        if(i == j) puts("Jolly");
    }

    return 0;
}
