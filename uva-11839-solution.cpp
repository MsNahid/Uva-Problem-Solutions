#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 5
int ara[sz + 2];

int main(){

    int i, j, k;
    int tc, loc;

    while(scanf("%d", &tc) && tc){

        loc = 0;

        for(j = 0; j < tc; j++){

            loc = 0;
            k = 2;

            for(i = 0; i < sz; i++){
                scanf("%d", &ara[i]);
                if(ara[i] <= 127){
                    loc = i + 1;
                    k--;

                }

            }

            if(loc == 1 && k > 0) puts("A");
            else if(loc == 2 && k > 0) puts("B");
            else if(loc == 3 && k > 0) puts("C");
            else if(loc == 4 && k > 0) puts("D");
            else if(loc == 5 && k > 0) puts("E");
            else puts("*");
        }

    }

    return 0;
}
