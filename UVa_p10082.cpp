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
        unordered_map<char, char> m
        {
        {'1','`'},{'2','1'},{'3','2'},{'4','3'},{'5','4'},{'6','5'},{'7','6'},{'8','7'},{'9','8'},{'0','9'},{'-','0'},{'=','-'},
        {'W','Q'},{'E','W'},{'R','E'},{'T','R'},{'Y','T'},{'U','Y'},{'I','U'},{'O','I'},{'P','O'},{'[','P'},{']','['},{'\\',']'},
        {'S','A'},{'D','S'},{'F','D'},{'G','F'},{'H','G'},{'J','H'},{'K','J'},{'L','K'},{';','L'},{'\'',';'},
        {'X','Z'},{'C','X'},{'V','C'},{'B','V'},{'N','B'},{'M','N'},{',','M'},{'.',','},{'/','.'}
        };
        for(auto i=s.begin(); i!=s.end(); i++)
        {
            if(*i!=' ')
                cout << m[*i];
            else cout << " ";  
        }
        cout << "\n";
    }

    return 0;
}

