#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr, int n) {

    set<int> st;

    // Put all elements into set
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    // Put unique elements back into array
    int index = 0;

    for (auto it : st) {
        arr[index] = it;
        index++;
    }

    return index;
}

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Number of unique elements: " << k << endl;

    return 0;
}