//Link Submit : https://codeforces.com/contest/1360/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int evenEle = 0, oddEle = 0;
        vector<int> vct;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vct.push_back(x);
            if (x % 2 == 0)
                evenEle++;
            else
                oddEle++;
        }
        bool check = true; 
        if (evenEle % 2 == 0 && oddEle % 2 == 0) {
            cout << "YES" << endl; 
            check = false ; 
        }

        // Nếu 2 nhóm đều có số lượng phần tử lẻ thì kiểm tra xem có cặp nào có delta = 1 không
        sort(vct.begin(), vct.end());
         

        if(check){
            for (int i = 0; i < n - 1; i++) {
                if (abs(vct[i + 1] - vct[i]) == 1) {
                    cout << "YES" << endl; 
                    check = false ; 
                    break;
                }
            }
        }

        if(check) cout << "NO" << endl ; 
    }
}
