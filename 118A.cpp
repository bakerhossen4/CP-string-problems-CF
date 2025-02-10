https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;

bool Vowel( char ch ){

    if( ch == 'a' || ch == 'A' || ch == 'o' || ch == 'O' || ch == 'Y' || ch == 'y' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'U' || ch == 'u'  ) return true;
    else return false;

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    for( int i = 0; i < s.size(); i++ ){
        if( Vowel( s[i]) ){
            continue;
        }
        else{
            cout << ".";
            if( isupper( s[i] ) ){
                char c = tolower( s[i] );
                cout << c;
            }
            else cout << s[i];
        }
    }

    return 0;

}
 
