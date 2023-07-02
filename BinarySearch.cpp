#include <iostream>

using namespace std;

int BinarySearch(int arr[], int size,int key)
{
    int start =0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end) {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start = mid+1;

        }
        else {
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[] = {4,5,7,8,11,12,34};
    int size = sizeof(even)/sizeof(even[0]);
   int evenIndex =  BinarySearch(even,size,12);
   cout<<"12 is in index "<<evenIndex<<endl;
   return 0;

}