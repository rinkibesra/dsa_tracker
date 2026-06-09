// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[]={12,8,43,28,58};
    int n=sizeof(arr)/sizeof(int);
    int max=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
          max=arr[i];
            
        }
    } 
    cout<<"highest:"<<max<<" "<<endl;
     
    return 0;
}