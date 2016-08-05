#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

char str[5000], str2[2];

int main(){

    long long int num, mod, i, j, rem;


    while(scanf("%s %s %lld", str, str2, &num) == 3){
        mod = 0;
        rem = 0;
        if(!strcmp(str2, "%")){
           for(i = 0; str[i]; i++){
                mod = ((mod * 10) + (str[i] - '0')) % num;
           }
           printf("%lld\n", mod);
        }
        if(!strcmp(str2, "/")){

            int flag = 1;
            for(i = 0; str[i]; i++){
                rem = (str[i] - '0') + rem * 10;
                if(rem / num != 0){
                    flag = 0;
                }
                if(!flag) printf("%lld", rem / num);
                rem %= num;
            }
            if(flag) printf("0");
            printf("\n");
        }
    }

    return 0;
}
