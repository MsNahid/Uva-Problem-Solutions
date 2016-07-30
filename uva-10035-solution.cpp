#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int a[10], b[10], c[10];

int main(){

    int i, j,cont;
    int num, num2, temp;

    while((scanf("%d %d", &num, &num2) == 2) && (num != 0 || num2 != 0)){

        for(i = 0; i < 10; i++){
            a[i] = 0;
            b[i] = 0;
            c[i] = 0;
        }

        i = 9;
        cont = 0;
        while(num != 0){
            temp = num % 10;
            a[i--] = temp;
            num /= 10;

        }

        i = 9;
        while(num2 != 0){
            temp = num2 % 10;
            b[i--] = temp;
            num2 /= 10;
        }
        for(i = 8; i >= 0; i--){
            if(a[i + 1] + b[i + 1] + c[i + 1] >= 10){
                c[i] = 1;
            }
        }
       for(i = 0; i < 9; i++){
            if(c[i] == 1){
                cont++;
            }
       }
       if(cont > 1) printf("%d carry operations.\n", cont);
       else if(cont == 1) printf("%d carry operation.\n", cont);
       else printf("No carry operation.\n");

    }

    return 0;
}
