### Unordered_map

unordered_map is an associated container that stores elements formed by combination of key value and a mapped value. The key value is used to ` uniquely identify the element ` and mapped value is the content associated with the key. Both key and value can be of any type predefined or user-defined. 


Internally unordered_map is `implemented using Hash Table`, the key provided to map are hashed into indices of hash table that is why performance of data structure depends on hash function a lot but` on an average the cost of search, insert and delete from hash table is O(1). `
#### unordered_map vs unordered_set : 

> In unordered_set , we have only key, no value, these are mainly used to see presence/absence in a set. For example, consider the problem of counting frequencies of individual words. We can’t use unordered_set (or set) as we can’t store counts. 

#### unordered_map vs map : 

|Map|Unordered_map|
|-|-|
|ordered sequence of unique keys|key can be stored in any order, so unordered|
|implemented using Balanced Tree Structure|implemented using Hashing|
|Time complexity - O(Log n)|Time complexity - O(1)|

