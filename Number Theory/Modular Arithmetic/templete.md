### Modular Arithmetic Templete

```

void modnor(ll &x){
    x %= mod ;
    if(x<0) x+=mod;
}
ll modadd(ll x , ll y ){
    x%=mod , y%=mod ; 
    modnor(x);modnor(y); 
    return (x+y)%mod ; 
}

ll modsub(ll x , ll y ){
    x%=mod , y%=mod ; 
    modnor(x);modnor(y); 
    return modnor(x-y) ;
}

ll modmul(ll x , ll y ){
    x%=mod , y%=mod ; 
    modnor(x);modnor(y); 
    return (x*y)%mod ; 
}

ll modpow(ll a , ll b ){
    ll res = 1 ;
    while(b){
        if(b&1) res = modmul(res,a);
        a = modmul(a,a);
        b >>= 1 ;
    }
    return res ;
}

ll modinverse(ll x){
    return modpow(x,mod-2); 
}

ll moddiv( ll x , ll y ){
    return modmul(x,modinverse(y)); 
} 


```
