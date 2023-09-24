#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin >> n;
    for(int i = 0; i<n;i++ ){
        string input;
        cin >> input;
        if(input.length() > 10) {
            cout << input;
        }
        else{
            cout << input[0] << input.size()-2 << input[input.length()-1];
        }
    }

    return 0;
}
