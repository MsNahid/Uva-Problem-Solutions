#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

const int sz = 20;
char str[sz + 4];

int main(){

    int  n;
    char *ptr;

    while(gets(str)){
        //scanf("%s", str);

        if(str[0] == '0' && str[1] == 'x'){
            n = (int)strtol(str, &ptr, 0);
            printf("%d\n", n);
        }else{
            n = atoi(str);
            if(n < 0) break;
            else
                printf("0x%X\n", n);
        }
    }

    return 0;
}
