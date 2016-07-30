#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;
char str[1009];

int main(){

    long long int i, j, sum;

    while(gets(str) != NULL){

        sum = 0;
        if(!strcmp(str, "0")) break;

        for(i = 0, j = 1; str[j]; i += 2, j += 2){
            sum += (str[i] - '0') - (str[j] - '0');
        }
        if(sum % 11 == 0)printf("%s is a multiple of 11.\n", str);
        else printf("%s is not a multiple of 11.\n", str);
    }

    return 0;
}
