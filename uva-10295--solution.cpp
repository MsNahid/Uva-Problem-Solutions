#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 1250

struct hay{

    char s[30];
    int d;

}ara[sz + 5];

void swp(int i, int j){

    hay temp;

    temp = ara[i];
    ara[i] = ara[j];
    ara[j] = temp;
}
int binary(const char str[], const int m){

    int low, high, mid, loc;
    high = m - 1;
    low = 0;

    while(low <= high){

        mid = (low + high) / 2;

        if(strcmp(ara[mid].s, str) == 0) return mid;
        else if(strcmp(ara[mid].s, str) < 0) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

int main(){

    int i, j, k,m, n;
    long long dollar;
    char str[5000];

    while(scanf("%d%d", &m, &n) == 2){

        for(i = 0; i < m; i++){
            getchar();
            scanf("%s %d", &ara[i].s, &ara[i].d);
        }

        for(i = 0; i < m - 1; i++){
            for(j = i + 1; j < m; j++){
                if(strcmp(ara[i].s , ara[j].s) > 0) swp(i, j);
            }
        }

        /*printf("\n\n sorted aray \n\n");
        for(i = 0; i < m; i++){
            printf("%s %d\n", ara[i].s, ara[i].d);
        }
        */

        for(i = 0; i < n; i++){

            dollar = 0;

            while(scanf("%s", str) && str[0] != '.'){

                k = binary(str, m);

                if(k != -1){
                    dollar = dollar + ara[k].d;
                }
            }

            printf("%lld\n", dollar);
        }
    }
}


