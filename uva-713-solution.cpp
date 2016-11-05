#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<map>
#include<set>

using namespace std;

string reve(string a){

    int j, proxy = 0;
    string st;

    for(j = a.length() - 1; j >= 0; j--){

        if(a[j] == '0'){
            if(proxy == 1){
                st += a[j];
            }
        }else{

            st += a[j];
            proxy = 1;
        }
    }

    return st;
}


string summing(string a, string b){

    int i, j, k, temp, carry;
    int len, len2, x, y, add;
    string c , e, st;
    //c = "";

    if(a.length() < b.length()){

        e = a;
        a = b;
        b = e;
    }
    carry = 0;

   for(i = 0; i < a.length(); i++){

        if(i < b.length()){

            x = a[i] - '0';
            y = b[i] - '0';
            temp = x + y + carry;
            add = temp % 10;
            c += add + '0';

            carry = temp / 10;
            if(i == a.length() - 1 && carry == 1) c += '1';



        }else{

            x=a[i]-'0';
            temp = x + carry;
            add = temp % 10;
            c += add +'0';

            carry = temp / 10;
            if(i == a.length()-1 && carry == 1) c +='1';
        }


    }

    if(c[0] == '0'){
        st = reve(c);

        return reve(st);
    }

    return c;
}

int main(){

    int i, j, tc;
    string s, st, str;

    cin >> tc;

    while(tc--){

       //for(i = 0; i < tc; i++){

            cin>>s>>st;

            cout << summing(s, st) << endl;
        //}

    }

    return 0;
}
