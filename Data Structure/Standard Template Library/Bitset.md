## Bitset
A bitset is an array whose each value is either 0 or 1.  For example, the following code creates a bitset that contains 10 elements:
```
bitset<10> s;
s[1] = 1;
s[3] = 1;
s[4] = 1;
s[7] = 1;
cout << s[4] << "\n"; // 1
cout << s[5] << "\n"; // 0
```
#### Benefit  : 
- They require `less memory` than ordinary arrays, because each element in a bitset only uses` one bit` of memory. 

> For example, if n bits are stored in an int array, 32*n bits of memory will be used, but
a corresponding bitset only requires n bits of memory. 

- In addition, the values of a bitset can be `efficiently manipulated using bit operators`, which makes it possible
to optimize algorithms using bit sets.


The following code shows another way to create the above bitset:  `bitset<10> s(string("0010011010"));`
```
// from right to left
cout << s[4] << "\n"; // 1
cout << s[5] << "\n"; // 0
```
The function count returns the number of ones in the bitset:
```
bitset<10> s(string("0010011010"));
cout << s.count() << "\n"; // 4
```
The following code shows examples of using bit operations:
```
bitset<10> a(string("0010110110"));
bitset<10> b(string("1011011000"));
cout << (a&b) << "\n"; // 0010010000
cout << (a|b) << "\n"; // 1011111110
cout << (a^b) << "\n"; // 1001101110
```
### Functions :
- count() - To count set bits i.e total number of ones .   `bitset_name.count()`
- 
