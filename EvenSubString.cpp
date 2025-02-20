//Link submit : https://codeforces.com/contest/1139/problem/A
#include <iostream>
#include <string>
using namespace std;

int even_idx[100000] ; 
int main() {
    int n; cin >> n ; 
    string t ; 
    cin >> t; 
    int cnt = 0 ; 
    
    int j = 0 ; 
    for(int i =0 ;i < t.size(); i++) {
        int k = t[i] - '0' ; 
        if(k%2 ==0) {
            even_idx[j] = i ; 
            j++ ; 
        }
    }
    for(int i =0; i < j;i++) {
        cnt += even_idx[i] + 1 ; 
    }
    cout << cnt ; 
}
