#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;

    // separate even and odd array
    int even[n] ;
    int odd[n];
    int idx_e =0; 
    int idx_o =0;

    for(int i = n ; i >=1; --i){
        if(i%2==0){
            even[idx_e] =i;
            idx_e ++ ;
        }
        else{
            odd[idx_o] = i;
            idx_o ++;
        }
    }

    // main array 
    int a[n];
    int idx = 0 ;

    for(int i = 0 ; i <idx_e; i++){
        a[idx] = even[i];
        idx++;
    }
    for(int i = 0 ; i <idx_o; i++){
        a[idx] = odd[i];
        idx++;
    }

    // condition of no solution 
    for(int i =0 ; i< n-1 ; ++i){
        
        if(a[i+1]-a[i]==1){
            cout << "NO SOLUTION";
            return 0;
        }    
    } 

    // if there is a solution(permutation of integers)
    for(int k= 0 ; k<n; k++){
        cout << a[k] << " ";
    }

    

}
