#include<bits/stdc++.h>
using namespace std;

#define yes            cout<<"YES"<<endl;
#define no              cout<<"NO"<<endl;
#define endl           "\n"
#define first           ff
#define second          ss
#define ll             long long int 
#define ull             unsigned long long int
#define mod             1000000007
#define PI              3.1415926535897932384626433832795
#define lld             long double
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)       (a * (b / gcd(a, b)))
#define pb               push_back
#define eb               emplace_back
#define MAX(x)          *max_element(all(x))
#define MIN(x)          *min_element(all(x))
#define loop(i, n)       for (ll i = 0; i < n; i++)
#define loop1(i, s, e)   for (ll i = s; i <= e; i++)
#define loop2(i, s, e)   for (ll i = s; i < e; i++)
#define rloop(i, n)      for (ll i = n - 1; i >= 0; i--)
#define rloop1(i, s, e)  for (ll i = s; i >= e; i--)
#define rloop2(i, s, e)  for (ll i = s; i > e; i--)
#define tsp << " " <<

template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.fi);
    cerr << ",";
    _print(p.se);
    cerr << "}";
}

bool isPrime(ll n)
{
    loop1(i, 2, sqrt(n))
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

ll nCr(ll n, ll r)
{
    ll cnt1 = 1;

    loop(i, r)
    {
        cnt1 *= (n - i);
        cnt1 /= (i + 1);
    }
    return cnt1;
}


void solve(){

}

int32_t main(){
  
  int t=1;
  //cin>>t;
  while(t--){
    stack<int> stk;
    string s;
    cin>>s;
    
    

     

  }

}