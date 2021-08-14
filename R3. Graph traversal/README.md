# R3. Graph traversal


| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 64Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

An undirected unweighted graph is given. For it, you need to find the number of vertices lying in one component of connectivity with a given vertex (counting this vertex).

## **Input format**

The first line of the input data contains two numbers: N and S (1 ≤ N ≤ 100; 1 ≤ S ≤ N), where N is the number of vertices of the graph, and S is the specified vertex. The next N lines contain N numbers each – the adjacency matrix of the graph, in which 0 means the absence of an edge between the vertices, and 1 means its presence. It is guaranteed that there are always zeros on the main diagonal of the matrix.

## **Output format**

Output a single integer – the desired number of vertices.

| Example    | Output        |
| ------------- |:-------------:|
|  3 1 0 1 1 1 0 0 1 0 0| 3  |



