#include <iostream>
using namespace std;

int FirstOcc(int arr[],int n, int key)
{
    int start=0,end=n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}

int LastOcc(int arr[],int n, int key)
{
    int start=0,end=n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}

int main()
{
    int array[]={1,2,3,3,3,3,4};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"first occ is "<<FirstOcc(array,n,3);
    cout<<"\nLast occ is "<<LastOcc(array,n,3);
}


