#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;
#define sz 22

char s[sz + 3];

int main(){

    int i, proxy = -1;

    while(scanf("%s", s) == 1){

        for(i = 0; s[i]; i++){

            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')
            {
                if(s[i-1]!='B' && s[i-1]!='F' && s[i-1]!='P' && s[i-1]!='V')
                    putchar('1');
            }
            else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z')
            {
                if(s[i-1]!='C' && s[i-1]!='G' && s[i-1]!='J' && s[i-1]!='K' && s[i-1]!='Q' && s[i-1]!='S' && s[i-1]!='X' && s[i-1]!='Z')
                    putchar('2');
            }
            else if(s[i]=='D' || s[i]=='T')
            {
                if(s[i-1]!='D' && s[i-1]!='T')
                    putchar('3');
            }
            else if(s[i]=='L')
            {
                if(s[i-1]!='L')
                    putchar('4');
            }
            else if(s[i]=='M' || s[i]=='N')
            {
                if(s[i-1]!='M' && s[i-1]!='N')
                    putchar('5');
            }
            else if(s[i]=='R')
            {
                if(s[i-1]!='R')
                    putchar('6');
            }
        }
        putchar('\n');
    }
    return 0;
}

