#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

#define lint long long int
#define mode 1000000007

lint power(lint a,lint b,lint c) {
    if(b == 0) {
        return 1;
    }
    lint p = power(a,b/2,c)%c;
    p = (p*p) % c;

    return (b%2 == 0)?p:(a*p)%c;
}

int main() {
    int t;
    string ss;
    int n;

    cin>>ss;
    cin>>t;

    n = ss.length();

    lint fact[n+1],inverse[n+1];
    fact[0] = 1;
    inverse[0] = 1;

    for(int i=1;i<=n;i++) {
        fact[i] = (fact[i-1]*i) % mode;
        inverse[i] = power(fact[i],mode-2,mode);
    }

    int freq[n+1][26];

    memset(freq,0,sizeof(freq));

    for(int i=1;i<=n;i++) {
        freq[i][ss[i-1]-'a']++;
    }

    for(int i=2;i<=n;i++ ) {
        for(int j=0;j<26;j++) {
            freq[i][j]+=freq[i-1][j];
        }
    }

    while(t--) {
        int l , r;
        cin>>l>>r;
        lint demo = 1;
        lint nume=0;
        lint value = 0;
        lint odd = 0;
        lint even = 0;

        for(int i=0;i<26;i++) {
            value = freq[r][i]-freq[l-1][i];

            if(value%2 != 0) {
                odd++;
            }
            even += (value/2);
            demo =( (demo*inverse[value/2]) % mode);
        }
        nume = fact[even];
        lint rem = ( nume * demo)%mode;
        if(odd) {
            rem = (rem*odd)%mode;
        }
        cout<<rem<<endl;
    }
}
