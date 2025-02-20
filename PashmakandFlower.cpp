//Link submit : https://codeforces.com/contest/459/problem/B

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n; 
    vector<int> beautifulFlower(n); 

    for(int i = 0; i < n; i++) {
        cin >> beautifulFlower[i];
    }

    sort(beautifulFlower.begin(), beautifulFlower.end());

    int deltaMax = beautifulFlower[n-1] - beautifulFlower[0];

    if (deltaMax == 0) { 
        // Tất cả phần tử giống nhau, số cách chọn = nC2 = n * (n - 1) / 2
        cout << deltaMax << " " << (1LL * n * (n - 1)) / 2 << endl;
        return 0;
    }

    auto itMin = upper_bound(beautifulFlower.begin(), beautifulFlower.end(), beautifulFlower[0]); 
    auto itMax = lower_bound(beautifulFlower.begin(), beautifulFlower.end(), beautifulFlower[n-1]);

    int sl_Min = (itMin - beautifulFlower.begin()); 
    int sl_Max = (beautifulFlower.end() - itMax); 

    cout << deltaMax << " " << 1LL * sl_Max * sl_Min << endl; 

    return 0;
}
