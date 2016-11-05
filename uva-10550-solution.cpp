#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){

    int i,a,b,c;
	while(scanf("%d%d%d%d",&i,&a,&b,&c)&& (i||a||b||c))
    {
        int x = i-a;
        int y = b-a;
        int z = b-c;

		if(x<0)
            x+=40;
		if(y<0)
            y+=40;
		if(z<0)
            z+=40;

		printf("%d\n",9*(120+(x+y+z)));
	}

	return 0;
}

