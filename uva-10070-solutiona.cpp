#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

const int sz = 1000000;
char str[sz];

int main(){

    int i, proxy;
    int leap,flag;
    int mod4, mod100, mod400, mod15, mod55;

    proxy = 0;

    while(gets(str)){

        if(proxy != 0) printf("\n");
        proxy = 1;

        mod4 = mod100 = mod400 = mod15 = mod55 = 0;
        leap = flag = 0;

        for(i = 0; str[i]; i++){

            mod4 = ((mod4 * 10) + (str[i] - '0')) % 4;
            mod100 = ((mod100 * 10) + (str[i] - '0')) % 100;
            mod400 = ((mod400 * 10) + (str[i] - '0')) % 400;
            mod15 = ((mod15 * 10) + (str[i] - '0')) % 15;
            mod55 = ((mod55 * 10) + (str[i] - '0')) % 55;

        }
        if((mod4 == 0 && mod100 != 0) || mod400 == 0){
            printf("This is leap year.\n");
            leap = 1;
            flag = 1;
        }
        if(mod15 == 0){
            printf("This is huluculu festival year.\n");
            flag = 1;
        }
        if(leap == 1 &&  mod55 == 0){
             printf("This is bulukulu festival year.\n");
        }

        if(flag == 0){
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}
