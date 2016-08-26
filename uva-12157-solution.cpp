#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

#define sz 21
int ar[sz + 2];

int main(){

    int i, j, t, tc, ret, ret2;
    int mile, juice, n;

    scanf("%d", &tc);

    for(t = 1; t <= tc; t++){

        ret = 0;
        ret2 = 0;
        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d", &ar[i]);
            mile = ar[i] / 30;
            juice = ar[i] / 60;

            ret += ((mile * 10)+ 10);
            ret2 += ((juice * 15) + 15);
        }

        //printf("%d %d\n", ret , ret2);
        if(ret < ret2)
            printf("Case %d: Mile %d\n",t, ret);
        else if(ret > ret2)
            printf("Case %d: Juice %d\n",t, ret2);
        else
            printf("Case %d: Mile Juice %d\n",t, ret);
    }

    return 0;
}
