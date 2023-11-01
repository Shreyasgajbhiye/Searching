#include<bits/stdc++.h>
using namespace std;
// int min(int x, int y) { return (x <= y) ? x : y; } 


int fiboSearch(int arr[], int x, int n){
    int fib2 = 0;
    int fib1 = 1;
    int fib = fib2+fib1;

    while(fib < n){
        fib2 = fib1;
        fib1 = fib;
        fib = fib2+fib1;
    }

    int offset = -1;

    while(fib > 1){
        int i = min(offset+fib2, n-1);

        if(arr[i] < x){
            fib = fib1;
            fib1 = fib2;
            fib2 = fib-fib1;
            offset = i;
        }

        else if(arr[i] > x){
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }

        else{
            return i;
        }

    }
    if (fib1 && arr[offset+1] == x){
        return offset+1;
    }

    else{
        return -1;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int q = fiboSearch(arr,6,size);
    cout << q ;
    return 0;
}