#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr)/4;
    int n;
    cout << "Enter the element to be search : " << endl;
    cin >> n;

    int temp = arr[size-1];
    arr[size-1] = n;

    int i=0;
    while(arr[i] != n){
        i++;
    }

    arr[size-1] = temp;

    if(i <= size-1 && arr[i] == n){
        cout << "Found at " << i << "th index.";
    }

    else{
        cout << "Not found";
    }
    return 0;
}

//Complexity O(n)
//use to avoid out of bounds comparisons, no additional comparision are made of a specific for the index of the element be search.
//It wll take N+2 comparisions