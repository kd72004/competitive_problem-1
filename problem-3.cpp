#include<iostream>
using namespace std;
int pickIndexOfMountainArray(int *arr,int size)
{
    // int index=-1;
    // int max=-123;
    // int i;
    // for( i=1;i<size;i++)
    // {
    //     if(arr[i-1]>arr[i])
    //     {
    //         break;
    //     }
    // }
    // cout<<"element at pick -> "<<arr[i-1]<<endl;
    // return i-1;
    int i;
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    
    while(start<=end)
    {
        
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return(arr[mid]);
            break;
        }
        else if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
        }
    return 0;
}
int main()
{
    int arr[6]={1,2,3,4,2,1};
    int size=6;
    cout<<pickIndexOfMountainArray(arr,size);
}