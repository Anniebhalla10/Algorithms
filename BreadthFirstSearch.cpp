/* Name: Annie Bhalla
 Roll No : 19HCS4009
 Course : Bsc Hons CS
 Semester : 4
 Submitted to : Pooja Ma'am
 Title : BreadthFirst Search
 */
 
 #include<bits/stdc++.h>
 using namespace std;
 
 template<typename T>
 class Graph{
 	map<T,list<T> > m;
 	public: 
 	 void addEdge(int x,int y)
 	 {
 	 	m[x].push_back(x);
 	 	m[y].push_back(y);
	  }
	  
	  void bfs(T src)
	  {
	  	 map<T,bool> visited;
	  	 queue<T> q;
	  	 
	  	 q.push(src);
	  	 visited[src]= true;
	  	 
	  	 while(!q.empty())
	  	 {
	  	 	 T node = q.front();
	  	 	 q.pop();
	  	 	 cout<<node<<" ";
	  	 	
	  	 	 for(int neighbour:m[node]){
	  	 	 	if(!visited[neighbour]);
	  	 	 	q.push(neighbour);
	  	 	 	visited[neighbour]=true;
				}
		   }
	  }
	  
	
 };
 
 int main()
 {
 	Graph<int> g;
 	g.addEdge(0,1);
 	g.addEdge(1,2);
 	g.addEdge(2,3);
 	g.addEdge(3,4);
 	g.addEdge(4,5);
 	g.bfs(0);
 	return 0;
 }
 
