#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ll n;
  cin >> n;

  for(int i = 0; i < n; i ++){
      int length;
      cin >> length;
      vector<int> vec;
      int minint = 10;
      int minindex = 0;

      for(int j = 0;j<length;j++){
          int cur;
          cin >> cur;
          if(cur < minint){
              minint = cur;
              minindex = j;
          }
          vec.push_back(cur);
      }
      vec[minindex] += 1;
      ll ans = 1;

      for(int j = 0; j < size(vec);j++){
          ans = ans * vec[j];
      }
      cout << ans << "\n";
  }


  return 0;
}
