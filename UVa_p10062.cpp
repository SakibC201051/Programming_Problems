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
    
    char str[1010];
    bool flag = false;
    
    while(gets(str))
    {
        if(flag) { cout<<"\n"; }
        int len = strlen(str);
        int max = len;

        int freq[150];
        memset(freq, 0, sizeof(freq)); //array got initialized with 0

        for(int i=0; i<len; i++)
            freq[str[i]]++;

        for(int j=1; j<=max; j++)
        {
            for(int k=128; k>=32; k--)
            {
                if(freq[k]==j)
                    cout<<k<<" "<<j<<"\n";
            }
        }
        flag = true;
    }
    return 0;
}
