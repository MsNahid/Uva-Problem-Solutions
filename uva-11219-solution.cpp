#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    int i, tc;
    int dt, mt, yt, db, mb, yb, age;

    scanf("%d", &tc);

    for(i = 0; i < tc; i++){
        scanf("%d/%d/%d", &dt, &mt, &yt);
        scanf("%d/%d/%d", &db, &mb, &yb);

        if(dt < db) mt--;
        if(mt < mb) yt--;

        age = yt - yb;

        if(age < 0) printf("Case #%d: Invalid birth date\n", i + 1);
        else if(age > 130) printf("Case #%d: Check birth date\n", i + 1);
        else printf("Case #%d: %d\n", i + 1, age);

    }

    return 0;

}
