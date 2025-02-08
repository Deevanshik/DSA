#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mpp;
    vector<int> arr;
    int n;
    cin >> n;
    // Taking the input of the array
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    // Setting the frequency of every element
    for(auto value: arr){
        mpp[value]++;
    }
    vector<pair<int, int>> v;
    // Copying the map to a vector
    copy(mpp.begin(), mpp.end(), back_inserter(v));
    for(auto it: v){
        cout << it.first << " " << it.second << endl;
    }
    // Sorting the vector based on the second element
    sort(v.begin(), v.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });
    cout << endl;
    for(auto it: v){
        cout << it.first << " " << it.second << endl;
    }
}
