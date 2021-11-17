## Huffman Coding

**Defination :** Huffman Coding is a technique of <u>**compressing data to reduce its size without losing any of the details**</u>. It was first developed by David Huffman.

Huffman Coding is generally useful to compress the data in which there are frequently occurring characters.

<ul>
  <li>Huffman Coding is a famous Greedy Algorithm.</li>
<li>It is used for the lossless compression of data.</li>
<li>It uses variable length encoding.</li>
<li>It assigns variable length code to all the characters.</li>
<li>The code length of a character depends on how frequently it occurs in the given text.</li>
<li>The character which occurs most frequently gets the smallest code.</li>
<li>The character which occurs least frequently gets the largest code.</li>
<li>It is also known as Huffman Encoding.</li>
  </ul>
  
### Prefix Code - Rule : 
Set of binary Sequence , p such that no sequence in P is a prefix of any other 
sequence in P .

```
p = { 01 , 010 , 10 } 
Here , P is not a Prefix Code because '01' is been found in '010' as Prefix.
  
p = { 01 , 101 , 100 } 
Here , P is a Prefix Code.
  
```
<ul>
<li>Huffman Coding implements a rule known as a prefix rule.</li>
<li>This is to prevent the ambiguities while decoding.</li>
<li>It ensures that the code assigned to any character is not a prefix of the code assigned to any other character.</li>
</ul>


### Steps :

> Building a Huffman Tree from the input characters.

   <ol>
  <li> Sort all characters in ascending order based on their Frequency.</li>
  <li> Add two lowest from frequency list and make added value as root and replace two frequency with their root in frequncy list.
  <li> Do the previous step untill their is a single element in F. list.</li>
  
   <li> After forming Huffman Tree , Assign left edge , 0 and right edge , 1 for every internal node.</li>
     
    
   </ol>

> Assigning code to the characters by traversing the Huffman Tree.


  
  
