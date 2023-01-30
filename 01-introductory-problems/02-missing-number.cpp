#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int n; cin>>n;
    bool v[n+1]; for(int i=1; i<=n; i++)v[i]=false;
    int i;
    for(i=1; i<=n-1; i++){
        int k; cin>>k;
        v[k]=true;
    }
    for(i=1; i<=n; i++)
        if(!v[i])break;
    cout<<i<<endl;
}