#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char str[100000];

int main(){

    long  i, sum = 0;
    while(gets(str)){
        for(i = 0; str[i]; i++){
            if(str[i] == '"'){
                sum++;
                if(sum % 2 == 1){
                    printf("``");
                }else{
                    printf("''");
                }
            }else{
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
