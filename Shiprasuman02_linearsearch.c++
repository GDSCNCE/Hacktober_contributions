#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
int i;
for(i=0;i<n;i++)
if(arr[i]==x)
return i;
return -1;
}
int main()
{
int arr[]={2,3,4,10,40};
int x=10;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Array:";
for(int i=0;i<n;i++){
cout<<arr[i]<< " ";
}
int result=search(arr,n,x);
(result==-1)
?cout<<"\n"<<x<<"is not present in array"
:cout<<"\n"<<x<<" is present at index"
<<result<<endl;
system ("read -p '\n' var");
return 0;
}
