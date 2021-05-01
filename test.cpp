#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // CODE commences from here
    string en_str;
    int len;
    while(getline(cin, en_str))
    {
        len = en_str.size();
        for(int i=0; i<len; i++)
        {
            en_str[i] = en_str[i]-7;
        }
        cout<<en_str<<"\n";
    }
    return 0;
}








