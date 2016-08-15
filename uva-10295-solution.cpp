#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define sz 1250

struct hay{

    string s;
    int d;
}ara[sz + 5];

inline bool comp(const struct hay a, const struct hay b){

    if(a.s > b.s) return false;

    return true;
}
int binary(const string str, const int m){

    int low, mid, high, loc;
    low = 0;
    high = m - 1;

    while(low <= high){

        mid = (low + high) / 2;

        if(ara[mid].s == str)
            return mid;
        else if(ara[mid].s < str)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main(){

    int i, j, k,m, n;
    long long dollar;
    string str;

    while(scanf("%d%d", &m, &n) == 2){

        for(i = 0; i < m; i++){
            cin >> ara[i].s >> ara[i].d;
        }

        sort(ara, ara + m, comp);

        /*printf("\n\nsorted\n\n");

        for(i = 0; i < m; i++){
            cout << ara[i].s <<" "<< ara[i].d << "\n";
        }
        */

        for(i = 0; i < n; i++){
            dollar = 0;

            while(cin >> str && str != "."){
                k = binary(str, m);

                if(k != -1){
                    dollar = dollar + ara[k].d;
                }
            }

            printf("%lld\n", dollar);
        }
    }

    return 0;
}


