#include <bits/stdc++.h>
using namespace std;

bool vowel( char ch ){
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) return true;
    else return false;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector < int > v = { 5, 7, 5 };
    int cnt = 0, ans = 0;
    while( cnt < 3 ){
        string s;
        getline( cin, s );
        int c = 0;
        for( auto a : s ){
            if( vowel( a ) ) c++;
        }
        if( v[cnt] == c ) ans++;
        cnt++;
    }
    if( ans == 3 ) cout << "YES\n";
    else cout << "NO\n";

    return 0;

}

