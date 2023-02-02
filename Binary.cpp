#include<iostream>
using namespace std;



int find(int arr[],int n, int key){
   
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        cout<<"valueo of mid"<<mid<<endl;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    
    cout<<"Enter Array size"<<endl;    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    
    cout<<"\nvalue is "<<find(arr,n,203);
    return 0;
}