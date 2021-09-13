#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;


int main(){
    #ifndef CP
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll node , edge , cost , x , y ;
    cin >> node  >> edge ;

    vector< pair<int,int> > graph[node+1];


    for( int i = 1 ; i <= edge ; i++ ){
        cin >> x >> y >> cost ;
        graph[x].pb({y,cost});
        graph[y].pb({x,cost});
    }

    //Graph Representation : -----------------------
    for( int i = 1 ; i <= node ; i++ ){
        cout << i <<" :  " ;
        for( auto a : graph[i] )
            cout << a.first <<" "; cout << endl;
    }
    //----------------------------------------------


    multimap < ll , pair <ll,ll>  > mp ;
    vector < pair <ll,ll> > tree ;

    ll source = 1 ; 
    y = 1 ;
    

    bool visited[node+1]; 
    memset(visited,0,sizeof(visited)); 

    while (1) {     

        for(auto a : graph[y]) {
            if(!visited[a.first]){
                mp.insert({a.second,{y,a.first}});
            }
        }
            
        auto it = mp.begin();
        x = (it->second).first ; 
        y = (it->second).second ;

        if(!visited[y]){
            tree.pb(it->second);
            visited[y] = 1 ;
            visited[x] = 1 ;
        }

        mp.erase(it);
        if(mp.empty()) break;
        
    }

    for(auto a : tree)
        cout << a.first <<" "<< a.second << endl;

    //cout << cnt << endl;

return 0 ;
}



