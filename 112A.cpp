#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s,t;
    cin >> s >> t;

    for( int i = 0; i < s.size(); i++ ){
        char p = tolower( s[i] );
        char q = tolower( t[i] );
        if( p < q ){
            cout << "-1";
            return 0;
        }
        else if( p > q ){
            cout << "1";
            return 0;
        }
    }
    cout << "0";

    return 0;

}

