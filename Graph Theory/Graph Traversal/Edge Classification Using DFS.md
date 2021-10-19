

### Given Graph : 
  Using DFS , we've assigned discover time & finish time.
  
  <img src="../images/graphedge.png">
  
  <br> 
  <br>
  
###   Tree Edge :
It is an edge which is present in the tree **obtained after applying DFS on the graph**. All th edges below are tree edges. 

<img src="../images/treeedge.png">
<br> 
<br>

###   Forward Edge :
 It is an edge ( u , v) such that v is descendant but not part of the DFS tree.
 
<br> 
u = ancestor 
<br>
v = descendant
<br>
 
<img src="../images/forwardedge.png">
<br> 
<br>

###   Back Edge :
It is an edge  ( u , v) such that v is ancestor of node u but not part of DFS tree.

<br> 
u = descendant
<br>
v = ancestor 
<br>
 

<img src="../images/back.png">
<br> 
<br>

###   Cross Edge :
It is a edge which connects two node such that they **do not have any ancestor and a descendant relationship** between them. 


<img src="../images/crossedge.png">
<br> 
<br>



