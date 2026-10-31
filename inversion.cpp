#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;




// 転倒数を求める
// 73 rows
template<typename T>
struct BIT{
  ll n;
  ll k=1;
  vector<T>data;
  BIT() = default;
  BIT(ll size):n(size){
    data.assign(n,0);
    while(k*2<=n)k*=2;
  }
  void add(ll a,T w){
    for(ll i=a+1;i<=n;i+=i&-i)data[i-1]+=w;
  }
  T sum(ll a){//[0,a)
	  if(a<=0)return 0;
    T ret = 0;
    for(ll i=a;i>0;i-=i&-i)ret+=data[i-1];
    return ret;
  }
  //[a,b)
  T sum(ll a,ll b){return a>=b?0:sum(b)-sum(a);}
  T operator[](ll pos){
    return sum(pos,pos+1);
  }
  ll lower_bound(ll x){
    ll ret=0;    
    for(ll i=k;i>0;i/=2){
      if(ret+i<=n&&data[ret+i-1]<x){
        x-=data[ret+i-1];
        ret+=i;
      }
    }
    return ret;
  }
  void print(){
    for(ll i=0;i<n;i++){
      if(i!=0)cout<<" ";
      cout<<(*this)[i];
    }
    cout<<endl;
  }
};

template<typename T>
long long inversion(const vector<T> &_x,const vector<T> &_y){
  if(_x.size()!=_y.size())return -1;
  vector<pair<T,int>>x(_x.size()), y(_y.size());
  for(int i=0;i<x.size();i++)x[i]=make_pair(_x[i],i);
  for(int i=0;i<x.size();i++)y[i]=make_pair(_y[i],i);
  sort(x.begin(),x.end());
  sort(y.begin(),y.end());
  vector<int>idx(x.size());
  for(int i=0;i<x.size();i++){
    if(x[i].first!=y[i].first)return -1;
    idx[x[i].second]=y[i].second;
  }
  BIT<int>bit(idx.size());
  long long ret = 0;
  for(int i=0;i<idx.size();i++){
    ret += bit.sum(idx[i], idx.size());
    bit.add(idx[i], 1);
  }
  return ret;
}
long long inversion(const string &s, const string &t){
  return inversion(vector<char>(s.begin(), s.end()), vector<char>(t.begin(),t.end()));
}
template<typename T>
long long inversion(const T &x){
  T y = x;
  sort(y.begin(),y.end());
  return inversion(x,y);
}



int main() {

    return 0;
}
