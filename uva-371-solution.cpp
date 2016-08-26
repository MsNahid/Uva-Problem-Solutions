#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

int main(){

    long long  n, m, temp, temp2;
    long long i, j, val, mx;

    mx = 0;

    while(scanf("%lld%lld", &n, &m) && (n || m)){

        mx = 0;

        if(n > m){
            int t;
            t = m;
            m = n;
            n = t;

        }

        for(i = n; i <= m; i++){
            temp = i;

            if(temp % 2 == 0){
                temp /= 2;
            }else{
                temp = temp * 3 + 1;
            }

            val = 1;

            while(temp != 1){
                if(temp % 2 == 0){
                    temp /= 2;
                    val++;
                }else{
                    temp = temp * 3 + 1;
                    val++;
                }
            }

            if(mx < val){
                mx = val;
                temp2 = i;
            }
        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", n, m, temp2, mx);
    }

    return 0;
}
