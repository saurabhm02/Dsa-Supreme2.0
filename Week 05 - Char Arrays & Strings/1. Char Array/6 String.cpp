#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    string str;
    // cin>>str;

    getline(cin, str);
    cout<<str<<endl;

    // cout<<str[0]<<endl;

    // int i=0;
    // while(str[i] != '\0'){
    // 	cout<<i<<" "<<str[i]<<endl;
    // 	i++;
    // }

//     cout<<str.length()<<endl;
//     cout<<str.empty()<<endl;
//     cout<<str.at(0)<<endl; // to get the 1st element of the string

//     cout<<str.front()<<endl;
//     cout<<str.back()<<endl;

// // Append function
//     string st1 = "Saurabh";
//     string st2 = "Mahapatra";

//     cout<<st1<<endl;\
//     cout<<st2<<endl;

//     st1.append(st2);

//     cout<<st1<<endl;

// // Erasea function

//     st1.erase(2,6);
//     cout<<st1;
//     return 0;

// insert function

    string m = "Dhirendra";

    str.insert(8, m);
    cout<<str<<endl;

//Push & Pop Function

str.push_back('A');
cout<<str<<endl;

str.pop_back();
cout<<str<<endl;

// find fun

string strn ="aur bhai kya haal hai";
string strn1 = "bhai";
if(strn.find(strn1) == string::npos){
    cout<<"not found"<<endl;
}
else{
    cout<<"Found"<<endl;
}

// Compare function

string ss = "saurabh";
string ss2 = "saurabh";

if(ss.compare(ss2) == 0){
    cout<<"matching"<<endl;
}
else{
    cout<<"Not Matching"<<endl;
}

// substring
string strnn ="aur bhai kya haal hai";
cout<<strnn.substr(4, 4)<<endl;
}

