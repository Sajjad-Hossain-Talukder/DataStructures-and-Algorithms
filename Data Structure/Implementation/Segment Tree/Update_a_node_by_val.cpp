//Complexity : O ( nlogn )

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
        return ; 
        
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

    int pos , val  ;
    cin >> pos >> val ;

    update(segTree , 0 , 0, n-1  , pos , val ) ;

    for(int i = 0 ; i < n*3 ; i++ )
        cout << segTree[i] << " ";
    cout << endl;


return 0;
}

/*

7
4 -9 3 7 1 0 2

*/
