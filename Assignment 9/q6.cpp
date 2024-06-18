#include<iostream>
using namespace std;
void update(int arr[],int l , int r, int x){
    for(int i=l;i<=r;i++){
        arr[i]+=x;
    }
}
int main()
{

int n,q,x,l,r;
cout<<"Enter the n: ";
cin>>n;
int arr[n]={0};

cout<<"Enter the number of updates(q): ";
cin>>q;
cout<<"Enter the X: ";
cin>>x;
while(q!=0){
    cout<<"Enter L and R: ";
    cin>>l>>r;
    update(arr,l,r,x);
    q--;
}
for(int ele: arr){
    cout<<ele<<" ";
}
return 0;
}