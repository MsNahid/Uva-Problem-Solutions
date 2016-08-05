#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 10000
int ara[sz + 5];

int main(){

    int i, j, n, m, cont, tc = 0;
    int val;
    bool flag = false;

    while(scanf("%d%d", &n, &m) == 2){

        tc++;
        if(n == 0 && m == 0) break;

        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }
        printf("CASE# %d:\n", tc);
        while(m--){
            cont = 0;
            flag = false;
            scanf("%d", &val);
            for(i = 0; i < n; i++){
                if(ara[i] < val) cont++;
                if(ara[i] == val) flag = true;
            }
            if(flag) printf("%d found at %d\n",val, cont + 1);
            else
                printf("%d not found\n", val);
        }
    }

    return 0;
}
