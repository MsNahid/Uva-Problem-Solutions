/* Fib(47)=2971215073 */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

#define sz 500
long long ara[sz + 5];
long long fib[50];

void fibonacci(){

    long long i, j;

    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;
    i = 3;

    while(i <= 47){

        fib[i] = fib[i - 1] + fib[i - 2];
        i++;
    }
}
long long binary(long long item){

    long long low, high, mid, result;

    low = 0;
    high = 46;


    while(low <= high){

        mid = (low + high) / 2;

        if(item < fib[mid]){
            high = mid - 1;
        }else if(item > fib[mid]){
            low = mid + 1;
        }else{

            return mid;
        }
    }

    return -1;
}
main(){

    fibonacci();
    long long i, j, k, tc, mx2;
    long long  mx, mn, n, t, index;
    char s[110], s2[110], s3[110];
    //string s, s2;

    scanf("%lld", &tc);
    getchar();

    while(tc--){

        scanf("%lld", &n);
        getchar();
        //cin >> n;
        mx = 0;
        mn = 10000000000000;

        for(i = 0; i < n; i++){

            scanf("%lld", &ara[i]);
            //cin >> ara[i];
            getchar();

            if(mx < ara[i]) mx = ara[i];
            if(mn > ara[i]) mn = ara[i];

        }

        getchar();
        gets(s);
        //getchar();
        //cin >> s;
        t = mx2 = 0;

        for(i = 0; s[i]; i++){

            if(s[i] >= 'A' && s[i] <= 'Z'){

                k = binary(ara[t]);
                s2[k] = s[i];
                if(k > mx2) mx2 = k;
                t++;
            }
        }

        puts(s);
        sort(ara, ara + n);

        index = binary(mn);

        for(i = index, j = 0; i <= mx2; ){

            if(ara[j] == fib[i]){

                i++, j++;

            }else{

                s2[i] = ' ';
                i++;
            }
        }
        /*
        putchar(s2[13]);
        putchar('\n');
        putchar(s2[9]);
        putchar('\n');
        putchar(s2[4]);
        putchar('\n');
        putchar(s2[6]);
        putchar('\n');

        */
        j = 0;
        for(i = index; i <= mx2; i++){

            if((s2[i] >= 'A' && s2[i] <= 'Z') || s2[i] == ' '){
                s3[j] = s2[i];
                j++;
            }
        }

        s3[j] = '\0';
        puts(s3);

        memset(s2, '\0', sizeof(s2));
        memset(s3, '\0', sizeof(s3));
        memset(s, '\0', sizeof(s));
        memset(ara, NULL, sizeof(ara));

    }

    return 0;
}
