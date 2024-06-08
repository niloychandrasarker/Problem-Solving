#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    vector<int> d(m);
    map<int,int> error, correct, correct1;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i])
            error[b[i]]++;
        else
            correct1[b[i]]++;
    }
    for(int i = 0; i < m; i++)
        cin >> d[i];
    for(int i = 0; i < m; i++)
        correct[d[i]]++;
    bool flag = true;
    int sum = 0;
    for(auto it : error){
        if(error[it.first] > correct[it.first]){
            flag = false;
            break;
        }else{
            sum += error[it.first];
        }
    }
    if(m - sum > 0){                          
        for(auto it : correct1){                 
            if(!correct[it.first]){
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}