// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[]={12,8,43,28,58};
    int n=sizeof(arr)/sizeof(int);
    int max=INT_MIN;
    int s_max=INT_MIN;
    int min=INT_MAX;
    int s_min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            s_max=max;
            max=arr[i];
            } 
            else if(arr[i]>s_max && arr[i]!=max){
            s_max=arr[i];
            } 
             if(arr[i]<min){
                 s_min=min;
                 min=arr[i];
            } 
          else if(arr[i]<s_min && arr[i]!=min){
            min=s_min;
            } 
              } 
    cout<<"second highest:"<<s_max<<" "<<endl;
     cout<<"second highest:"<<s_min<<" "<<endl;
    return 0;
}