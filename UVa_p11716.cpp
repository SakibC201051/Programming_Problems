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
    cin.ignore();

    while(t--)
    {
        string en_text, de_text;
        getline(cin, en_text);

        int len = en_text.size();
        int sqrt_len = sqrt(len);

        if(sqrt_len != sqrt(len))
            cout<<"INVALID\n";
        else
        {
            for(int i=0; i<sqrt_len; i++)
            {
                for(int j=i, k=0; k<sqrt_len; j+=sqrt_len, k++)
                    de_text.push_back(en_text[j]);
            }
            
            cout<<de_text<<'\n';
        }
        
    }
    return 0;
}








