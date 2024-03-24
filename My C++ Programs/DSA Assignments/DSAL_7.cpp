// BFS Traversal

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<bool> visit;
vector<vector<int>> adj;

void BFSTrav(int b)
{
    queue<int> q; // Declare a queue to store all the nodes connected to b
    q.push(b);
    visit[b] = true;
    cout<<"\nBFS Traversal:- ";

    while (!q.empty())
    {
        int a = q.front();
        q.pop();

        for (auto j = adj[a].begin(); j != adj[a].end(); j++)
        {
            if (!visit[*j])
            {
                visit[*j] = true;
                q.push(*j);
            }
        }
        cout<<a<<"  ";
    }
}

void edge(int a, int b)
{
    adj[a].push_back(b); 
}

int main()
{
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 7 (DSAL) :: Write a C++ program for the implementation of BFS and DFS for a given graph."<<endl;
    cout<<"\n*** BFS TRAVERSAL FOR A GRAPH ***\n"<<endl; 

    int n, e;

    cout<<"Enter the No. of Vertices: ";
    cin>>n;
    cout<<"Enter the No of Edges: ";
    cin>>e;
    visit.assign(n, false);
    adj.assign(n, vector<int>());
    int a, b, i;
    cout<<"\nEnter the edges with source and target Vertex:\n";
    for(i=0; i<e; i++)
    {
        cin >> a >> b;
        edge(a, b);
    }
    for(i=0; i<n; i++)
    {
        // if the node i is unvisited
        if(!visit[i])
        {
            BFSTrav(i);
        }
    }
    cout<<endl<<endl;

    return 0;
} 

// DFS Traversal:

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertex,edge;
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 7 (DSAL) :: Write a C++ program for the implementation of BFS and DFS for a given graph."<<endl;
    cout<<"\n*** DFS TRAVERSAL FOR A GRAPH ***\n"<<endl;
    
    cout << "Enter the No. of Vertices: ";
    cin>>vertex;
    cout << "Enter the No. of Edges: ";
    cin>>edge;
    vector<int> v[vertex+1];
    bool visited [vertex+1];

    memset(visited,false,sizeof(visited));

    cout<<"\nEnter the start and end vertex of the edges: \n";
    for(int i=0; i<edge; i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int start;
    cout<<"\nInitial vertex to start the DFS traversal with: ";
    cin>>start;
    stack<int> s;

    s.push(start);
    vector<int> dfs;
    while(!s.empty())
    {
        int top=s.top();
        s.pop();
        if(visited[top]==false)
        {
            visited[top]=true;
            dfs.push_back(top);
        }

        for(int i=0; i<v[top].size(); i++)
        {
            if(visited[v[top][i]]==false)
            {
                s.push(v[top][i]);
            }
        }
    }
    
    cout<<"\nDFS Traversal:- ";
    for(int i=0; i<vertex; i++)
    {
        cout<<dfs[i]<<"  ";
    }
    cout<<endl<<endl;
    return 0;
}
*/