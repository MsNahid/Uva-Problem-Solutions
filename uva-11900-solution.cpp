#include <iostream>
#include <cstdio>
#include <cmath>

#define sz 31
int ara[sz + 3];

int main(){

    int i, j, sum , cont, tc;
    int n, p, q;

    scanf("%d", &tc);

    for(j = 0; j < tc; j++){
        scanf("%d%d%d", &n, &p, &q);

        sum = 0;
        cont = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < n; i++){
            sum += ara[i];

            if(sum <= q && cont < p){
                cont++;
            }else{
                break;
            }
        }
        printf("Case %d: %d\n", j + 1, cont);
    }

    return 0;
}
