// C++ program to print all the cycles 
// in an undirected graph 
#include <bits/stdc++.h> 
using namespace std; 
const int N = 100000; 
int g[501][501];
int NODE;
// variables to be used 
// in both functions 
vector<int> graph[N]; 
vector<int> cycles[N]; 

// Function to mark the vertex with 
// different colors for different cycles 
void dfs_cycle(int u, int p, int color[], 
			int mark[], int par[], int& cyclenumber) 
{ 

	// already (completely) visited vertex. 
	if (color[u] == 2) { 
		return; 
	} 

	// seen vertex, but was not completely visited -> cycle detected. 
	// backtrack based on parents to find the complete cycle. 
	if (color[u] == 1) { 

		cyclenumber++; 
		int cur = p; 
		mark[cur] = cyclenumber; 

		// backtrack the vertex which are 
		// in the current cycle thats found 
		while (cur != u) { 
			cur = par[cur]; 
			mark[cur] = cyclenumber; 
		} 
		return; 
	} 
	par[u] = p; 

	// partially visited. 
	color[u] = 1; 

	// simple dfs on graph 
	for (int v : graph[u]) { 

		// if it has not been visited previously 
		if (v == par[u]) { 
			continue; 
		} 
		dfs_cycle(v, u, color, mark, par, cyclenumber); 
	} 

	// completely visited. 
	color[u] = 2; 
} 

// add the edges to the graph 
void addEdge(int u, int v) 
{ 
	graph[u].push_back(v); 
	//graph[v].push_back(u); 
} 

// Function to print the cycles 
void printCycles(int edges, int mark[], int& cyclenumber) 
{ 

	// push the edges that into the 
	// cycle adjacency list 
	for (int i = 1; i <= edges; i++) { 
		if (mark[i] != 0) 
			cycles[mark[i]].push_back(i); 
	} 

	// print all the vertex with same cycle 
	for (int i = 1; i <= cyclenumber; i++) { 
		// Print the i-th cycle 
		cout << "Cycle Number " << i << ": "; 
		for (int x : cycles[i]) 
			cout << x << " "; 
		cout << endl; 
	}
}
bool dfs(int curr, set<int>&wSet, set<int>&gSet, set<int>&bSet) {
   //moving curr to white set to grey set.
   wSet.erase(wSet.find(curr));
   gSet.insert(curr);

   for(int v = 0; v < NODE; v++) {
      if(g[curr][v] != 0) {    //for all neighbour vertices
         if(bSet.find(v) != bSet.end())
            continue;    //if the vertices are in the black set
         if(gSet.find(v) != gSet.end())
            return true;    //it is a cycle
         if(dfs(v, wSet, gSet, bSet))
            return true;    //cycle found
      }
   }

   //moving v to grey set to black set.
   gSet.erase(gSet.find(curr));
   bSet.insert(curr);
   return false;
}

bool hasCycle() {
   set<int> wSet, gSet, bSet;    //three set as white, grey and black
   for(int i = 0; i<NODE; i++)
      wSet.insert(i);    //initially add all node into the white set

   while(wSet.size() > 0) {
      for(int current = 0; current < NODE; current++) {
         if(wSet.find(current) != wSet.end())
            if(dfs(current, wSet, gSet, bSet))
               return true;
      }
   }
   return false;
}
int main() 
{ 
    int n,m;
    cin>>n>>m;
    NODE = n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            g[i][j] = false;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
        g[u-1][v-1] = true;
    }
	// add edges 
	int color[N]; 
	int par[N]; 
	int mark[N]; 
	int cyclenumber = 0; 
	int edges = 13; 
	dfs_cycle(1, 0, color, mark, par, cyclenumber);
	printCycles(edges, mark, cyclenumber);
    int siz = cycles[0].size();
    int flag = 1;
    for(int i=0;i<siz-1;i++)
    {
        g[cycles[0][i]-1][cycles[0][i+1]-1] = false;
        if(hasCycle())
        {
            flag = 0;
            break;
        }
        g[cycles[0][i]-1][cycles[0][i+1]-1] = true;
    }
    g[cycles[0][siz-1]-1][cycles[0][0]-1] = false;
    if(hasCycle())
    {
        flag = 0;    
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
} 

