#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    // CODE commences from here
    int n, A[3005], jolly[3005];

    while(scanf("%d", &n)==1)
    {
        int flag = 1;

        for(int i=0; i<n; i++)
            cin>>A[i];

        for(int i=0; i<n-1; i++)
            jolly[i] = abs(A[i]-A[i+1]);


        sort(jolly, jolly+n-1);

        for(int i=0; i<n-1; i++)
        {
            if(jolly[i] != i+1)
            {
                flag = 0;
                break;
            }
        }
        if(flag) { cout<<"Jolly\n"; }
        else { cout<<"Not jolly\n"; }
    }
    return 0;
}








