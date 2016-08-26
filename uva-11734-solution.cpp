#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 23
char st[sz + 2], st2[sz + 2], st3[sz + 2];

int main(){

    int i, k, t, tc;
    bool flag;

    scanf("%d", &tc);
    getchar();

    for(t = 1; t <= tc; t++){

        gets(st);
        gets(st2);
        flag = true;
        k = 0;

        for(i = 0; st[i]; i++){
            if(st[i] != ' '){
                st3[k++] = st[i];
            }else{
                flag = false;
            }
        }

        st3[k] = '\0';

        if(!strcmp(st, st2)) printf("Case %d: Yes\n", t);
        else{
            if(flag){

                printf("Case %d: Wrong Answer\n", t);

            }else{
                if(strcmp(st3, st2) != 0) printf("Case %d: Wrong Answer\n", t);
                else printf("Case %d: Output Format Error\n", t);
            }
        }

        memset(st3, 'NULL', sizeof(st3));
    }

    return 0;
}
