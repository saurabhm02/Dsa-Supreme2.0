#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int a;
    cin>>a;

    int* ptr = &a;
    // cout<<"value of a : "<<a<<endl;
    // cout<<"value of &a : "<<&a<<endl;
    // cout<<"value of ptr : "<<ptr<<endl;
    // cout<<"value of *ptr : "<<*ptr<<endl;
    // cout<<"value of &ptr : "<<&ptr<<endl;
    // cout<<"size of ptr : "<<sizeof(ptr)<<endl;
    // cout<<endl;


    // a = a + 1;
    // ptr = ptr + 1;
    // cout<<"value of a : "<<a<<endl;
    // cout<<"value of &a : "<<&a<<endl;
    // cout<<"value of ptr : "<<ptr<<endl;
    // cout<<"value of *ptr : "<<*ptr<<endl;
    // cout<<"value of &ptr : "<<&ptr<<endl;
    // cout<<"size of ptr : "<<sizeof(ptr)<<endl;
    // cout<<endl;

    // a = a + 1;
    // ptr = ptr + 1;
    // *ptr += 1;
    // cout<<"value of a : "<<a<<endl;
    // cout<<"value of &a : "<<&a<<endl;
    // cout<<"value of ptr : "<<ptr<<endl;
    // cout<<"value of *ptr : "<<*ptr<<endl;
    // cout<<"value of &ptr : "<<&ptr<<endl;
    // cout<<"size of ptr : "<<sizeof(ptr)<<endl;
    // cout<<endl;

    // string s;
    // cin>>s;
    // string* sptr = &s;
    // cout<<"value of s : "<<s<<endl;
    // cout<<"value of &s : "<<&s<<endl;
    // cout<<"value of sptr : "<<sptr<<endl;
    // cout<<"value of *sptr : "<<*sptr<<endl;
    // cout<<"value of &sptr : "<<&sptr<<endl;
    // cout<<"size of sptr : "<<sizeof(sptr);

    // cout<<"value of a : "<<a<<endl;
    // cout<<"value of &a : "<<&a<<endl;
    // cout<<"value of *a : "<<*a<<endl;
    // cout<<"value of ptr : "<<ptr<<endl;
    // cout<<"value of *ptr : "<<*ptr<<endl;
    // cout<<"value of &ptr : "<<&ptr<<endl;
    // cout<<"value of (*ptr)++ : "<<(*ptr)++<<endl;
    // cout<<"value of *ptr : "<<*ptr<<endl;
    // cout<<"value of ++(*ptr) : "<<++(*ptr)<<endl;
    // *ptr = (*ptr) / 2;
    // cout<<"value of *ptr : "<<*ptr<<endl;
    // cout<<"value of (*ptr)-2 : "<<(*ptr)-2<<endl;

    // int*q = ptr;
    // cout<<"Value of q : "<<q<<endl;
    // cout<<"value of &q : "<<&q<<endl;
    // cout<<"value of *q : "<<*q<<endl;



    // Pointer with Array

    // int arr[5] = {10, 20, 30, 40 ,50};
    // for(int i=0; i<5; i++){
    // 	cout<<arr[i]<<" "<<(arr + i)<<" "<<*(i + arr)<<endl;
    // 	// cout<<arr+i<<endl;
    // }
    // cout<<endl;
    // cout<<"value of arr : "<<arr<<endl;
    // cout<<"value of &arr : "<<&arr<<endl;
    // cout<<"value of arr[0] : "<<arr[0]<<endl;
    // cout<<"value of &arr[0] : "<<&arr[0]<<endl;
    // cout<<"value of *arr : "<< *arr <<endl;
    // cout<<"value of *arr + 1 : "<< *arr + 1<<endl;
    // cout<<"valueof *(arr) + 1 : "<< *(arr) + 1<<endl;
    // cout<<"value of *(arr + 1) : "<< *(arr + 1) <<endl;
    // cout<<"value of *(arr + 2) : "<< *(arr + 2) <<endl;
    // cout<<"value of *(arr + 3 ) : "<< *(arr + 3) <<endl;
    // cout<<"Value of &arr[1] : "<<&arr[1]<<endl;
    // cout<<"value of &arr[2] : "<<&arr[2]<<endl;
    // cout<<"value of &arr[3] : "<<&arr[3]<<endl;
    // cout<<"value of &arr[4] : "<<&arr[4 ]<<endl;

    // cout<<endl<<endl;
    // int arr[5] = {10, 20, 30, 40, 50};
    // int *p = arr;
    // int *q = arr + 1;
    // cout<<"size of p : "<<sizeof(p)<<endl;
    // cout<<"value of arr : "<<arr<<endl;
    // cout<<"value of &arr : "<<&arr<<endl;
    // cout<<"value of arr[0] : "<<arr[0]<<endl;
    // cout<<"value of &arr[0] : "<<&arr[0]<<endl;
    // cout<<"value of P : "<<p<<endl;
    // cout<<"value of &p : "<<&p<<endl;
    // cout<<"value of *p : "<<*p<<endl;
    // cout<<"value of q : "<<q<<endl;
    // cout<<"value of &q : "<<&q<<endl;
    // cout<<"value of *q : "<<*q<<endl;
    // cout<<"value of *p + 1 : "<<*p + 1<<endl;
    // cout<<"value of *(p) + 2 : " <<*(p) + 2<<endl;
    // cout<<"value of *(q) + 2: " <<*(q) + 2<<endl;
    // cout<<"value of *(q + 4) : "<<*(q + 4)<<endl;


    char ch[50] = "saurabh";
    char *cptr = ch;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<cptr<<endl;
    cout<<&cptr<<endl;
    cout<<*cptr<<endl;






    return 0;
}