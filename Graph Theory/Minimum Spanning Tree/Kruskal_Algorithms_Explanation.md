<details> 
  <summary> Example  : </summary>
  
  <br>
  
  **Step 0 :  1 . Delete Loop and Parallel Edge.**
  
  <br>
  
  <img src="../../images/kruskal_example.png">
  </details>
 
 <details> 
  <summary> Input  : </summary>
  
```
7 11
1 2 7
1 4 5 
2 4 9
2 3 8
2 5 7 
3 5 5 
4 5 15
4 6 6  
5 6 8 
5 7 9 
6 7 11 

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

```
<img src="../../images/krus1.png">
<img src="../../images/krus2.png">
<img src="../../images/krus3.png">

  
   </details>


 <details> 
  <summary> Source : </summary>
Vlog : 
Tech Dose : https://www.youtube.com/watch?v=_Iz-QLBGKpM <br>
Abdul Bari : https://www.youtube.com/watch?v=4ZlRH0eK-qQ

Blog : 
শাফায়েতের ব্লগ : http://www.shafaetsplanet.com/?p=825
  
<img src="../../images/krus4.png">

<img src="../../images/krus5.png">

<img src="../../images/krus6.png">

<img src="../../images/krus7.png">
  
  </details>


 <details> 
  <summary> Code : </summary>
  
  ```

#include<bits/stdc++.h>
#define ll             int
#define pb             push_back
#define ff             first
#define ss             second
using namespace std;

int findpar(int par[],int i ){
    if(i==par[i]) return i ;
    par[i] = findpar(par,par[i]);
    return par[i];
}

int main() {

    int n, e, x, y, cst;
    cin >> n >> e ;

    vector< pair<ll,pair<ll,ll>> >  grp ;
    vector< pair<int,int> > resultant_edge  ;

    int par[n+1] , cnt[n+1];
    for( int i = 0 ; i<=n ; i+=1 ) par[i] = i , cnt[i] = 1 ;


    for(int i = 0 ; i < e ; i+=1 ){
        cin >> x >> y >> cst ;
        grp.pb({cst,{x,y}});
    }

    sort(grp.begin(),grp.end());


    for(auto p : grp ){
        cst = p.first , x = p.second.first , y =  p.second.second ;

        int par_x = findpar(par,x);
        int par_y = findpar(par,y);

        if( par_x != par_y ){
            resultant_edge.pb({x,y});
            if(cnt[par_x]>=cnt[par_x]){
                par[par_y] = par_x;
                cnt[par_x]+=cnt[par_y];
                cnt[par_y] = 0 ;
                par[y] = findpar(par,y);
            }
            else {
                par[par_x] = par_y ;
                cnt[par_y]+=cnt[par_x];
                cnt[par_x] = 0 ;
                par[x] = findpar(par,x);

            }
        }
    }

    for(auto x : resultant_edge ) cout << x.ff  << " " << x.ss << endl;

return 0 ;
}


/*
Graph For testing : 
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

7 11
1 2 7
1 4 5 
2 4 9
2 3 8
2 5 7 
3 5 5 
4 5 15
4 6 6  
5 6 8 
5 7 9 
6 7 11 

*/
  ```

 </details> 
