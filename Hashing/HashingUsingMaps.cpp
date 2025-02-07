// Hashing using maps
// Take in the array and then pre compute the map that stores the 
// array entry as key and the corresponding frequency as it's value!

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++; // Updates the frequency of the element
    }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
}
