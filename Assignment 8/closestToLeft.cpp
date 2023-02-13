#include <bits/stdc++.h>
using namespace std;
int binarySearch(int qr[], int target, int high, int low ){
    
    int mid = low + (high - low)/2;
    
    if(high < low){
        return mid;
    }
    
    if(qr[mid] > target){
        return binarySearch( qr, target, mid-1, low);
    }
    if(qr[mid] <= target){
        return binarySearch( qr, target, high, mid+1);
    }
    
    return mid;
    
}
 
 
 
int main() {
    // Write C++ code here
    int n, k;
    cin>>n>>k;
    
    int arr[n];
    for(auto &i: arr){
        cin>>i;
    }
    int query[k];
    for(auto &j: query){
        cin>>j;
    }
    
    for(int l = 0; l < k; l++){
        cout<<binarySearch(arr, query[l], n-1, 0)<<endl;
    }
    
    
 
    return 0;
}
