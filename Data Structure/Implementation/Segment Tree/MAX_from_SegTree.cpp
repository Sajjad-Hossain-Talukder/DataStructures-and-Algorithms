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

    if ( a > f || b < i ) return 0 ;
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
