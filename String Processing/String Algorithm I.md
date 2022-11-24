### Hashing a String
    
<details> 
  <summary> Expanation : </summary>
  
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
  
```
  ll get_hash(string s ){
    ll d = s.size(), loc = 1 , hash_value = 0 ;
    fr(i,0,d){
        hash_value =  ( (hash_value%mod) + ((s[i]-96)*loc%mod)%mod) % mod ;
        cout << loc << " "<< s[i] - 96 << endl;
        loc = ((loc%mod )*27)%mod;

    }
    // base = 27  and mod = 1e9+7
    return hash_value ;
  }  
````
  
</details>