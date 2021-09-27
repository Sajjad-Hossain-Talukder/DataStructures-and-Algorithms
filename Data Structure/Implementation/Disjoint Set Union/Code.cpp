#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;


int main(){
  
    ll n , e , x , y , cost ; 
    cin >> n >> e ; 

    map < ll , pair<ll,ll>  >  tp ; 
  
    ll parent[n+1];
    memset(parent,-1,sizeof(parent)); 


    fr(i,0,e){
        cin >> x >> y >> cost ; 
        tp[cost] = {x,y};
    }

    for(auto a : tp ){
        x = a.second.first ; 
        y = a.second.second ; 
        //cout << x <<" "<< y << endl;

        while( parent[x] > 0 || parent[y] > 0 ){
            if( parent[x] > 0 )
                x = parent[x];
            if( parent[y] > 0 )
                y = parent[y]; 
        }

        if( x != y ) {
            //cout << x <<" | "<< y << endl;
            //cout << parent[x] <<" "<< parent[y] << endl;

            if( parent[x] <= parent[y]){
                parent[x]+=parent[y] ;
                parent[y] = x ;
            }
            else {
                parent[y]+=parent[x] ;
                parent[x] = y ;
            }
            //cout << parent[x] <<" -- "<< parent[y] << endl;

        }

    }


    for(int i = 1 ; i <= n ; i++ )
        cout << parent[i] <<" " ; cout << endl;


    
return 0 ;
}

/*
8 9
1 2 1
1 3 7
2 4 5
2 5 6
3 4 2 
5 6 3
5 7 9 
6 8 8
7 8 4

*/
