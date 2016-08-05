#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define sz 10000001
int ara[sz + 5], ara2[sz + 5];

int binary(int item, int ed);

int main(){

    int i, n, m, cont;

    while(scanf("%d%d", &n, &m) == 2){

        if(n == 0 && m == 0) break;
        cont = 0;

        for(i = 0; i < n; i++) scanf("%d", &ara[i]);
        for(i = 0; i < m; i++){
            scanf("%d", &ara2[i]);
            if(binary(ara2[i], n - 1)){
                cont++;
            }
        }

        /*for(i = 0; i < m; i++){
            if(binary(ara2[i],n-1))
                cont++;
        }
        */

        printf("%d\n", cont);
    }

    return 0;
}
int binary(int item,int ed)
{
   int beg, mid, loc;
   beg = 0;
   mid = (beg + ed) / 2;

   while(beg <= ed && ara[mid] != item){
        if(item < ara[mid]){
            ed = mid - 1;
        }else{
            beg = mid + 1;
        }
        mid = (beg + ed) / 2;
   }
   if(ara[mid] == item){
       loc = 1;
   }else{
       loc = 0;
   }

   return loc;
}
