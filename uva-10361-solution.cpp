#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 105

#define sf scanf
#define pf printf
#define ll long long
#define ull unsinged long long
#define pi 2*acos(0.0)
#define so puts
#define co putchar

char str[sz + 5], str2[sz + 5];

int main(){

    int t, i, j, k, tmp, tmp2, tmp3, tmp4, tmp5;
    int tc;

    scanf("%d", &tc);
    getchar();

    for(t = 0; t < tc; t++){

        gets(str);
        gets(str2);

        for(i = 0; str[i]; i++){
            if(str[i] == '<'){
                tmp = i + 1;
            }

            if(str[i] == '>'){
                tmp2 = i - 1;
                break;
            }
        }

        for(i = tmp2 + 2; str[i]; i++){
            if(str[i] == '<'){
                tmp3 = i + 1;
            }

            if(str[i] == '>'){
                tmp4 = i - 1;
                break;
            }
        }

        //printf("%d %d %d %d\n", tmp, tmp2, tmp3, tmp4);
        //printf("%c %c %c %c\n", str[tmp], str[tmp2], str[tmp3], str[tmp4]);
        for(i = 0; str[i]; i++){
            if(str[i] != '<' && str[i] != '>'){
                printf("%c", str[i]);
            }
        }
        printf("\n");

        int len = strlen(str2);

        for(i = 0; i < len - 3; i++){
            printf("%c", str2[i]);
        }

        for(i = tmp3; i <= tmp4; i++){
            printf("%c", str[i]);
        }

        for(i = tmp2 + 2; i < tmp3 -1; i++){
            printf("%c", str[i]);
        }

        for(i = tmp; i <= tmp2; i++){
            printf("%c", str[i]);
        }

        for(i = tmp4 + 2; str[i]; i++){
            printf("%c", str[i]);
        }

        printf("\n");
    }

    return 0;
}

