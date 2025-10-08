#include<bits/stdc++.h>
using namespace std;
   int main(){ 
    
    int n ;
    cin >> n ;
    int a[n-1];
    for(int i = 0 ; i < n-1; ++i){
        cin >>a[i];
    }

    // sum of all numbers of array 
    int sum_a = 0 ;
    for(int i=0 ; i <n -1; ++i ){
        sum_a = sum_a + a[i];
    }

    // sum of all the numbers from 0 to n 
    int sum_t = 0 ;
    for(int i=0 ; i <=n ; ++i ){
        sum_t = sum_t + i ;
    }

    // missing number 
    int result = sum_t - sum_a;
    cout<< result ;     
   }