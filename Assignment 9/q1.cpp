#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
cout<<"Enter the Elements: "<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int L,R;
cout<<"Enter L and R: ";
cin>>L>>R;
int sum=0;
for (int  i = L; i <=R; i++)
{
    sum+=arr[i];
}
cout<<sum;

return 0;
}