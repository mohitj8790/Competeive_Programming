#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define ld long double;
#define el '\n';
#define mod (ll) 1000000007
#define pll pair<ll,ll>
#define ml map<ll,ll>
#define vpl vector<pll>
#define vvpl vector<vector<pll>>
#define f first
#define s second
#define vvl vector<vector<ll>>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vl vector<ll>
#define vpii vector<pii>
#define pqueue priority_queue<ll>
#define pdqueue priority_queue<ll,vl,greater<ll>>
#define mem(a,b) memset(a,b,sizeof(a))
#define sz(a)  a.size()
#define pt(a) for(auto it:a)
#define V 4
#define INF 9999

void print(int dis[][V])
{
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(dis[i][j]==INF)
            {
                cout<<"INF"<<" ";
            }
            else
            {
                cout<<dis[i][j]<<" ";
            }
        }
        cout<<el;
    }
}

void floydWarshall(int graph[][V])
{
    int dis[V][V],i,j,k;
    
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
            dis[i][j]=graph[i][j];
        }
    }
    
    for(k=0;k<V;k++)
    {
        for(i=0;i<V;i++)
        {
            for(j=0;j<V;j++)
            {
                if(dis[i][k]+dis[k][j]<dis[i][j])
                {
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
    
    print(dis);
}

int main()
{
    IOS;
    int graph[V][V]={{0, 5, INF, 10},  
                    {INF, 0, 3, INF},  
                    {INF, INF, 0, 1},  
                    {INF, INF, INF, 0}
                    };
    floydWarshall(graph);                
                    
    return 0;
}