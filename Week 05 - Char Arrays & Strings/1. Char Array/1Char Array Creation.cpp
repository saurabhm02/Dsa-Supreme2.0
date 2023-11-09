#include<bits/stdc++.h>

using namespace std;
#define ll long long

int findLength(char ch[], int size){
    // int length = 0;
    // for(int i=0; i<size; i++){
    //     if(ch[i]== '\0'){
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;
    int len = 0;
    while(ch[len] != '\0'){
        len++;
    }
    return len;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    // creation of character array
    char ch[50];
    // input
    // cin>>ch;
    // we can use for loop for taking input


    // output in char array
    // cout<<ch<<endl;
    // for(int i=0; i<10; i++){
    // 	cout<<ch[i];
    // }


    // for(int i=0; i<10; i++){
    // 	cout<<i<<" " <<ch[i]<<endl;
    // }

    // Use of getline
   
    cin.getline(ch, 50);
    cout<<ch<<endl;
    cout<<sizeof(ch)<<endl;

    // find length untill get the null character "\0"
    cout<<findLength(ch, 100)<<endl;

    // inBuilt fun for lenght
    cout<<strlen(ch)<<endl;
    return 0;
}

