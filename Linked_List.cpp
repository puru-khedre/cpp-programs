// 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter: "<<endl;
    cin>>n;

    int arr[2*n-1][2*n-1];
    int i,j,k,l;

    for(i=0;i<n;i++)
    {
        l=n-i;
        for(j=i;j<2*n-1-i;j++)
        {
            for(k=i;k<2*n-1-i;k++)
            {
                arr[j][k]=l;
            }
        }
    }

    for(j=0;j<2*n-1;j++)
        {
            for(k=0;k<2*n-1;k++)
            {
                cout<<arr[j][k]<<" ";
            }
                cout<<endl;
        }
        return 0;
}