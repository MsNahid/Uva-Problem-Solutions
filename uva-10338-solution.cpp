#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

#define sz 50
char str[sz];

unsigned long long int fact(int n){

    if(n == 1) return 1;
    else return n * fact(n - 1);
}
int main(){

    int i, j, k, tc;
    unsigned long long val, val2;
    int cont[30];

    scanf("%d", &tc);
    getchar();
    k = 1;

    for(i = 0; i < tc; i++){

        scanf("%s", str);
        getchar();


        for(j = 0; j <= 27; j++) cont[j] = 0;

        for(j = 0; j < strlen(str); j++){
            cont[str[j] - '0' - 16]++;
        }


        val = fact(strlen(str));

        for(j = 1; j <= 26; j++){
            if(cont[j] > 1){
                val2 = fact(cont[j]);
                val /= val2;
            }
        }

        printf("Data set %d: %llu\n", k, val);
        k++;
    }


    return 0;
}
