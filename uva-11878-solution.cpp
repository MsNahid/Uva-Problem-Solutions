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

    int a, b, c, ans, cont = 0;
    char ch, ch2;

    while(scanf("%d%c%d%c%d", &a, &ch, &b, &ch2, &c) != EOF){

        getchar();
        if(ch == '+'){
            ans = a + b;
        }else{
            ans = a - b;
        }

        if(ans == c) cont++;
    }

    printf("%d\n", cont);
}
