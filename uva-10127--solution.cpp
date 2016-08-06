#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

    int num, sum, temp, mod, cont;

    while(scanf("%d", &num) == 1){
        cont = mod = 1;


        while(mod % num != 0){
            mod = (mod * 10 + 1) % num;
            cont++;
        }
        printf("%d\n", cont);
    }

    return 0;
}
