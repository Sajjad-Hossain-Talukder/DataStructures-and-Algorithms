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
    while(i<=n){
        //cout << i << " " << val << endl;
        if(i>n) return;
        tree[i] += val ;
        i+=(i&(i*(-1)));
    }
}

ll query(ll n){
    int x = 1 ;
    ll res = 0 ;
    while(n>=x){
        cout << n <<" "<< x <<  endl;
        if(n&x){
            res+=tree[n];
            n = n&(~x);
        }
        x<<=1;
    }
    cout << res << endl;
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
