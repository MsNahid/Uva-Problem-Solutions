#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

#define SZ  1000000
char str[SZ + 10];

int main(){

    int i, j, k, l, tc;
    int n, mx, mn, tmp, proxy;

    tc = 1;
    while(scanf("%s", str) != EOF){

        getchar();
        scanf("%d", &n);

        printf("Case %d:\n", tc);
        while(n--){

            scanf("%d%d", &mn, &mx);
            if(mn > mx){

                tmp = mx;
                mx = mn;
                mn = tmp;
            }

            if(mn == mx){

                puts("Yes");
                continue;
            }

            for(j = mn; j < mx; j++){

                if(str[j] != str[j + 1]){
                    puts("No");
                    break;
                }
            }

            if(j == mx) puts("Yes");

        }

        tc++;

    }

    return 0;
}
