#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int x1, x2, y1, y2;

    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2)){

        if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;

        if(x1 == x2 && y1 == y2) puts("0");
        else if(abs(x1 - x2) == abs(y1 - y2)) puts("1");
        else if(x1 == x2 || y1 == y2) puts("1");
        else puts("2");
    }

    return 0;
}
