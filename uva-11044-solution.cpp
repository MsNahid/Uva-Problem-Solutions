#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;

#define beams 3

int main(){

    long long m, n, x, sonar;
    int tc;

    scanf("%d", &tc);

    while(tc--){

        scanf("%lld%lld", &n, &m);

        n /= beams;
        m /= beams;

        sonar = n * m;

        printf("%lld\n", sonar);
    }

    return 0;
}
