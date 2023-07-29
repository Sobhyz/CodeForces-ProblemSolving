#include <iostream>

using namespace std;

const int N=1e5;
int parent[N];


struct edge{
    int a,b,c;
}edges[N];

bool cmp(const edge &a,const edge &b){return a.c<=b.c;}

void init(int n)
{
    for(int i=0;i<=n;i++)
        parent[i]=i;
}

int get_parent(int n)
{
    if(n==parent[n])
        return n;
    return parent[n]=get_parent(parent[n]);
}

void merge(int a,int b)
{
    a=get_parent(a);
    b=get_parent(b);
    if(a==b)
        return;
    parent[b]=a;
}

bool same_parent(int a,int b){return get_parent(a)==get_parent(b);}

int main()
{
    int n,m;
    cin>>n>>m;
    init(n);
    for(int i=0;i<m;i++)
    {
        cin>>edges[i].a>>edges[i].b>>edges[i].c;
    }
    for(int i=1;i<=n;i++)
        cout<<i<<' '<<parent[i]<<endl;
    sort(edges,edges+m,cmp);
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<edges[i].a<<' '<<edges[i].b<<' '<<edges[i].c<<endl;
        if(!same_parent(edges[i].a,edges[i].b))
            {merge(edges[i].a,edges[i].b);cout<<edges[i].a<<"--->"<<edges[i].b<<' '<<edges[i].c<<endl;}
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<i<<' '<<parent[i]<<endl;

}