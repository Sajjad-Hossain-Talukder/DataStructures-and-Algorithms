Depth First Search : Source - CP Algo 
=====================================

    Depth First Search is one of the main graph algorithms.

    Depth First Search finds the lexicographical first path in the graph from a source vertex u to each vertex. Depth First Search 
    will also find the shortest paths in a tree (because there only exists one simple path), but on general graphs this is not the case.

    Complexity : The algorithm works in O(m+n) time where n is the number of vertices/nodes and m is the number of edges.

Description of the algorithm:
=============================
    The idea behind DFS is to go as deep into the graph as possible, and backtrack once you are at a vertex without any unvisited adjacent vertices.
    It is very easy to describe / implement the algorithm recursively: We start the search at one vertex. After visiting a vertex, we further perform 
    a DFS for each adjacent vertex that we haven't visited before. This way we visit all vertices that are reachable from the starting vertex.


    In Depth first Search process ,we will use three marker to mark the situation of a node .
    They are WHITE,GREY and BLACK.In this algorithm , 
                        white = 1 
                        grey  = 2
                        Black = 3
    Here, White means node still is not travelled .Grey means node is in under construction and Black means it is already travelled .
    If a node marked as GREY or BLACk ,then we will not travell it anymore .We only go in a way when we get a white node.
    Initially ,Every node are initialized with white which bearing the value one (1).

    In the very first ,we start from a node and will check weather it is white /visited or not .If white we go for visit.After starting 
    visit,first task is making this node is grey.After making grey ,then we will find it’s adjacent node .If it’s adjacent node is white ,
    then we will call this DFS visit again. 

    To keep color marker we will declare a Array which is initially white.

                                            #define white 1
                                            #define grey 2
                                            #define black 3

                                            int node ,edge, time =1;

                                            bool graph[1000][1000];
                                            int discover[1000] , finish[1000];

                                            int color[1000];

                                            void dfs ( int x ){
                                                        color[x] = grey;
                                                        discover[x] = time;
                                                        time+=1;
                                                        for(int i=0;i<node;i++){
                                                            if(graph[x][i]&&color[i]==white)
                                                                  dfs( i );
                                                                }
                                                        color[x]=black;
                                                        finish[x] =time;
                                                        time+=1; 
                                            }

                                            int main(){
                                                int a,b;
                                                cin>>node>>edge;
                                                        //Adjancency Matrix
                                                        for(int i = 0;i<edge;i++){
                                                            cin>>a>>b;
                                                            graph[a][b]= 1;
                                                            graph[b][a]= 1;
                                                        }
                                                //Matrix printing
                                                for(int i=0;i<node;i++){
                                                    for(int j=0;j<node;j++){
                                                        cout<<graph[i][j]<<" ";
                                                    }
                                                    cout<<endl;
                                                }
                                                       
                                                        // white colored
                                                        for(int i=0;i<node;i++)
                                                            color[i] = white;
                                                    
                                               //calling DFS
                                                for(int i=0;i<node;i++){
                                                     if( color[i]==white ){
                                                        dfs(i);
                                                     }
                                                }

                                                      //after dfs traversal
                                                        for(int i=0;i<node+100;i++)
                                                           cout<<color[i]<<"  ";

                                            return 0;
                                            }





DIscovery Time and Finishing time :
===================================

    Discover time indicate a value which actually represent the travel touching time and after end of travelling we also can keep a 
    marker of Finishing by using Finishing time.

    We use here two array .one is discover and another is finishing .Discover array shows dicovering time and finishing array shows finishing time.
    Further description id given on Image:



    Applications of Depth First Search
    Find any path in the graph from source vertex u to all vertices.
    
    Find lexicographical first path in the graph from source u to all vertices.
    Check if a vertex in a tree is an ancestor of some other vertex:
    At the beginning and end of each search call we remember the entry and exit "time" of each vertex. Now you can find the answer for any pair of vertices (i,j) in O(1): vertex i is an ancestor of vertex j if and only if  entry[i]<entry[j] and exit[i]>exit[j].
    Find the lowest common ancestor (LCA) of two vertices.
    Topological sorting:
    Run a series of depth first searches so as to visit each vertex exactly once in O(n+m) time. The required topological ordering will be the vertices sorted in descending order of exit time.
    Check whether a given graph is acyclic and find cycles in a graph. (As mentioned above by counting back edges in every connected components).
    Find strongly connected components in a directed graph:
    First do a topological sorting of the graph. Then transpose the graph and run another series of depth first searches in the order defined by the topological sort. For each DFS call the component created by it is a strongly connected component.
    Find bridges in an undirected graph:
    First convert the given graph into a directed graph by running a series of depth first searches and making each edge directed as we go through it, in the direction we went. Second, find the strongly connected components in this directed graph. Bridges are the edges whose ends belong to different strongly connected components.
