//    * 
//   * * 
//  *   * 
// *     * 
// *     * 
//  *   * 
//   * * 
//    *
#include<iostream>
using namespace std;
#define ll long long

void hollowFullDiamand(int size){
    for(int rows=0; rows<size; rows++){
        for(int coln=0; coln<size-rows-1; coln++){  // for space
            cout<<" ";
        }
        for(int coln=0; coln<rows+1; coln++){
            if(coln == 0 || coln == rows+1-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";  // for space
            }
        }
        cout<<endl;
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<i; j++){  // for space
            cout<<" ";  
        }
        for(int j=0; j<size-i; j++){
            if(j==0 || j==size-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";  // for space
            }
        }
        cout<<endl;
    }
    
}
int main()
{
    int size;
    cin>>size;
    hollowFullDiamand(size);
    
    return 0;
}