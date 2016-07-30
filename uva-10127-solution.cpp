#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(){

   int num, rem, cont, k;

   while(scanf("%d", &num) == 1){
     cont = rem = k = 1;
     while(k){
        if(k < num){
           rem = (rem * 10) + 1;
           cont++;
        }
        k = rem % num;
        rem = k;
      }
       printf("%d\n", cont);

    }

    return 0;
}
