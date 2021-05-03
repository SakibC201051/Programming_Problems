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
    while(1)
    {
        int n, sum_c, sum_r, count_c=0, count_r=0;
        cin>>n;
        if(n==0) { break; }
        int mat[n+2][n+2];
        int row, col;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cin>>mat[i][j];
        }
        for(int i=1; i<=n; i++)
        {
            sum_c=0;
            sum_r=0;
            for(int j=1; j<=n; j++)
            {
                sum_c += mat[j][i];
                sum_r += mat[i][j];
            }
            if(sum_r%2!=0)
            {
                row = i;
                count_r++;
            }
            if(sum_c%2!=0)
            {
                col = i;
                count_c++;
            }
        }
        if(count_r==0 && count_c==0)
            cout<<"OK\n";
        else if(count_r==1 && count_c==1)
            cout<<"Change bit ("<<row<<","<<col<<")\n";
        else
            cout<<"Corrupt\n";
    }
    return 0;
}








