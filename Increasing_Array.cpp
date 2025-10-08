
#include<bits/stdc++.h>
using namespace std;
int main(){

    // size of array
    int n;
    cin >> n;

    //contents of the array
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >>arr[i];
    }

    // minimum number of moves for increasing array
    int move = 0;
    for(int i =0 ; i<n ; i++){
        if(arr[i] > arr[i+1]){
            int diff = arr[i]-arr[i+1];
            arr[i+1] = arr[i+1] + diff; //for udatinng the array
            move = move + diff;
        }
    }
    cout<< move;

   
}