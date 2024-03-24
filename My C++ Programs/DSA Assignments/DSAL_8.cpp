// C++ program to find the minimum spanning tree of a given undirected graph.

#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000;
int id[MAX], vertex, edge;
pair<long long, pair<int, int>> p[MAX];

void init()
{
    for (int i = 0; i < MAX; ++i)
    id[i] = i;
}

int root(int x)
{
    while (id[x] != x) 
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x; 
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

long long kruskal(pair<long long, pair<int, int>> p[])
{
    int x, y;
    long long cost, minCost = 0;
    for (int i = 0; i < edge; ++i)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        cout<<endl;
        if (root(x) != root(y))
        {
            minCost += cost;
            cout << x << " --> " << y << " : " << p[i].first << endl; 
            union1(x, y);
        }
    }
    return minCost;
}

int main()
{
    int x, y;
    long long weight, cost, minCost;
    init();
    cout<<"\n\nName :: Saish Kothawade\nRoll No :: SYCOC365\nAssignment 8 (DSAL) :: C++ program to find the minimum spanning tree of a given undirected graph."<<endl;
    cout<<"\n*** MINIMUM SPANNING TREE (USING KRUSKAL'S ALGORITHM) ***"<<endl;
    cout << "\nEnter No. of Vertices: ";
    cin >> vertex;
    cout << "Enter No. of Edges: ";
    cin >> edge;

    for (int i=0; i<edge; i++)
    {
        cout << "\nEnter the value of X, Y and Edge:\n";
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }

    sort(p, p + edge);
    minCost = kruskal(p);
    cout << "\nMinimum cost is " << minCost << endl<<endl;
    return 0;
}



