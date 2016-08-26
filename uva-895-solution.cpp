#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 1002

char w[sz + 1][15];
int cont[sz + 1][29], cont2[29];

int main(){

    int i, j, k, n, can;
    bool flag;
    char ch;


    n = 0;
    while(1){
        scanf("%s", w[n]);
        if(w[n][0] == '#') break;
        n++;
    }

    //printf("%d\n", n);
    for(i = 0; i < n; i++){

        for(j = 0; j < 26; j++) cont[i][j] = 0;

        for(j = 0; w[i][j]; j++) cont[i][w[i][j] - 'a']++;
    }

    k = 0;

    while(1){

        scanf("%c", &ch);


        if(ch == '#') break;
        flag = true;

        for(j = 0; j < 26; j++) cont2[j] = 0;
        cont2[ch - 'a']++;


        while(1){
            scanf("%c", &ch);
            if(ch == ' ') continue;
            if(ch == '\n') break;
            cont2[ch - 'a']++;
        }

        can = 0;

        for(i = 0; i < n; i++){
            flag = true;
            for(j = 0; j < 26; j++){
                if(cont[i][j] > cont2[j]){
                    flag = false;
                }
            }
            if(flag) can++;
        }

        printf("%d\n", can);
    }

    return 0;
}
