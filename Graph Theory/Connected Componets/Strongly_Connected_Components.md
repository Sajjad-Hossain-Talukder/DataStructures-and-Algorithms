## Strongly Connected Component : 

A strongly connected component is <b>the portion of a directed graph</b> in which <b>there is a path from each vertex to another vertex</b>. <b>It is applicable only on a directed graph.</b>

<hr>
There are two algorithms to handle SCC . They are  : <br>
<ul>
  <li>Kosaraju's Algorithms</li>
  <li>Tarjan's Algorithms</li>
  </ul>


<hr>

#### Kosaraju's Algorithm Explanation :
<details> 
  <summary>Check : </summary>
  Source : http://www.shafaetsplanet.com/?p=2531
  <br>
  <img src="../../images/SCC_1.png">
  
  </details>
  
#### Kosaraju's Algorithm Steps :
<details> 
  <summary>Check : </summary> 
  
  <br>
  
  Kosaraju's Algorithm is based on <b>the depth-first search algorithm implemented twice.</b> <br>
  All Steps Listed Below one after another.Then a problem is Solved based on the given Steps.
  
  <ol>
    <li>Select a Source Node . </li>
    <li>Start DFS and Save Finishing time in a Array .</li>
    <li>If all node is not discovered yet ,then start again DFS from another node which is not discovered yet.</li>
    <li>After Discovering all nodes , Transpose the Graph. Transposing Graph means reverse the all direction as SCC is only applicable in Directed Graph.</li>
    <li>Do DFS again.Here , Source node it that node which have the most finishing time and Store all the node visited in one single DFS.</li>
    <li>If doing DFS is not possible anymore , then go back in <b>Finishing time array</b> , and check nodes are visited or Not.</li>
    <li>If not visited node is found , then start DFS again from that node.</b>
  <li>All the nodes visited in a single DFS on transpose graph form <b>Strongly Connected Components</b> </li>
  </ol>  
  
  <h3>Example : </h3>
  <img src="../../images/scc_11.png">
  
  <br>
  
  <h5>1 ] First Step </h5>
  <img src="../../images/scc_12.png">
  <img src="../../images/scc_13.png">
  <img src="../../images/scc_14.png">
  <h5>2 ] Second Step </h5>
  <img src="../../images/scc_15.png">
  <h5>3 ] Third Step </h5>
  <img src="../../images/scc_16.png">
  <img src="../../images/scc_17.png">
  <img src="../../images/scc_19.png">
   <h5> Final Result:  </h5>
  <img src="../../images/scc_20.png">
  
    
    
  </details>
  
  
#### Kosaraju's Algorithm Code :
<details> 
  <summary>Check : </summary> 
  
</details>

#### Complexity :
<details> 
  <summary>Check : </summary> 
  In this Algorithm , we have used DFS two times only. So , Complexity : 
  <b> O ( V + E ) </b> . 
  </details>
