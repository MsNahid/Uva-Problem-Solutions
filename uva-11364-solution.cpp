#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    int tc, n, mn, mx, val;

    scanf("%d", &tc);

    while(tc--){

        mn = 100; mx = 0;

        scanf("%d", &n);
        while(n--){

            scanf("%d", &val);

            if(val > mx) mx = val;
            if(val < mn) mn = val;
        }

        printf("%d\n", 2 * (mx - mn));
    }

    return 0;
}
