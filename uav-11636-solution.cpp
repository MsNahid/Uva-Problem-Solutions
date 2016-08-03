#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int i, j = 0, num, sum;

    while((scanf("%d", &num) == 1)){
        if(num < 0) break;
        sum = 1;
        j++;
        for(i = 1; ; i++){
            if(num == 1){
                printf("Case %d: 0\n", j);
                break;
            }
            sum += sum;
            if(sum >= num && num != 1){
                printf("Case %d: %d\n", j, i);
                break;
            }
        }
    }

    return 0;
}
