#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int i, j, n, cont,temp, T;
    int item[55];

    scanf("%d", &T);

    while(T--){
        scanf("%d", &n);
        for(i = 0; i < n; i++) scanf("%d", &item[i]);
        cont = 0;

        for(i = 1; i < n; i++){
            for(j = n - 1; j >= i; j--){
                if(item[j - 1] > item[j]){
                    cont++;
                    temp = item[j - 1];
                    item[j - 1] = item[j];
                    item[j] = temp;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cont);
    }

    return 0;
}
