//  Que. Debug the code. Return true if the number is member of fibonacci series else false.

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

//  before Debug
// void checkMember(int n){
//     int f1 = 1, f2 = 1;
//     if(n==0 && n==1){
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return false;
//             }
//             else if(temp>n){
//                 return true;
//             }
//         }
//     }

// }

// After Debug


bool checkMember(int n){  // void not use any return value only bool and int uses
    int f1 = 1, f2 = 1;
    if(n==0 || n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}
int main()
{
	int n;
	cin>>n;
	
    if(checkMember(n)){
        cout<<"Number is member of fibonacci series "<<endl;
    }
    else{
        cout<<"Number is not a member of fibonacci series "<<endl;
    }

    return 0;
}