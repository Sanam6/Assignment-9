#include<iostream>
using namespace std;
int productarray(int arr[],int ans[],int n){
    int product;
    for(int i =0;i<n;i++){
        product=1;
        int j=0,k=n-1;
        while(j<i||k>i){
            if(j<i){
                product*=arr[j++];
            }
            if(k>i){
                product*=arr[k--];
            }
        }
        ans[i]=product;
    }
}



int main()
{
int n;
cin>>n;
int arr[n],ans[n];
cout<<"Enter the Elements: "<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
productarray(arr,ans,n);
for(int i=0;i<n;i++){
    cout<< ans[i]<<" ";
}
return 0;
}