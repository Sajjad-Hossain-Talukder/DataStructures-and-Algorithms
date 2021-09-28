### Explain :

To check Whether a graph's all node is  connected or not , just do DFS single time.
After completing DFS check visited[] , if there is "zero" , then this node is not visited
because of no connectivity . 
  
### Code : 

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
      
vector<int>graph[1000];
bool visited[1000];
      
void dfs( int n){
  if(visited[n]) return ;
    visited[n] = 1;
      for(auto a : graph[n]){
        if(!visited[a]){
          dfs(a);
        }
      }
}

int main(){

  int node,edge ,x,y,d;
  cin>>node>>edge;

  for(int i = 0 ; i< edge ; i+=1){
      cin>>x>>y;
      graph[x].pb(y);
      graph[y].pb(x);
      }
    
    dfs(1);

    d = *min_element(visited+1 , visited+node);

    if(d) cout<<"Connected Graph"<<endl;
    else cout<<"Not Connected Graph"<<endl;


    return 0;
}
      
      ```
