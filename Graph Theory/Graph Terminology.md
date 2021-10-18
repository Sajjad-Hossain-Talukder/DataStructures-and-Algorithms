A graph is  consists of nodes and edges.
n = nodes
e = egdes
path : path leads node "a" to node "b" through using one or 
       multiple egdes .
       The length of path = number of edges one node to another .
                          = sum of weigt of each edges involve in path ( weighted graph)
                          
Cycle : if first and last node is same .

Simple Path : if each node appears at most once in the path .
              so ,we can tell cycle can't be a cycle cause at cycle first and last node is same.
            
Connected Graph : if any there is a path between any two nodes. That means there is no single isolated node.
                   if there is single isolated nodes available on graph that is not a connected graph.
                   
The connected components of a graph are called its components.

Tree : A connected graph consists of n nodes and (n-1) edges .

Directed Graph : A graph is directed if the edges can be traversed in one direction only.
weighted Graph : A graph is weighted if every edges assigned a weight which can be it distance or anyting else.

Neigbours :   Two nodes are neigbours or adjacent if both are connected by a edge .

Degree : Degree of a node is the number of its neighbours.

EQn : 2 * Total edge = Sum of total degree .

Regular Graph : If the degree of every node is a constant.
Complete Graph : If the degree of every node is n-1 . That means every single node is connected to each other .

Indegreee & Outdegree : In directed graph , the number of edges that end at the nodes is Indegree of this node  and the 
                            number of nodes that start at the node is outdegree of that node .

Coloring : In coloring of a graph , each node is assigned a color so that no adjacent nodes have the same color .

Bipartite Graph : A graph  is bipartite of it is possible to color using two color only . That means if we 
                  can divide the nodes in two set , where memeber of same set has no edge , then it will be a bipartite graph.
                  Actually ,if any node's degeree is more than two , then this graph is not going to be bipartite graph .
                     
Simple Graph : if no edge starts and ends at same node and there are no multiple edges between two nodes , then it is a simple  graph.        
                
হ্যান্ডশেকিং লেমা একটা জিনিস আছে যেটা বলে একটা বিজোড় ডিগ্রীর নোডের সংখ্যা সবসময় জোড় হয়। উপরের গ্রাফে A আর C এর ডিগ্রী ৩, 
এরা বিজোড় ডিগ্রীর নোড। তাহলে বিজোড় ডিগ্রীর নোড আছে ২টা, ২ হলো একটা জোড় সংখ্যা। হ্যান্ডশেক করতে সবসময় ২টা হাত লাগে, ঠিক 
সেরকম একটা এজ সবসময় ২টা নোডকে যোগ করে। তুমি একটু চিন্তা করে দেখো:

২টা জোড় ডিগ্রীর নোডকে এজ দিয়ে যোগ করলে ২টা নতুন বিজোড় ডিগ্রীর নোড তৈরি হয়। ২টা বিজোড় ডিগ্রীর নোডকে এজ দিয়ে যোগ করলে ২টা 
বিজোড় ডিগ্রীর নোড কমে যায়। ১টা জোড় আর একটা বিজোড় ডিগ্রীর নোড যোগ করলে মোট বিজোড় ডিগ্রীর নোড সমান থাকে(এক পাশে কমে, 
আরেক পাশে বাড়ে)।তাহলে দেখা যাচ্ছে হয় ২টা করে বাড়তেসে বা ২টা করে কমতেসে বা সমান থাকছে, তাই বিজোর ডিগ্রীর নোডের সংখ্যা সবসময় জোড়।

একইভাবে এটাও দেখানো যায় একটা গ্রাফের ডিগ্রীগুলোর যোগফল হবে এজসংখ্যার দ্বিগুণ। উপরের গ্রাফে ডিগ্রীগুলোর যোগফল ১০, আর এজসংখ্যা ৫।