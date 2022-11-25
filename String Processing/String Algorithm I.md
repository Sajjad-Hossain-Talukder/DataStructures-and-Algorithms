### Hashing a String
    
<details> 
  <summary> Expanation : </summary>
    
<br>
    
  |   |   |  
  |---|---|
  | ![1](https://user-images.githubusercontent.com/63524824/203860954-bef214a5-00d0-4f2b-8652-21fe910336ea.png)  |   ![image](https://user-images.githubusercontent.com/63524824/203861179-526f8bc4-ba06-457b-bd2b-d54026dbb3dd.png)  |

 
  
  <strong> Note : </strong>   Base and Mod value should be <b>co-prime</b>. 
  <br> 
  Probability of having same hash for two different string is <b> ( 1 / mod_value ) </b> . To minimize this prbability use a <b> reletively large  prime number </b>  
  In this case ,<b> 10<sup>9</sup>+7 </b> is safe to use. 
  
  To minimize it more, we may go for <b> Double Hashing </b>. <br>
  
  <b> Double Hashing : </b> It is a techinque in where two different ( base and mod ) pair to generate hash_value of a string and both together used to represent this string.<br>
 
  Let's say , 
  
  |   |   |  
  |---|---|
  |  base_1 = 27  | base_2 = 28   |  
  |  mod_1 = 10<sup>9</sup>+7  |  mod_2 = 10<sup>9</sup>+11   |  

  In this case , probability of having same Hash = <b> 1 / ( 10<sup>9</sup>+7 ) * ( 10<sup>9</sup>+11 )  </b>
  
  In Double Hashing, if hash_value for a particular ( base and mode ) pair get same , there is a little change to get similiar for different pair. So double hash make it 
  more unique.
   
   
</details>

<details> 
 <summary> Code : </summary>
    
 <br> <b> Single Hash : </b> <br> 
  
```
    
    ll get_hash(string s ){
        ll d = s.size(), loc = 1 , hash_value = 0 ;
        fr(i,0,d){
            hash_value = ((hash_value%mod)*27 + (s[i]-96))%mod ;
        }
        return hash_value ;
    } 
    
```
    
<br> <b> Double Hash : </b> <br> 
    
    
```
    
    pair<ll,ll> double_hash( string s ){
    
        ll d = s.size(), hash_value_1 = 0  , hash_value_2 = 0 ;
        ll mod_1 = 1000000007 , mod_2 = 1000000011;
        ll base_1 = 27 , base_2 = 28 ;

        fr(i,0,d){
            hash_value_1 = ((hash_value_1%mod_1)*base_1 + (s[i]-96))%mod_1 ;
            hash_value_2 = ((hash_value_2%mod_2)*base_2 + (s[i]-96))%mod_2 ;
        }

        return {hash_value_1,hash_value_2} ;
    }
    
    
```
    
    
  
</details>

    
    
### Prefix Hash and Hash of any substring
    
    

<details> 
 <summary> Explanation : </summary>
    
   <br>
    
   ![3](https://user-images.githubusercontent.com/63524824/204009119-7a413192-f7ea-4dbe-aa8b-85f7ef44cb76.png)

</details>
    
<details> 
 <summary> Code : </summary>
    
    
```
    
        ll a[10];
        void power(){
            a[0] = 1 ;
            fr(i,1,10){
                a[i] = a[i-1]*27;
                a[i]%=mod ;
            }
        }

        int main(){
            string s ;
            cin >> s ;

            power();

            ll d = s.size(), loc = 1 , hash_value = 0 ;
            vector<ll>hs;

            // prefix hash

            fr(i,0,d){
                hash_value = ((hash_value%mod)*27 + (s[i]-96))%mod ;
                hs.pb(hash_value);
            }

            for(auto a : hs ) cout << a << " "; cout << endl;

            // any substring 

            fr(i,0,d){
                fr(j,0,i){
                    cout << j+1 <<" "<< i << " "<< i-j << " = "<< (hs[i] - hs[j]*(a[i-j])) << endl;
                }
            }


        return 0 ;
        }

```
   

</details>
    
    
