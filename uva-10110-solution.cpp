#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    long long int num, sqrtN;

    while((scanf("%lld", &num) == 1) && num){
        sqrtN = sqrt(num);

        if(sqrtN * sqrtN == num) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
