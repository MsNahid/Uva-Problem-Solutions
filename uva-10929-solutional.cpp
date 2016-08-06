#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 1003
char str[sz + 3];

int main(){

    int i, sum, mod;

    while(scanf("%s", str) == 1){
        if(!strcmp(str, "0")) break;

        mod = 0;
        for(i = 0; str[i]; i++)
            mod = ((mod * 10) + (str[i] - '0')) % 11;

        if(!mod){
            printf("%s is a multiple of 11.\n", str);
        }else{
            printf("%s is not a multiple of 11.\n", str);
        }
    }

    return 0;
}
