#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int hh, mm, T;

    scanf("%d", &T);

    while(T--){
       scanf("%d:%d", &hh, &mm);
       hh = 11 - hh +(mm == 0);
       if(hh <= 0) hh += 12;
       if(mm != 0) mm = 60 - mm;

       printf("%02d:%02d\n", hh, mm);
    }

    return 0;
}
