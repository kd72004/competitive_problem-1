#include<iostream>
using namespace std;
int pickIndexOfMountainArray(int *arr,int size)
{
    int index=-1;
    int max=-123;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    cout<<"element at pick -> "<<max<<endl;
    return index;
}
int main()
{
    int arr[5]={1,2,3,2,1};
    int size=5;
    cout<<pickIndexOfMountainArray(arr,size);
}