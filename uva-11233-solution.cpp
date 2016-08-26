#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <cstdlib>

using namespace std;


struct deli{

    char s[30];
    char p[30];

}a[25];

inline bool comp(const struct deli a, const struct deli b){

   if(strcmp(a.s, b.s) > 0) return false;

    return true;
}
int binary(const char str[], const int l){

    int low, high, mid;
    low = 0;
    high = l - 1;

    while(low <= high){

        mid = (low + high) / 2;

        if(strcmp(a[mid].s, str) == 0) return mid;
        else if(strcmp(a[mid].s, str) < 0) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

bool isConsonant(const char ch){

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return false;

    return true;


}

int main(){

    int i, j, k, l, n;
    char str[50];

    scanf("%d%d", &l, &n);

    for(i = 0; i < l; i++){

        getchar();
        scanf("%s%s", &a[i].s, &a[i].p);
    }

     /*for sort */
     sort(a , a + l, comp);

     /*printf("\n\nSorted\n\n");
     for(i = 0; i < l; i++){
        printf("%s %s\n", a[i].s, a[i].p);
     }
     */
     for(i = 0; i < n; i++){

        getchar();
        scanf("%s",str);

        k = binary(str, l);

        if(k != -1){

            puts(a[k].p);

        }else{

            int len = strlen(str);

            if(str[len - 1] == 'y' && (isConsonant(str[len - 2]))){

                str[len - 1] = 'i';
                strcat(str, "es");

                puts(str);

            }else if(str[len - 1] == 'o' || str[len - 1] == 's' || str[len - 1] == 'x'){

                strcat(str, "es");

                puts(str);

            }else if(str[len - 1] == 'h'){

                if(str[len - 2] == 'c' || str[len - 2] == 's'){

                    strcat(str, "es");

                     puts(str);
                }
            }else{

                strcat(str, "s");

                puts(str);

            }


        }


     }

     return 0;

}
