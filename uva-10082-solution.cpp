#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int sz = 5000;
char str[sz];
char digit[] = "`1234567890-=";
char letter[] = "QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

int main(){

    int i, j;

    while(gets(str) != NULL){
        for(i = 0; str[i]; i++){
            if(str[i] == ' ') printf(" ");
            else if((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '='){
                for(j = 0; digit[j]; j++){
                    if(str[i] == digit[j]){
                        printf("%c", digit[j - 1]);
                        break;
                    }
                }
            }else{
                for(j = 0; letter[j]; j++){
                    if(str[i] == letter[j]){
                        printf("%c", letter[j - 1]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}
