#include<bits/stdc++.h>
using namespace std;

int minSwapsToMakeBeautiful(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> arrWithIndex(n);
    for (int i = 0; i < n; ++i) {
        arrWithIndex[i] = {arr[i], i};
    }
    sort(arrWithIndex.begin(), arrWithIndex.end());
    vector<bool> visited(n, false);

    int swaps = 0;
    for (int i = 0; i < n; ++i) {
       
        if (visited[i] || arrWithIndex[i].second == i) {
            continue;
        }

        int cycleSize = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = arrWithIndex[j].second;
            cycleSize++;
        }
        swaps += (cycleSize - 1);
    }

    return swaps;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = minSwapsToMakeBeautiful(arr);
    cout << result << endl;

    return 0;
}
