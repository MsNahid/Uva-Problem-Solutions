#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int sz = 5000;
char str[sz + 2];

int main(){

    int i, val = 7;

    while(gets(str)){
        for(i = 0; str[i]; i++){
            printf("%c", str[i] - val);
        }

        printf("\n");
    }

    return 0;
}
