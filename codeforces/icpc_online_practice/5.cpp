#include<bits/stdc++.h>
using namespace std;
struct node{
        int f,t,w;
};
int parent[102030];int height[102030];
vector<node>me;
vector<int >vect;
bool comp(node a,node b){
        return a.w<b.w;
}
int root(int a){
        while(parent[a]>0){
                a=parent[a];
        }
        return a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		me.clear();
		vect.clear();
		memset(parent,-1,sizeof(parent));
		memset(height,0,sizeof(parent));
		int n,m;
		cin >> n >> m;
		for(int i=0;i<m;i++){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			me.push_back({a,b,c});
		}
		for(int i=1;i<=n;i++)
			parent[i]=-1;
		sort(me.begin(),me.end(),comp);
		for(int i=0;i<m;i++){
			int a=root(me[i].f);
			int b=root(me[i].t);
			if(a!=b){
				if(height[a]>height[b])
					parent[b]=a;
				else if(height[a]<height[b])
					parent[a]=b;
				else{
					parent[a]=b;
					height[a]+=1;
				}
				vect.push_back(me[i].w);
			}
		}
		cout << vect[n-2] << '\n';
	}
}
