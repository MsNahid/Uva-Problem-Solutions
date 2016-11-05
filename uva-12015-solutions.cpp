#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

struct web{

    char str[110];
    int rev;
}w[13];

int main(){

    int i, j, k, mx;
    int tc, val;

    while(scanf("%d", &tc) == 1){

        for(i = 1; i <= tc; i++){

            mx = 0;
            for(j = 1; j <= 10; j++){

                getchar();
                scanf("%s %d", w[j].str, &w[j].rev);

                if(w[j].rev > mx){
                    mx = w[j].rev;
                }
            }

            printf("Case #%d:\n", i);
            for(j = 1; j <= 10; j++){

                if(w[j].rev == mx){

                    printf("%s\n", w[j].str);
                }
            }
        }
    }

    return 0;

}
