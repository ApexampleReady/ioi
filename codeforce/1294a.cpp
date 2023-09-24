#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  ll n;
  cin >> n;

  for(int i = 0; i < n; i++){
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    ll sum = a + b + c + n;
    if(sum % 3 == 0 && sum / 3 >= max) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}
