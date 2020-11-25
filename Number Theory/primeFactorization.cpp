// Time Complexity : O(sqrt(n)) . For get Time Complexity : O(logn) , use Sieve .

vector<ll>v;
void primeFactor ( ll n ){

    while( n%2 == 0){
        v.pb(2);
        n/=2;
    }
    for(ll i = 3 ; i*i <= n ; i+=2 ){
        while(n%i==0){
            v.pb(i);
            n/=i;
        }
    }
    if(n>1)  v.pb(n);
}

int main(){
    ll n;
    cin>>n;
    primeFactor(n);
    for(auto a : v)
        cout<<a<<" ";cout<<endl;
return 0;
}
