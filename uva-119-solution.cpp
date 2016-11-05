#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
using namespace std;

#define SZ 100
char str[SZ + 2][SZ + 2];

int main(){

    int i, j, tmp, n;
    int amount, person, val;
    char st[15];
    map <string,int>mp;

    tmp = 1;
    while(scanf("%d", &n) == 1){

        getchar();
        for(i = 1; i <= n; i++){
            scanf("%s", str[i]);
            getchar();
            mp[str[i]] = 0;

        }

        for(i = 1; i <= n; i++){
            scanf("%s",st);
            getchar();
            scanf("%d%d", &amount, &person);
            getchar();

            if(person){
                val = amount / person;
                mp[st] += amount % person;
                mp[st] -= amount;
            }
            //mp[st] -= amount;
            for(j = 1; j <= person; j++){
                scanf("%s", st);
                getchar();
                mp[st] += val;
            }
        }
        if(tmp != 1) putchar('\n');
        for(i = 1; i <= n; i++){
            printf("%s %d\n",str[i], mp[str[i]]);
        }

        tmp++;
        memset(str, '\0', sizeof(str));
    }

    return 0;
}
