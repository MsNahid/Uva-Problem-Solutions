#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;

#define SZ 50000
char str[SZ + 10];

int main(){

   long long n, i, j, len;

    scanf("%lld", &n);

    while(n--){

        getchar();
        scanf("%s", str);
        len = strlen(str);

       if(!(strcmp(str, "1")) || !(strcmp(str, "4")) || !(strcmp(str, "78"))){

             putchar('+');
             putchar('\n');

       }else if(str[len - 1] == '5' && str[len - 2] == '3'){

            putchar('-');
            putchar('\n');

       }else if(str[0] == '9' && str[len - 1] == '4'){

            putchar('*');
            putchar('\n');

       }else if(str[0] == '1' && str[1] == '9' && str[2] == '0'){

           putchar('?');
           putchar('\n');

       }

    }

    return 0;
}
