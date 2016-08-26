#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define sz 500
char s[sz + 3];

int main(){

    int i, j, k, t, tc, len;
    int dr, tp, tp2;

    scanf("%d", &tc);
    getchar();
    dr = -1;

    for(t = 1; t <= tc; t++){

        scanf("%s", s);
        printf("Case %d: ", t);
        getchar();

        for(i = 0; s[i]; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                if(dr == -1){
                    tp = s[i] - '0';
                    dr = 0;
                    tp2 = i - 1;
                }else if(dr == 0){
                    tp = tp * 10 + (s[i] - '0');
                }
            }else{

                if(dr == 0){
                    for(k = 0; k < tp - 1; k++){
                        putchar(s[tp2]);
                    }
                }
                putchar(s[i]);

                dr = -1;
            }
        }

        if(dr == 0){
            for(k = 0; k < tp - 1; k++){
                putchar(s[tp2]);
            }
        }
        dr = -1;

        printf("\n");

    }

    return 0;
}
