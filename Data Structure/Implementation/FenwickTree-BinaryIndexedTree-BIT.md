<details>
  <summary>Explanation: </summary>
<br>

  <a href="https://youtu.be/aAALKHLeexw?si=wDbOfdP-h4NTlU1z"> Source Link </a>

</details>

<details>
  <summary>Code: </summary>


```
const int sz = 1001;
int a[sz], tree[sz], n ;

void build_update(int i, int val){
  for( ; i<=sz; i+=(i&(i*(-1))) ) tree[i] += val ;
}

ll query(ll n){
    ll res = 0 ;
    for ( ; n > 0; n -= n & -n) res+=tree[n];
    return res ;
}

int main() {

    cin >> n ;

    memset(tree,0,sizeof(tree));
    fr(i,1,n+1) {
        cin >> a[i];
        build_update(i,a[i]);
        //fr(j,1,n+1) cout << tree[j] <<" "; cout << endl;
    }

    cout << query(7) << endl;

return 0 ;
}

```


</details>
