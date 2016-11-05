#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 1000
int ara[sz + 10];

int main(){

    int a, b, n, t, cont;

    while(scanf("%d", &n) == 1){

        cont = 0;
        for(a = 0; a < n; a++) scanf("%d", &ara[a]);

        for(a = 1; a < n; a++){
            for(b = n - 1; b >= a; b--){
                if(ara[b - 1] > ara[b]){
                    cont++;
                    t = ara[b];
                    ara[b] = ara[b - 1];
                    ara[b - 1] = t;
                }
            }
        }

        printf("Minimum exchange operations : %d\n", cont);
    }

    return 0;
}
