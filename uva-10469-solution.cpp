#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    unsigned int a, b;

    while(scanf("%u%u", &a, &b) == 2){
        printf("%u\n", a ^ b);
    }

    return 0;
}
