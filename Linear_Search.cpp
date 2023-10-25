#include <iostream>
using namespace std;

void func(int arr[],int n,int e)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            cout<<"Element found at index "<<i<<endl;
            exit(1);
        }
    }
    cout<<"Element not in array";
}

int main()
{
    int n,num;
    cout<<"Enter number of terms : ";
    cin>>n;
    int arr[n];
    cout<<"Enter values in array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter number to be found : ";
    cin>>num;
    func(arr,n,num);
    return 0;
}
