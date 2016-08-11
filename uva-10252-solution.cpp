#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 1003

char a[sz + 3], b[sz + 3];

void swp(int i, int j){

    char temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void swp2(int i, int j){

    char temp;
    temp = b[i];
    b[i] = b[j];
    b[j] = temp;
}


int main(){

    int i, j, k, len, len2;
    char x, ch;

    while(gets(a)){

        gets(b);

        len = strlen(a);
        len2 = strlen(b);

        for(i = 0; i < len - 1; i++){
            for(j = i + 1; j < len; j++){
                if(a[i] > a[j]) swp(i, j);
            }
        }

        for(i = 0; i < len2 - 1; i++){
            for(j = i + 1; j < len2; j++){
                if(b[i] > b[j]) swp2(i, j);
            }
        }
        //puts(a);
        //puts(b);
        for(i = 0; i < len; i++){
            for(j = 0; j < len2; j++){
                if(a[i] == b[j]){
                    putchar(a[i]);
                    break;
                }
            }
        }

        printf("\n");

    }

    return 0;
}
