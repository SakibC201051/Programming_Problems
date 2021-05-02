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
    string sentences[102];//string array
    int pos=0, longest_sentence=0;

    while(getline(cin, sentences[pos]))
    {
        if(sentences[pos].size() > longest_sentence) //saving size of the longest sentence
            longest_sentence = sentences[pos].size();
        
        pos++;
    }

    for(int i=0; i<longest_sentence; i++)
    {
        for(int j=pos-1; j>=0; j--)
        {
            if(sentences[j].size() > i)
                cout<<sentences[j][i];
            else
                cout<<' ';
        }
        cout<<"\n";
    }
    return 0;
}








