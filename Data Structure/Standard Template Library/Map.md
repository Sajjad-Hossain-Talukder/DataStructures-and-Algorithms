####            Map 
-------------------------------------------------------------------------
source : geekforgeeks & C++.com

Basic operation : 

    begin() – Returns an iterator to the first element in the map
    
    end() – Returns an iterator to the theoretical element that follows last element in the map
    
    size() – Returns the number of elements in the map
    
    max_size() – Returns the maximum number of elements that the map can hold
    
    empty() – Returns whether the map is empty
    
    pair insert(keyvalue, mapvalue) – Adds a new element to the map
    
    erase(iterator position) – Removes the element at the position pointed by the iterator
    
    erase(const g)– Removes the key value ‘g’ from the map
    
    clear() – Removes all the elements from the map 
                  
                  
#### List of all functions of Map: 
 - insert() : 
                                       ` iterator map_name.insert({key, element})`
                                       ` iterator map_name.insert(iterator position, {key, element})`
                                        `iterator map_name.insert(iterator position1, iterator position2)`
                                        
-   count() : is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. 
                                              It returns 0 if the element with key K is not present in the container.
                                                       
`  map_name.count(key k) `
 - equal_range() : is a built-in function in C++ STL which returns a pair of iterators. The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to k. Since the map container only contains unique key, hence the first iterator in the pair returned thus points to the element and the second iterator in the pair points to the next key which comes after key K. If there are no matches with key K, the  range returned is of length 1 with both iterators pointing to the an element which has a key denoting the size  of map and elements as 0.
 ```                                                   
    iterator map_name.equal_range(key)
    map<int, int> mp; 

    mp.insert({ 4, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 6, 60 }); 

    pair<map<int, int>::iterator, 
    map<int, int>::iterator>  it; 

    // iterator of pairs 
     it = mp.equal_range(10); 
       cout << "The lower bound is "  << it.first->first << ":"  << it.first->second; cout << "\nThe upper bound is "<< it.second->first  << ":" << it.second->second; 
       return 0; 
  } 
 ```
    Output:
        The lower bound is 3:0
        The upper bound is 3:0
        
-   erase ()  : 
                                                      `map_name.erase(key)`
                                                     ` map_name.erase(iterator position)`
                                                      `map_name.erase(iterator position1, iterator position2)`
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      