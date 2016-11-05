#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

#define SZ 50000
char str[SZ + 5];

int main(){

    int i, j, k, l;
    int tc, n;
    //map <char , int> mp;

    scanf("%d", &n);
    getchar();

    while(n--){

        gets(str);
        l = 0;
        k = 0;

        for(i = 0; str[i]; i++){
            if(str[i] == 'M'){
                k++;
            }else if(str[i] == 'F'){
                l++;
            }
        }

        if((k == l ) && (k != 1 && l != 1)) puts("LOOP");
        else puts("NO LOOP");
    }

    return 0;
}


