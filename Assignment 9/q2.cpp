#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n+1]={0};
cout<<"Enter the Elements: "<<endl;
for (int i = 1; i < n+1; i++)
{
    cin>>arr[i];
}
int max=arr[0];
for (int  i = 0; i < n+1; i++)
{
    if(max<arr[i]){
        max=arr[i];
    }
}
cout<<max;


return 0;
}