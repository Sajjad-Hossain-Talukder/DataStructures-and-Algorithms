

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;

ll dp[1005][1005];


int main(){
    string s ,p  ;
    cin >> s >> p ;

    fr(i,0,s.size()){
        fr(j,0,p.size()){
            if (s[i] == p[j])   dp[i+1][j+1] = dp[i][j]  + 1  ;
            else dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
        }
    }

    // Printing DP Table : 
    
    fr(i,0,s.size()+1){
        fr(j,0,p.size()+1){
            cout << dp[i][j] <<" ";
        }
        cout << endl;
    }

    // Resulting LCS : 
    
    ll r = s.size() , c = p.size() ;
    string ans ;
    while(1){
            cout << r <<" "<<c << endl;
        if ( !dp[r-1][c-1] && !dp[r-1][c] && !dp[r][c-1] ){
            if(dp[r][c]) ans+=s[r-1];
            break;
        }

        else if( dp[r-1][c-1] == dp[r][c-1] && dp[r-1][c-1] == dp[r-1][c] ) {
            if ( dp[r-1][c-1] != dp[r][c]) {
                    ans+=s[r-1] ;
                    r-=1 , c-=1;
            }
            else r-=1;
        }
        else {
            if ( dp[r][c-1] > dp[r-1][c] ) c-=1;
            else r-=1;
        }
    }
    reverse(ans.begin(),ans.end());
    
    cout <<" LCS :  "<< ans << endl;
    
    cout <<"LCS length : " << dp[s.size()][p.size()] << endl;


return 0 ;
}




```
