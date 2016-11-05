#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 136

char s[sz + 4];

int main(){

    int i, j, k, cont;
    cont = 0;

    while(gets(s)){

        for(i = 0; s[i]; i++){

            if(s[i] >= '0' && s[i] <= '9'){

                cont += s[i] - '0';

            }else if(s[i] == 'b'){

                for(j = 0; j < cont; j++){

                    putchar(' ');
                }
                cont = 0;

            }else if(s[i] == '!'){

                putchar('\n');

            }else{

                for(j = 0; j < cont; j++){

                    printf("%c", s[i]);
                }
                cont = 0;

            }
        }

        putchar('\n');
    }

    return 0;
}
