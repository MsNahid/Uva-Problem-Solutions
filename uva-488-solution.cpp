#include<stdio.h>

/* For this problem amplitude does not exceed 9, so you can cheat <span class="wp-smiley wp-emoji wp-emoji-smile" title=":)">:)</span> */
const char *a[] = {"", "1", "22", "333", "4444", "55555", "666666", "7777777", "88888888", "999999999"};

int main(){
    register unsigned n, i, j, k;
    scanf("%u", &n);

    while(n--){
        unsigned amp, times;
        scanf("%u%u", &amp, &times);

        while(times--){
            for(i = 1; i < amp; ++i)
                /* Just print the predefined strings */
                printf("%s\n", a[i]);

            for(k = i; k; --k)
                printf("%s\n", a[k]);

            if(times || n)
                printf("\n");
        }
    }
    return 0;
}
