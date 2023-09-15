#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ll n;
  ll k;
  cin >> n >> k; 
  int max = -INFINITY;
  int secmax = -INFINITY;

  for(int i = 0; i<n;i++ ){
    int x;
    cin >> x;
    if(x>max){
      max = x;
    }
    else if(x>secmax){
      secmax = x;
    }
  } 
  cout << secmax <<"\n";


}
