#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input_test(a) scanf("%d", &a);

int largestPrimeDivisor(lli n)
{
  int lpd = -1; 
  lli check = 1, p = n;
    if(n%2==0 && n>2)
    {
        while(n%2==0)
        {
            n /= 2;
        }
        check++;
    }
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        
        while(n%i==0)
        {
            n /= i;
            lpd = i;
        }
        if(lpd==i) check++;   
        
    }
    if(n!=1 && check>1) lpd = n;
    else if(sqrt(p)==lpd) lpd = -1;
    else if(check==1) lpd = -1;

    return lpd;
}

int main(int argc, char* argv[])
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  lli n;
  while (cin >> n && n!=0)
  {
      if(n<0) n *= -1;
      cout << largestPrimeDivisor(n) << "\n";
  }
  
  return 0;
}
