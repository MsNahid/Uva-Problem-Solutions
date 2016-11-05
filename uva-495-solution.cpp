#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>

using namespace std;

string reve(string a){

    string st = "";
    int i, j;

    for(i = 0, j = a.length() - 1; i < a.length(); i++, j--) st += a[j];

    return st;
}

string summing(string a, string b){

    string s, st, str, c, e;
    int add, sum, carry;
    int i, j, k, x, y;

    s = reve(a);
    st = reve(b);

    if(s.length() < st.length()){

        e = s;
        s = st;
        st = e;
    }
    carry = 0;

    for(i = 0; i < s.length(); i++){

        if(i < st.length()){

            x = s[i] - '0';
            y = st[i] - '0';
            sum = x + y + carry;
            add = sum % 10;
            c += add + '0';
            carry = sum / 10;

            if(i == s.length() - 1 && carry == 1) c += '1';

        }else{

            x = s[i] - '0';
            sum = x + carry;
            add = sum % 10;
            c += add + '0';
            carry = sum / 10;

            if(i == s.length() - 1 && carry == 1) c += '1';
        }
    }

    str = reve(c);

    return str;
}

int main(){

    map <int, string> mp;
    //char mp[100];
    mp[0] = "0";
    mp[1] = "1";

    int i, j, n;
    string sum, s, st;

    for(i = 2; i <= 5001; i++){

        mp[i] = summing(mp[i - 1], mp[i - 2]);
    }

    while(scanf("%d", &n) == 1){

        cout<<"The Fibonacci number for "<<n<<" is "<<mp[n]<<endl;
        //printf("The Fibonacci number for %d is %s\n", n, mp[n]);
    }

    return 0;

}
