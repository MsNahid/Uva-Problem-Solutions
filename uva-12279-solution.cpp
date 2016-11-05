#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    int n, i, val;
    int tmp, tc, cont;

    tc = 0;
    while((scanf("%d", &n)) && n){

        tmp = n;
        cont = 0;
        tc++;
        while(tmp--){

            scanf("%d", &val);
            if(val) cont++;
        }

        i = n - cont;
        i = cont - i;

        printf("Case %d: %d\n", tc, i);

    }

    return 0;
}
