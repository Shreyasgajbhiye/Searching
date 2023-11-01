#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int low = 0;
    int high = (sizeof(arr)/4) -1;
    int n;
    cout << "ENter the element to be found " << endl;
    cin >> n;
    int mid;
    while(low<=high){
         mid = low+(high-low) /2;
        if(arr[mid] == n){
            cout << "Found at " << mid << endl;
            break;
        }
        if(arr[mid] < n){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    if(low>high){
            cout << "Not found..";
        }
    return 0;
}


//complexity O(log n)