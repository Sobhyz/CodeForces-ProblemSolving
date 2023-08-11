#include <iostream>
#include <vector>
#define f first
#define s second

using namespace std;
const int N=1e6+6;

int n,m,q,c[N],h[N],sorted[N],ans[N];
pair<int,int> day[N];
pair<int, pair<int,int> > query[N];

// void add(int idx,int x){
//     while (idx <= N){
//         // cout<<idx<<' '<<x<<endl;
//         h[idx] += x;
//         idx += idx & -idx;
//     }
// }


// int sum(int idx){
//     int total = 0;
//     while (idx > 0){
//         total += h[idx];
//         idx -= idx & -idx;
//     }
//     return total;
// }
// int prefix_sum(int idx){return sum(idx)*idx -  sum(idx);}

// int range_sum(int l,int r){return prefix_sum(r) - prefix_sum(l-1);}

template <typename T>
class fenwick {
  public:
  vector<T> fenw;
  int n;

  // Constructor for initialization of size 
  fenwick(int _n) : n(_n + 1) {
    fenw.resize(n);
  }

  // to modify , add or replace value at index x
  void modify(int x, T v) {
    while (x <= n) {
      fenw[x] += v;
      x += (x & -x);
    }
  }

  // To get sum of prefix ending at x
  T get(int x) {
    T v=0;
    while (x > 0) {
      v += fenw[x];
      x -= (x & -x);
    }
    return v;
  }
};

// struct FT
// {
//     std::vector<int> data;
//     FT(int size)
//     {
//         data.resize(size+1);
//     }
//     void insert(int idx, int value)
//     {
//         while(idx < data.size())
//         {
//             data[idx] += value;
//             idx += idx & -idx;
//         }
//     }
//     int rsq(int from, int to)
//     {
//         return getSum(to) - getSum(from-1);
//     }
//     int getSum(int element)
//     {
//         int value = 0;
//         while(element != 0)
//         {
//             value += data[element];
//             element = element & (element - 1);
//         }
//         return value;
//     }
// };

void add(int idx, int val) {
    for (++idx; idx < n; idx += idx & -idx)
        h[idx] += val;
}

void range_add(int l, int r, int val) {
    add(l, val);
    add(r + 1, -val);
}

int point_query(int idx) {
    int ret = 0;
    for (++idx; idx > 0; idx -= idx & -idx)
        ret += h[idx];
    return ret;
}

bool fun(const int &a, const int &b){return query[a].f<query[b].f;}

int main(){
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)cin>>c[i];

    for(int i=1;i<=m;i++)cin>>day[i].f>>day[i].s;
    for(int i=1;i<=q;i++){cin>>query[i].f>>query[i].s.f>>query[i].s.s;sorted[i]=i;}
    fenwick<int> tmp(n);
    // for(int i=1;i<=n;i++){
    //     // h[i]=10; 
    //     tmp.modify(i,10);
    //     cout<<i<<endl;
    //     // for(int i=1;i<=n;i++)cout<<h[i]<<' ';
    //     cout<<tmp.get(i);
    //     cout<<endl;
    // }

    sort(sorted+1,sorted+q+1,fun);
    for(int i=1,j=1,t=1;i<=m && j<=q;i++,j++){
        if(h[day[i].f]+day[i].s<=c[day[i].s]) {tmp.modify(day[i].f,day[i].s);h[day[i].f]+=day[i].s;}
        else {tmp.modify(day[i].f,c[i]-h[day[i].f]);h[day[i].f]=c[day[i].f];}
        while(j<=q && j==query[sorted[t]].f){
            cout<<tmp.get(query[sorted[t]].s.s)<<' '<<tmp.get(query[sorted[t]].s.f-1)<<' '<<query[sorted[t]].s.s<<' '<<query[sorted[t]].s.f<<' '<<j<<endl;
            ans[sorted[t]]=tmp.get(query[sorted[t]].s.s)-tmp.get(query[sorted[t]].s.f-1);
            t++;
        }

    }
    for(int i=1;i<=q;i++)cout<<ans[i]<<endl;
}