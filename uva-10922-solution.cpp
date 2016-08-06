#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

#define sz 1001
char str[sz + 4];

int main(){

    long long int i, sum, degree, temp;

    while(gets(str)){

        if(!strcmp(str, "0")) break;
        sum = 0;
        degree = 1;

        for(i = 0; str[i]; i++){
            sum += (str[i] - '0');
        }
        if(sum % 9  != 0){
            printf("%s is not a multiple of 9.\n", str);
        }else{

            while(sum > 9){
                degree++;
                temp = sum;
                sum = 0;

                while(temp > 9){
                    sum += (temp % 10);
                    temp /= 10;
                }
                sum += temp;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", str, degree);
        }
    }

    return 0;
}
