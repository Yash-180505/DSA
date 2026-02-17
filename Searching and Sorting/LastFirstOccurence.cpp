#include<bits/stdc++.h>
using namespace std;

vector<int> SearchRange(vector<int> arr, int target) {
    int first = -1, last = -1;
    int low = 0, high = arr.size() - 1;


    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    low = 0;
    high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return {first, last};
}

int main() {
    vector<int> arr = {5,7,7,8,8,10};

    vector<int> ans = SearchRange(arr, 8);

    cout << "First Occurrence: " << ans[0] << endl;
    cout << "Last Occurrence: " << ans[1] << endl;
}
