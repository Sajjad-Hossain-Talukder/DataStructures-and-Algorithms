### Unordered_map

unordered_map is an associated container that stores elements formed by combination of key value and a mapped value. The key value is used to ` uniquely identify the element ` and mapped value is the content associated with the key. Both key and value can be of any type predefined or user-defined. 

It is often referred as associative array. It enables `fast retrieval of individual elements based on their keys`. It also implements ` the direct access operator(subscript operator[])` which allows for direct access of the mapped value using its key value as argument.

Unordered map `does not sort its element in any particular order` with respect to either their key or mapped values, `instead organizes into buckets depending on their hash values` to allow for fast access to individual elements directly by their key values.

Unordered map performs better than map while accessing individual elements by their keys. But for range iteration their performance is considerably low.

Internally unordered_map is `implemented using Hash Table`, the key provided to map are hashed into indices of hash table that is why performance of data structure depends on hash function a lot but` on an average the cost of search, insert and delete from hash table is O(1). `

#### unordered_map vs unordered_set : 

> In unordered_set , we have only key, no value, these are mainly used to see presence/absence in a set. For example, consider the problem of counting frequencies of individual words. We can’t use unordered_set (or set) as we can’t store counts. 

#### unordered_map vs map : 

|Map|Unordered_map|
|-|-|
|ordered sequence of unique keys|key can be stored in any order, so unordered|
|implemented using Balanced Tree Structure|implemented using Hashing|
|Time complexity - O(Log n)|Time complexity - O(1)|

#### Iterators  : 
- `umap.begin()` - Returns an iterator pointing to `the first element in the unordered_map container (1)` or `in one of its buckets (2).`

- `umap.end()` - Returns an iterator pointing to the `past-the-end element` in the unordered_map `container (1)` or in `one of its buckets (2).`The iterator returned by end does not point to any element, but to the position that follows the last element in the unordered_map container (its past-the-end position). Thus, the value returned shall not be dereferenced - it is generally used to describe the open-end of a range, such as `[begin,end)`.

```
#include <iostream>
#include <unordered_map>
using namespace std;

int main (){
  unordered_map<string,string> mymap;
  mymap = {{"Australia","Canberra"},{"U.S.","Washington"},{"France","Paris"}};

  cout << "mymap contains:";
  for ( auto it = mymap.begin(); it != mymap.end(); ++it )
    cout << " " << it->first << ":" << it->second;
  cout << endl;
  
  cout << "mymap's buckets contain:\n";
  
  for ( unsigned i = 0; i < mymap.bucket_count(); ++i) {
      cout << "bucket #" << i << " contains:";
        for ( auto local_it = mymap.begin(i); local_it!= mymap.end(i); ++local_it ) // how to access bucket element
          cout << " " << local_it->first << ":" << local_it->second;
      cout << endl;
  }

  return 0;
}
```

- `umap.cbegin() & umap.end()` - Return `const-iterator` container (1) or in one of its buckets (2) and element can not be modified.

#### Element access  : 

-`operator[]`  : If k matches the key of an element in the container, the function returns a reference to its mapped value.If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. Notice that this always increases the container size by one, even if no mapped value is assigned to the element (the element is constructed using its default constructor).
```
#include <bits/stdc++.h>
using namespace std ;

int main (){
  unordered_map<string,string> mymap;

  mymap["Bakery"]="Barbara";  
  mymap["Seafood"]="Lisa";   
  mymap["Produce"]="John";   

  std::string name = mymap["Bakery"];  
  mymap["Seafood"] = name;             

  mymap["Bakery"] = mymap["Produce"];   
  name = mymap["Deli"];      

  mymap["Produce"] = mymap["Gifts"];   
  for (auto& x: mymap) {
    std::cout << x.first << ": " << x.second << std::endl;
  }

  return 0;
}
```

- `umap.at(key)` - Returns a reference to the mapped value of the element with key  in the unordered_map.If key does not match the key of any element in the container, the function throws an out_of_range exception.

#### Element lookup :
- umap.find( key ) - An iterator to the element, if the specified key value is found, or umap.end() if the specified key is not found in the container.

- umap.count( key ) - Returns 1 if an element with a key equivalent to k is found, or zero otherwise.

equal_range
Get range of elements with specific key (public member function)
