/*
lengli_QAQ
Hope there are no bugs!!!
*/
#include <bits/stdc++.h>
#define fastio std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0)
#define all(x) x.begin(),x.end()
#define pb push_back
#define i64 long long



void solve(){
    i64 n,a,b,c;
    std::cin>>n>>a>>b>>c;
    i64 res=0;
    if(a<=b-c) res=n/a;
    else{
        if(b>n) res=n/a;
        else{
            n-=b,res++;
            res+=n/(b-c);
            n%=(b-c);
            n+=c;
            res+=n/a;
        }
    }
    std::cout<<res<<"\n";
}

signed main(){
    fastio;
    
    int T;
    T=1;
    while(T--) solve();
    
    return 0;
}
