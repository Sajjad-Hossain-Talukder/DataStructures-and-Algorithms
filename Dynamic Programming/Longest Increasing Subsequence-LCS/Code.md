### Code  : 


<details>
<summary> LCS : Length & lCS itself -  O(N^2)  </summary>
    
```
    
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;


int main(){
    ll n , d , tmp  , pre = INT_MAX ;
    cin >> n ;
    ll ar[n] ;

    fr(i,0,n) cin >> ar[i] ;

    ll dp[n] ;
    fill (dp,dp+n,1);

    deque < int > lcs ;

    fr(i,1,n){
        fr(j,0,i){
            if ( ar[j] < ar[i]  ) dp[i] = max (dp[i],dp[j]+1);
        }
    }

    d = *max_element(dp,dp+n) ;
    tmp = d ;



    rfr(i,n-1,0){
        if ( !tmp ) break;
        if ( dp[i] == tmp && ar[i] < pre ){
            lcs.push_front(ar[i]);
            pre = ar[i] ;
            tmp-=1;
        }
    }

    for( auto a : lcs ) cout << a <<" "; cout <<endl;

return 0 ;
}

```
</details>

<details>
    
<summary> LCS : Length -  O(Nlog(N))  </summary>
    
    
```
    
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define fr(i,s,e)      for(ll i=s;i<e;i++)
#define rfr(i,e,s)     for(ll i=e;i>=s;i--)
#define endl           "\n"
#define sz(a)          (ll)a.size()
#define mem1(a)        memset(a,-1,sizeof(a))
#define pii            pair<ll,ll>
#define ff             first
#define ss             second
#define mod            1000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main() {
    ll n , k = 0 ;
    cin >> n ;
    ll a[n];
    fr(i,0,n) cin >> a[i] ;
    vector<ll>v;
    v.pb(a[0]);

    fr(i,1,n){
        if(a[i]>v[k]){
            v.pb(a[i]);
            k+=1;
        }
        else {
            ll lo = 0 , hi = k , n , p ;
            while( lo <= hi ){
                ll m = (lo+hi)/2 ;
                //cout << lo <<" - "<< hi <<  " - " << m << endl;
                if(v[m]>a[i]){
                    hi = m-1 ;
                    p = m ;
                }
                else if( v[m] == a[i] ) {
                    p = m ;
                    break;
                }
                else lo = m+1 ;
            }
            v[p] = a[i] ;
        }

        //for(auto x : v ) cout << x << " - "; cout << endl;
    }
    cout <<"Length : "<< v.size() << endl;

return 0 ;
}


```
    
</details>
    
<details>
    
    <summary> PROBLEM LINK :  </summary>
    
    <ul> 
        <li>https://cses.fi/problemset/task/1145/</li>
        <li>https://atcoder.jp/contests/arc149/tasks/arc149_b?lang=en</li>
    </ul>
    
</details>

