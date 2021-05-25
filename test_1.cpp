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
    int n;
    string s;
    while(cin >> n >> s)
    {
        unordered_map<string, int> m;
        for(auto i=0; i<=s.size()-n; i++)
        {
            string substr(s.substr(i, n));
            m[substr]++;
        }
        int max =0;
        auto i = m.begin();
        auto pass = i;
        for(; i!=m.end(); i++)
        {
            if(i->second > max)
            {
                max = i->second;
                pass = i;
            }   
        }
        cout << pass->first << "\n";
    }

    return 0;
}

