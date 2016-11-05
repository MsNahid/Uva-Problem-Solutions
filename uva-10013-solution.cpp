#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

#define sz 1000015

int a[sz + 4], ar[sz + 4], ara[sz + 4];

int main(){

    int i, j, t, tc, m, k;
    int add, sum, carry;

    while(scanf("%d", &tc) == 1){

        for(t = 0; t < tc; t++){

            //putchar('\n');
            scanf("%d", &m);


            for(i = 0; i < m; i++){

                scanf("%d %d", &a[i], &ar[i]);
            }

            carry = 0;
            k = 0;
            for(j = m - 1; j >= 0; j--){

                sum = a[j] + ar[j] + carry;
                add = sum % 10;
                ara[k++] = add;
                carry = sum / 10;

                if(j == 0 && carry == 1) ara[k++] = 1;

            }

            for(j = k - 1; j >= 0; j--){
                printf("%d", ara[j]);
            }
            putchar('\n');

            if(t != tc - 1) putchar('\n');

            memset(ara, NULL, sizeof(ara));
            memset(ar, NULL, sizeof(ar));
            memset(a, NULL, sizeof(a));

        }
    }

    return 0;
}
