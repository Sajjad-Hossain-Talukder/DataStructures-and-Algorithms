# Segment Tree

<details>
  <summary>Build Tree - Sum ( Explanation ) </summary> <br>
  <img src="SegmentTreeBuild 2.png">
</details>



<details>
  <summary>Query - Sum ( Explanation )</summary> <br>
  <img src="QueriesOnSegmentTree_return_SumOfRange 1.png">
  <br>
  <img src="QueriesOnSegmentTree_return_SumOfRange 2.png">
</details>


<details>
  <summary>Update - Single Node - Sum ( Explanation )</summary> <br>
  <img src="Update_a_node_by_val 1.png">
  <br>
  <img src="Update_a_node_by_val 2.png">
</details>


<details>
  <summary>Build Tree & Query & Update- Sum ( Code ) </summary>
  
  ```
  
Complexity : O ( nlogn )

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void buildTree ( int *ar , int* segTree , int n , int i , int f  ){
        if( i == f ){
            segTree[n] = ar[i] ;
            return ;
        }
        int l , m , r ;

        l = n*2+1;
        r = n*2+2;

        m = ( i+f )/2 ;

        buildTree(ar,segTree,l,i,m);
        buildTree(ar,segTree,r,m+1,f);

        segTree[n] = segTree[l] + segTree[r] ;
}
int query ( int segTree[] ,int n ,  int i , int f , int a , int b ){

    if ( a > f || b < i ) return 0 ;
    if ( i >= a && f <= b ) return segTree[n];

    int l , r , m , res1 , res2  ;

    l = n*2+1;
    r = n*2+2;

    m = ( i+f) / 2 ;

    res1 = query( segTree,l,i,m,a,b);
    res2 = query( segTree,r,m+1,f,a,b);

    return res1+res2;
}

void update( int segTree[] , int n , int a , int b , int pos , int val ){

    if ( pos < a || pos > b )  return ;
    if ( pos == a && pos == b ){
        segTree[n] += val;
        return ;
    }
    int l , r , m ;
    l = n*2+1 ;
    r = n*2+2 ;

    m = (a+b) / 2 ;

    update( segTree , l , a , m , pos , val ) ;
    update( segTree , r, m+1 , b , pos, val ) ;

    segTree[n] = segTree[l] + segTree[r];
    return ;

}


int main(){
    int n ;
    cin >> n ;
    int ar[n] ;
   // int ar[] = {4,-9,3,7,1,0,2};
    for( int i = 0 ; i < n ; i++ )
        cin >> ar[i] ;


    int segTree[ n*3 ] ; // segTree array size shuold be three times given array size
    memset(segTree,0,sizeof(segTree));

    buildTree (ar,segTree,0,0,n-1);

    for(int i = 0 ; i < n*3 ; i++ )
        cout << segTree[i] << " ";
    cout << endl;


    int pos , val  ;
    cin >> pos >> val ;
    update(segTree , 0 , 0, n-1  , pos , val ) ;

    int q ;
    cin >> q ;
    while ( q-- ){
        int a , b ;
        cin >> a >> b ;

        cout << query( segTree ,0, 0,n-1,  a , b ) << endl;
    }





return 0;
}

/*

7
4 -9 3 7 1 0 2

*/

  
  ```
 
</details>

  
  
  
  
<details>
  <summary>Build Tree - Maximum Element ( Explanation ) </summary> <br>
  <img src="MAX_ from _SegTree .png">
</details>


<details>
  <summary>Build Tree & Query - Maximum Element  ( Code  ) </summary>
  
  ```
  #include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void buildTree ( int *ar , int* segTree , int n , int i , int f  ){
        if( i == f ){
            segTree[n] = ar[i] ;
            return ;
        }
        int l , m , r ;

        l = n*2+1;
        r = n*2+2;

        m = ( i+f )/2 ;

        buildTree(ar,segTree,l,i,m);
        buildTree(ar,segTree,r,m+1,f);

        segTree[n] = segTree[l] > segTree[r] ? segTree[l] : segTree[r] ;
}


int query ( int segTree[] ,int n ,  int i , int f , int a , int b ){

    if ( a > f || b < i ) return INT_MIN ;
    if ( i >= a && f <= b ) return segTree[n];

    int l , r , m , res1 , res2  ;

    l = n*2+1;
    r = n*2+2;

    m = ( i+f) / 2 ;

    res1 = query( segTree,l,i,m,a,b);
    res2 = query( segTree,r,m+1,f,a,b);

    return res1 > res2?  res1 : res2 ;
}


int main(){
    int n ;
    cin >> n ;
    int ar[n] ;
    //int ar[] = {4,-9,3,7,1,0,2};
    for( int i = 0 ; i < n ; i++ )
        cin >> ar[i] ;


    int segTree[ n*3 ] ; // segTree array size shuold be three times given array size
    memset(segTree,0,sizeof(segTree));

    buildTree (ar,segTree,0,0,n-1);

    for(int i = 0 ; i < n*3 ; i++ )
        cout << segTree[i] << " ";
    cout << endl;

    int q ;
    cin >> q ;
    while ( q-- ){
        int a , b ;
        cin >> a >> b ;
        cout << query( segTree ,0, 0,n-1,  a , b ) << endl;
    }

return 0;
}

  
  ```
 
</details>
  
  
<details>
  <summary>Build Tree - Minimum Element ( Explanation ) </summary>
  <br>
  <img src="MIN_ from _SegTree.png">
</details>


<details>
  <summary>Build Tree & Query - Minimum Element ( Code ) </summary>
  
  ```
  
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void buildTree ( int *ar , int* segTree , int n , int i , int f  ){
        if( i == f ){
            segTree[n] = ar[i] ;
            return ;
        }
        int l , m , r ;

        l = n*2+1;
        r = n*2+2;

        m = ( i+f )/2 ;

        buildTree(ar,segTree,l,i,m);
        buildTree(ar,segTree,r,m+1,f);

        segTree[n] = segTree[l] < segTree[r] ? segTree[l] : segTree[r] ;
}
int query ( int segTree[] ,int n ,  int i , int f , int a , int b ){

    if ( a > f || b < i ) return INT_MAX ;
    if ( i >= a && f <= b ) return segTree[n];

    int l , r , m , res1 , res2  ;

    l = n*2+1;
    r = n*2+2;

    m = ( i+f) / 2 ;

    res1 = query( segTree,l,i,m,a,b);
    res2 = query( segTree,r,m+1,f,a,b);

    return res1 < res2 ?  res1 : res2 ;



}

int main(){
    int n ;
    cin >> n ;
    int ar[n] ;
   // int ar[] = {4,-9,3,7,1,0,2};
    for( int i = 0 ; i < n ; i++ )
        cin >> ar[i] ;


    int segTree[ n*3 ] ; // segTree array size shuold be three times given array size
    memset(segTree,0,sizeof(segTree));

    buildTree (ar,segTree,0,0,n-1);

    for(int i = 0 ; i < n*3 ; i++ )
        cout << segTree[i] << " ";
    cout << endl;

    int q ;
    cin >> q ;
    while ( q-- ){
        int a , b ;
        cin >> a >> b ;

        cout << query( segTree ,0, 0,n-1,  a , b ) << endl;
    }


return 0;
}
  

  
  ```
 
</details>
  
  

  
  
  
  
