# Segment Tree

<details>
  <summary>Build Tree - Sum </summary>
  <img src="SegmentTreeBuild 2.png">
</details>


<details>
  <summary>Build Tree - Sum ( Code ) </summary>
  
  ```
  
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void buildTree ( int *ar , int* segTree , int n , int i , int f  ){

        cout << n << " "<< i <<" "<< f << endl;
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

int main(){

    int ar[] = {4,-9,3,7,1,0,2};

    int segTree[ 50 ] ; // segTree array size shuold be three times given array size
    memset(segTree,0,sizeof(segTree));

    buildTree (ar,segTree,0,0,6);


    for(int i = 0 ; i < 50 ; i++ ){
        cout << segTree[i] << " ";
    }
    cout << endl;

return 0;
}

  
  ```
  
  
</details>
