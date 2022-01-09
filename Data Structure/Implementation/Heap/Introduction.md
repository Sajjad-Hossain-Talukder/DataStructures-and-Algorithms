### Heap Data Structure 

**A Heap is a special Tree-based data structure in which the tree is a complete binary tree.** Generally, Heaps can be of two types: 
> **Max-Heap** : In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

> **Min-Heap** : In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

<img src="../../../images/heap.png" >

#### Video Resource : https://www.youtube.com/watch?v=HqPJF2L5h9U

### Heapify : 

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void heapify( vector<ll>&heap ){
    ll d = heap.size() - 1 , l , r , j ;
    
    for(int i = d ; i >= 0 ; i-- ){
        l = 2*i + 1 , r = 2*i + 2 , j = i ;
        while(1){
            if(r <= d ){
                if( heap[l] > heap[j] && heap[l] > heap[r] ) {
                    swap(heap[l],heap[j]);
                    j = l ;
                }
                else if ( heap[r] > heap[j] && heap[r] > heap[l] ) {
                    swap(heap[r],heap[j]);
                    j = r ;
                }
                else break;
            }
            else if ( l <= d ) {
                if ( heap[l] > heap[j] ){
                    swap(heap[l],heap[j]);
                    j = l ;
                }
                else break;
            }
            else break ;
            l = 2*j + 1 , r = 2*j + 2 ;
        }
    }
}


int main(){
    vector<ll> heap = {5,10,30,20,35,40 };
    heapify(heap);
    for(auto a : heap) cout << a <<" "; cout << endl;
return 0 ;
}




```
