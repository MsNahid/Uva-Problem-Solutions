#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 100000000
char s[sz + 5];

bool isVowel(char ch){

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;

    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;

    return false;
}

int main(){

    int i, j, k, len;
    int start, dr, proxy;
    bool flag = false;
    char c;

    while(gets(s)){

        start = 0;
        dr = -1;

        for(i = 0; s[i]; i++){

            //proxy = 0;
            if(isalpha(s[i])){

                proxy = 0;
                if(isVowel(s[i])){

                    putchar(s[i]);
                    start = 1;
                    //proxy = 0;

                }else{

                    if(start == 0){
                        c = s[i];
                        dr = 0;
                        start = 1;
                        //proxy = 0;

                    }else{

                        putchar(s[i]);
                        start = 1;
                        //proxy = 0;
                    }

                    start = 1;
                    //proxy = 0;
                }
            }else{

                if(dr == 0){

                    putchar(c);
                    dr = -1;
                    start = 0;

                }

                if(proxy == 0){
                    putchar('a');
                    putchar('y');
                    proxy = 1;
                }

                putchar(s[i]);
                start = 0;

            }

        }

        if(dr == 0){

            putchar(c);
            dr = -1;
            start = 0;

        }

        if(proxy == 0){
            putchar('a');
            putchar('y');
            proxy = 1;
        }

        printf("\n");

    }

    return 0;

}
