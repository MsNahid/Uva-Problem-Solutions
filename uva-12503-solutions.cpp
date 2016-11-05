#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

#define SZ 110
char str[SZ + 3][500];
char st[SZ];

int main(){

    int i, j, k, tc, p;
    int n, len, val;

    scanf("%d", &tc);
    getchar();

    while(tc--){

        scanf("%d", &n);
        getchar();

        p = 0;
        for(i = 1; i <= n; i++){

             scanf("%s", st);

                if(st[0] == 'L'){

                    strcpy(str[i], st);
                    p--;

                }else if(st[0] == 'R'){

                        strcpy(str[i], st);
                        p++;

                }else{

                        scanf("%s", st);
                        getchar();
                        scanf("%d", &val);
                        getchar();

                        if(!(strcmp(str[val], "LEFT"))){

                                strcpy(str[i], "LEFT");
                                p--;
                        }else{

                              strcpy(str[i], "RIGHT");
                                p++;
                        }

                }
        }

        printf("%d\n", p);
        memset(str, '\0', sizeof(str));
    }

    return 0;
}

