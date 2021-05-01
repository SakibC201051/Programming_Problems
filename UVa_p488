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
    int t;
    cin>>t;
    
    while(t--)
    {
        int amp, freq;
        cin>>amp>>freq;
        while(freq--)
        {
            for(int i=1, k=1; i<=amp; i++, k++)
            {
                for(int j=1; j<=k; j++)
                {
                    cout<<k;
                }
                cout<<"\n";
            }

            for(int i=1, k=amp-1; i<=amp-1; i++, k--)
            {
                for(int j=1; j<=k; j++)
                {
                    cout<<k;
                }
                cout<<"\n";
            }
            if(freq) { cout<<"\n";}
        }
        if(t) { cout<<"\n"; }
    }
    return 0;
}
