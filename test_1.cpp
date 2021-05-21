#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
typedef char str;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // CODE commences from here
    string s;
    while(getline(cin, s))
    {
        stringstream ss(s);
        bool space = 0;
        while(ss >> s)
        {
            if(space) cout << " ";
            space = 1;
            for(int i=s.size()-1; i>=0; i--)
                cout << s[i];
        }
        cout << "\n";
    } 
    return 0;
}

