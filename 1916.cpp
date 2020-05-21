#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

int N,M;
int INF=0xfffffff;
vector<vector<int>> W;

void dijkstra(int sta,int end){

    vector<bool> visited(N+1,false);
    vector<int> dist(N+1,INF);

    for(int i=1;i<=N;i++)
        dist[i]=W[sta][i];

    int vnear=sta;
    visited[sta]=true;

    for(int k = 0;k<N;k++){
        int min_dist=INF;
        for(int i=1;i<=n;i++){
            if(!visited[i] && min_dist>dist[i]){
                vnear=i;
                min_dist=dist[i];
            }
        }

        for(int i=1;i<=n;i++){
            if(visited[i] || W[vnear][i]==INF)
                continue;
            if(dist[vnear]+W[vnear][i]<dist[i])
                dist[i]=dist[vnear]+W[vnear][i];
        }
        visited[vnear]=true;
    }
    cout<<dist[end]<<endl;
}

int main(void){

  cin>>N>>M;
  W= vector < vector<int> > (n+1, vector<int>(n+1, INF));
  int sta, end, cost;
  for (int i =0;i<M;i++){
    scanf("%d %d %d",&sta,&end,&cost);
    W[sta][end]=min(W[sta][end],cost);
  }

  scanf("%d %d", &sta, &end);
  dijkstra(sta,end);
  return 0;
}
