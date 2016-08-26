#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 256
char str[sz + 5];

int main(){

    int i, j, k, len, error;
    int p, s, tc, space;

    scanf("%d", &tc);
    getchar();

    while(tc--){

        gets(str);
        len = strlen(str);
        p = s = 0;
        space = 0;
        error = 0;

        if(len % 2 != 0){
            puts("No");
        }else if(str[0] == ')' || str[0] == ']' || str[len - 1] == '(' || str[len - 1] == '['){
            puts("No");
        }else{

            error = 0;
            for(i = 0; str[i]; i++){
                if(str[i] == ' ') continue;


                if(str[i] == '(') p++;
                else if(str[i] == '[') s++;
                else if(str[i] == ')') p--;
                else if(str[i] == ']') s--;
                else{
                    error = 1;
                    break;
                }
            }

            if(s == 0 && p == 0 && error == 0) puts("Yes");
            else puts("No");

        }
    }

    return 0;

}
