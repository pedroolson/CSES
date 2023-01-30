#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define endl '\n'
#define pb push_back
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int,int>;
using iii = tuple<int,int,int>;

const int inf = 2e9+1;
const int mod = 1e9+7;
const int maxn = 3e5+100;

template<typename X, typename Y> bool ckmin(X& x, const Y& y) { return (y < x) ? (x=y,1):0; }
template<typename X, typename Y> bool ckmax(X& x, const Y& y) { return (x < y) ? (x=y,1):0; }


void solve(){
    int n; cin>>n;
    if(n<=3&&n!=1)cout<<"NO SOLUTION"<<endl;
    else {
        for(int i=2; i<=n; i+=2)
            cout<<i<<" ";
        for(int i=1; i<=n; i+=2)
            cout<<i<<" ";
        cout<<endl;
    }
}


int main(){_
    //freopen("in.in", "r", stdin);
    //freopen("out.out", "w", stdout);
    solve();
}