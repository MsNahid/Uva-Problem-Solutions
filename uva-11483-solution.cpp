#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 102
char str[sz + 3][sz + 3];

int main(){

    int i, j, t, tc;
    int kase = 1;

    while((scanf("%d", &tc) == 1) && tc){

        getchar();

        for(i = 0; i < tc; i++){
            gets(str[i]);

            if(strlen(str[i]) == 0){
                gets(str[i]);
            }
        }
        printf("Case %d:\n", kase++);
        puts("#include<string.h>\n#include<stdio.h>\nint main()\n{");

        for(i = 0; i < tc; i++){
            printf("printf(\"");

            //int len = strlen(str[i]);

            for(j = 0; str[i][j]; j++){ // you may use j < len
                switch(str[i][j]){
                case '"':
                    putchar('\\');
                    putchar(str[i][j]);
                    break;
                case '\\':
                    putchar('\\');
                    putchar(str[i][j]);
                    break;
                default:
                    putchar(str[i][j]);
                    break;
                }
            }
            puts("\\n\");");
        }
        puts("printf(\"\\n\");\nreturn 0;\n}");
    }

    return 0;
}

