#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while(t--) {
        int n,k,r,c;
        cin>>n>>k>>r>>c;

        char matrix[n][n];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                matrix[i][j] = '.';
            }
        }
        matrix[r-1][c-1] = 'X';
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout<<matrix[i][j];
            }
            cout<<endl;
        }
    }
}
