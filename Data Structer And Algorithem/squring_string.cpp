#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int b;
    string m;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        b = m.size();
    if(b % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else if (m.substr(0, b / 2) == m.substr(b / 2)){
        cout << "YES" << endl;
    }
    else{
    	cout << "NO" << endl;
	}
}
}