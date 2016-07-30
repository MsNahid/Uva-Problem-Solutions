#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

const int sz = 5000;
char str[sz + 10];

int main(){

    int i, j, a, len, br;
    while(gets(str)){
        br = -1;
        len = strlen(str);
        for(i = 0; str[i]; i++){
            if(str[i] == ' '){
                for(j = i - 1; j > br; j--){
                    printf("%c", str[j]);
                }
                printf(" ");
                br = i;
            }
        }
        for(a = len - 1; a > br; a--){
            printf("%c", str[a]);
        }

        printf("\n");
    }

    return 0;
}
