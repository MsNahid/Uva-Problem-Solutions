#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 5842

long long ar[sz + 2];

void humble(){

    long long a , b, c, d;
    int i, j, k, t, u;

    ar[1] = 1;
    k = 2;
    a = 2, b = 3, c = 5, d = 7;
    i = j = t = u = 1;

    ar[sz + 2] = {0};

    while(ar[5842] == 0){

        if(a < b && a < c && a < d){

            ar[k++] = a;
            i++;
            a = ar[i] * 2;

        }else if(b < a && b < c && b < d){

            ar[k++] = b;
            j++;
            b = ar[j] * 3;

        }else if(c < a && c < b && c < d){

            ar[k++] = c;
            t++;
            c = ar[t] * 5;

        }else if(d < a && d < b && d < c){

            ar[k++] = d;
            u++;
            d = ar[u] * 7;
        }

        if(a == b || a == c){

            i++;
            a = ar[i] * 2;

        }else if(b == c || b == d){

            j++;
            b = ar[j] * 3;

        }else if(c == a || c == d){

            t++;
            c = ar[t] * 5;

        }else if(d == a || d == b){

            u++;
            d = ar[u] * 7;
        }

    }
}

int main(){

    humble();

    int i, j, k, n;

    while(scanf("%d", &n) && n){

        if(n % 100 > 10 && n % 100 < 20)
            printf("The %dth humble number is %d.\n", n, ar[n]);
        else if(n % 10 == 1)
            printf("The %dst humble number is %d.\n", n, ar[n]);
        else if(n % 10 == 2)
            printf("The %dnd humble number is %d.\n", n, ar[n]);
        else if(n % 10 == 3)
            printf("The %drd humble number is %d.\n", n, ar[n]);
        else
             printf("The %dth humble number is %d.\n", n, ar[n]);

    }

    return 0;
}
