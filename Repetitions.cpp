#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin>>s;

    int rep1 = 1;
    int rep2 = 1;

    // length of longest repetition in string
    for(int i = 0 ; i < s.size()-1 ; i++){

        if(s[i]== s[i+1]){
            rep1 =rep1 + 1;
        }
        
        else{
            rep2= max(rep1, rep2); 
            rep1 =1 ;
        }
    }
    cout<< max(rep1, rep2);

}