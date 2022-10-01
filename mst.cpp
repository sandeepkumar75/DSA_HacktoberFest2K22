#include<bits/stdc++.h>
using namespace std;
int par[100];
struct graph
{
    int a,b,w;
};

int find(int a)
{
    if(par[a]==-1)
        return a;
    else
    {
        return par[a]=find(par[a]);
    }
}       
void merge(int a,int b)
{
    par[b]=a;
}
int main()
{
	int n,m;
	cin>>n>>m;
    graph grp[m];
    for(int i=1;i<=n;i++) 
        par[i]=-1;
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>grp[i].a>>grp[i].b>>grp[i].w;
    }
    //print the grp
    for(int i=0;i<m;i++)
    {
        cout<<grp[i].a<<"->"<<grp[i].b<<" "<<grp[i].w<<endl;
    } 
    sort(grp,grp+m,[&](graph &a,graph &b){
        return a.w<b.w;
    });
    cout<<endl;
    // sorted acoording to weight
    for(int i=0;i<m;i++)
    {
        cout<<grp[i].a<<"->"<<grp[i].b<<" "<<grp[i].w<<endl;;
    } 
    int count=0;
    for(int i=0;i<m;i++)
    {
        int a=find(grp[i].a);
        int b=find(grp[i].b);
        //cout<<a<<" "<<b<<endl;
        if(a!=b)
        {
            merge(a,b);
            count+=grp[i].w;
            //cout<<count<<" ";
        }
    }
    cout<<count;
}


//exp
// 6 9
// 5 4 9
// 5 1 4
// 1 2 2
// 1 4 1
// 4 2 3
// 4 3 5
// 2 3 3
// 3 6 8
// 2 6 7
// output-17
