#include <iostream>
#include <cstdio>

using namespace std;

#define sz 5000

int multiply(int x, int res[], int res_size);

void factorial(int n){

    int i, x, res_size;
    int res[sz];

    res[0] = 1;
    res_size = 1;

    for(x = 2; x <= n; x++){

        res_size = multiply(x, res, res_size);
    }

    for(i = res_size - 1; i > 0; i--){
        printf("%d", res[i]);
    }

    printf("%d\n", res[0]);
}

int multiply(int x, int res[], int res_size){

    int i, carry, prod;
    carry = 0;

    for(i = 0; i < res_size; i++){

        prod = x * res[i] + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while(carry){

        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }

    return res_size;
}

int main(){

    int n;

    while(scanf("%d", &n) == 1){

        printf("%d!\n", n);
        factorial(n);

    }

    return 0;
}


