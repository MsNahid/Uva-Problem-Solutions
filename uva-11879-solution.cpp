#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 50000
char str[sz + 5];

int main(){

    int i, mod;

    while(gets(str)){

        if(!strcmp(str, "0")) break;
        mod = 0;

        for(i = 0; str[i]; i++){
            mod = ((mod * 10) + (str[i] - '0')) % 17;
        }
        if(mod == 0){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }

    return 0;
}
