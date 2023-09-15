#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  ll n;
  cin >> n;

  if(n % 2 == 0 && n >= 4){
    cout << "YES";
    return 0;
  }
  cout << "NO";
  

  return 0;
}
