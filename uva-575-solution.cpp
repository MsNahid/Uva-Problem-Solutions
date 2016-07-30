#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

char str[5000];

int main(){

    int i, j, sum, num, len;

    while(gets(str) && strcmp(str, "0")){
        len = strlen(str);
        sum = 0;
        for(i = len, j = 0; str[j]; i--, j++){
            num = str[j] - '0';
            sum = sum + (num *(pow(2, i) - 1));
        }
        printf("%d\n", sum);
    }
}
