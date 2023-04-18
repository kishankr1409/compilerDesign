#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &a,int n,int k){
    sort(a.begin(),a.end());

    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
      
        if(a[mid]==k){
            return mid;
        }else if(a[mid]>k){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int> a(n,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<f(a,n,m)<<endl;
}