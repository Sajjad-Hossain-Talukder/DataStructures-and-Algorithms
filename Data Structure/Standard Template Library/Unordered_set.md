### Unordered_set
An unordered_set is implemented using a `hash table` where keys are hashed into indices of a hash table so that the insertion is always randomized. All operations on the unordered_set takes `constant time O(1) on an average` which can `go up to linear time O(n) in worst case` which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 

The unordered_set can contain key of any type – predefined or user-defined data structure but when we define key of type user define the type, we need to specify our comparison function according to which keys will be compared. 

         NOTES:
           0. Unordered_Set is a associative container that contains set of unique objects.
           1. Search, insertion, and removal have average constant-time complexity.
           2. Internally, the elements are organized into buckets.
           3. It uses hashing to insert elements into buckets. 
           4. This allows fast access to individual elements, since once a hash is computed, 
                   it refers to the exact bucket the element is placed into.
                   

#### WHY UNORDERED SET?

    To Maintain a collection of unique items with fast insertion and removal.
    
#### Sets vs Unordered Sets 


|Set|Unordered_set| 
|---------------------------------------|-------------------------------------------------------|
| ordered sequence of unique keys | A set in which key can be stored in any order, so unordered |
| Implemented using balanced tree structure | Implemented using Hashing |
| Time complexity - O(log n) |Time complexity - O(1) |



