#include<iostream>
using namespace std;

int subarraywithoddsum(int arr[],int n){
    int count=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum%2!=0){
                count++;
            }
        }
        
    }
 return count;
    
}

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

cout<<"Subsets: "<<subarraywithoddsum(arr,n);
return 0;
}