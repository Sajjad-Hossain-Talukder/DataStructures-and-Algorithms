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

### Member functions
Below is list of member functions :



#### Capacity

|Sr.No.|	Capacity & Description|
|--|--|
|1|	var_name.empty() - It is used to test whether container is empty.|
|2|	var_name.size() - It returns container size.|
|3|	var_name.max_size() - It returns maximum size.|

#### Iterators

|Sr.No.|	Iterators & Description|
|--|--|
|1|	var_name.begin()  - It returns iterator to beginning.|
|2|	var_name.end()  -  It returns iterator to end().|
|3|	var_name.cbegin()  -  It returns const_iterator to beginning.|
|4|	var_name.cend()  -  It return const_iterator to end.|

#### Element lookup
|Sr.No.|	Element lookup & Description|
|--|--|
|1|	var_name.find( k ) -  It returns an iterator to the element, if the specified value is found, or end() if it is not found in the container..|
|2|	var_name.count() - It returns 1 if an element with a value equivalent to k is found, or zero otherwise.|
|3|	var_name.equal_range() - It is used to get range of elements with a specific key.equal_range() in general returns range that includes all elements equal to given value. For unordered_set where all keys are distinct, the returned range contains at-most one element.

         auto range1 = sample.equal_range(10);
	         if (range1.first != sample.end()) {
			cout << *range1.first << " YO\n"<<endl;
	         }
         if (range1.second != sample.end()) {
			cout << *range1.second << " YO1\n" << endl;
	}

#### Modifiers
|Sr.No.|	Modifiers & Description|
|--|--|
|1|	var_name.emplace()  -  It is used to construct and insert element.
|2|	var_name.emplace_hint()  -  It is used to construct and insert element with hint.
|3	|var_name.insert()  -  It is used to insert elements. `var_name.insert (Value) or unordered_set_name.insert (Iterator1, Iterator2)`
|4	|var_name.erase()  -  It is used to erase elements. `var_name.erase(iterator1, iterator2),var_name.erase(iterator_position),var_name.erase(element)`
|5|	var_name.clear()  -  It is used to clear content. `var_name.clear()`
|6|	var_name1.swap(var_name2)  -  It is used to swap content.

#### Buckets
- ` var_name.bucket( element ) ` - It returns the `bucket number of a specific element`. That is, this function returns the bucket number where a specific element is stored in the unordered_set container.The `bucket` is a slot in `the unordered_set’s internal hash table` where elements are stored.

##### Note: Buckets in unordered_set are numbered from 0 to n-1, where n is the total number of buckets.

- ` var_name.bucket_count() ` - It returns the total number of buckets present in an unordered_set container.

- ` var_name.max_bucket_count() ` - This is used to find the maximum number of buckets that unordered_set can have.This function returns the maximum number of buckets a system can have because of the constraints specified by the system and some limitations.
- ` var_name.bucket_size() ` -It returns the total number of elements present in a specific bucket in an unordered_set container.


Hash policy
Sr.No.	Hash policy & Description
1	load_factor
It returns load factor.

2	max_load_factor
It is used to get or set maximum load factor.

3	rehash
It is used to set number of buckets.

4	reserve
It gives a request to capacity chage of backets

Observers
Sr.No.	Observers & Description
1	hash_function
It is used to get hash function.

2	key_eq
It is used to get key equivalence predicate.

3	get_allocator
It is used to get allocator.

Sr.No.	Non-member function overloads & Description
1	operators (unordered_set)
It is used to get hash function.

2	swap (unordered_set)
It exchanges contents of two unordered_set containers.

Predefined iterators
Sr.No.	Non-member function overloads & Description
1	operators (unordered_set)
It is used to get hash function.

2	swap (unordered_set)
It exchanges contents of two unordered_set containers.;['p



