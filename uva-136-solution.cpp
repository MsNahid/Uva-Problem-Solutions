#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 1500
long long ar[sz + 5];

int main(){

    long long a, b, c, d;
    int i, j, k, t;

    k = 2;
    ar[sz + 5] = {0};
    ar[1] = 1;

    a = 2, b = 3, c = 5;
    i = j = t = 1;

    while(ar[1500] == 0){

        if(a < b && a < c){
            ar[k++] = a;
            i++;
            a = ar[i] * 2;

        }else if(b < a && b < c){

            ar[k++] = b;
            j++;
            b = ar[j] * 3;

        }else if(c < a && c < b){

            ar[k++] = c;
            t++;
            c = ar[t] * 5;
        }

        if(a == b){

            i++;
            a = ar[i] * 2;

        }else if(b == c){

            j++;
            b = ar[j] * 3;

        }else if(c == a){

            t++;
            c = ar[t] * 5;
        }
    }

    printf("The 1500'th ugly number is %lld.\n", ar[1500]);

    return 0;

}
