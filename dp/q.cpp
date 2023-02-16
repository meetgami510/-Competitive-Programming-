#include<bits/stdc++.h>   
using namespace std;

int partition(vector<int> &ans,int low,int high){
    int pivot = ans[low];
    int i = low;
    int j = high;

    while(i<j){
        do{
            i++;
        }while(ans[i]<=pivot);
        do{
            j--;
        }while(ans[j]>pivot);
        if(i<j) {
            swap(ans[i],ans[j]);
        }
    }
    swap(ans[low],ans[j]);
    return j;
}
void Qucksort(vector<int> &ans,int low,int high) {

    if(low < high){
        int p = partition(ans,low,high);

        Qucksort(ans,low,p-1);
        Qucksort(ans,p+1,high);
    }
    
}

int main() {

    cout<<"Enter the number of Elements  :";
    int n;
    cin>>n;

    cout<<endl;

    cout<<"Enter the array Elements :";
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    cout<<"Before Sorting the Array :";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    Qucksort(ans,0,n-1);

    cout<<"After Sorting the Array :";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}