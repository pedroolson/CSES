#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

template<typename X, typename Y> bool ckmin(X& x, const Y& y) { return (y < x) ? (x=y,1):0; }
template<typename X, typename Y> bool ckmax(X& x, const Y& y) { return (x < y) ? (x=y,1):0; }

int main(){
    string s; cin>>s;
    int c=1, max=1;
    for(int i=1; i<s.size(); i++){
        c=(s[i]==s[i-1]?c+1:1);
        max=(c>max?c:max);
    }
    cout<<max<<endl;
}