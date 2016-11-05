#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

char str[16][100] = {"Happy", "birthday", "to", "you",
                           "Happy", "birthday", "to", "you",
                           "Happy", "birthday", "to", "Rujia",
                           "Happy", "birthday", "to", "you"
                        };

#define SZ 101
char st[SZ + 5][SZ + 10];

int main(){

    int i, j, k, l;
    int n, flag;


    scanf("%d", &n);
    flag = 0;
    for(i = 0; i < n; i++){

        getchar();
        scanf("%s", st[i]);
    }

    /*for(i = 0; i < 16; i++){
        printf("%s\n", str[i]);
    }
    */

    for(i = 0, j = 0; ;){

        printf("%s: ", st[j]);
        puts(str[i]);

        if(i == 15 && j == 0) break;
        //printf("i = %d j = %d\n", i, j);
        i++, j++;
        //printf("i = %d j = %d\n", i, j);

        if(i == 16 && j == n) break;
        else{


            if(j == n){

                flag = 1;
                j = 0;
            }

            if(flag == 1 && i == 16) break;

            if(i == 16) i = 0;
        }
    }

    return 0;
}
