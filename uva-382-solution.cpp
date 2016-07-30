#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int i, j, num, sum, itaration;
    int proxy = 0;

    while(scanf("%d", &num) == 1){

        sum = 0;
        itaration = num / 2 + 1;
        if(proxy == 0) printf("PERFECTION OUTPUT\n");
        proxy = 1;
        if(num == 0){
            printf("END OF OUTPUT\n");
            break;
        }

        for( i = 1; i < itaration; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        if(sum == num) printf("%5d  PERFECT\n", num);
        else if(sum > num) printf("%5d  ABUNDANT\n", num);
        else printf("%5d  DEFICIENT\n", num);

    }

    return 0;
}
