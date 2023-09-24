#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin >> n;

    for(int i = 0; i < n; i++){

        ll numath;
        cin >> numath;
        vector<int> str;
        vector<int> end;

        for(int j = 0; j< numath; j++){
            int curstr, curend;
            cin >> curstr >> curend;
            str.push_back(curstr);
            end.push_back(curend);

        }
        bool possible = true;
        for(int j = 1; j < numath ;j++){
            if(str[j] == str[0] && end[j] == end[0]){
                possible = false;
            }
            if(str[j] < str[0]){
                continue;
            }
            else{
                if(end[j] >= end[0]){
                    possible = false;
                }
            }
        }
        if(possible){
            cout << str[0] - 1;
        }
        else{
            cout << -1;
        }
        cout << "\n";
    }



    return 0;
}
