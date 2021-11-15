#### Strongly Connected Component : 
<hr>
A strongly connected component is <b>the portion of a directed graph</b> in which <b>there is a path from each vertex to another vertex</b>. <b>It is applicable only on a directed graph.</b>

<hr>

#### Explanation :
<details> 
  <summary>Check : </summary>
  Source : http://www.shafaetsplanet.com/?p=2531
  <br>
  <img src="../images/SCC_1.png">
  
  </details>
  
#### Algorithm Steps :
<details> 
  <summary>Check : </summary> 
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
    
  </details>
  
  
#### Code :
<details> 
  <summary>Check : </summary> 
  
</details>

#### Complexity :
<details> 
  <summary>Check : </summary> 
  In this Algorithm , we have used DFS two times only. So , Complexity : 
  <b> O ( V + E ) </b> . 
  </details>
