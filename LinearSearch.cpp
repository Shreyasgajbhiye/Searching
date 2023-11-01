#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n;
    cout << "Enter the element to be search : ";
    cin >> n;
    int size=sizeof(arr)/4;
    for(int i=0;i<size;i++){
        if(arr[i] == n){
            cout << "Element found at " << i << "th location";
            break;
        }
    }
    return 0;
}


//Complexity is o(n)
//It wll take 2*N+1 comparisions