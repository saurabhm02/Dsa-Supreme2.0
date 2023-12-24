#include<bits/stdc++.h>

using namespace std;
#define ll long long

void changeSign(int *p){
    *p *= -1;
}

void fun(int a[]){
	cout<<a[0]<<" ";
}

void square(int *p){
	int a = 10;
	p = &a;
	*p *= *p;
	// cout<<*p<<" ";
}

void Q(int z){
	z += z;
	cout<<z<<" ";
}

void P(int *y){
	int x = *y + 2;
	Q(x);
	*y = x - 1;
	cout<<x<<" ";
}

int f(int x, int *py, int **ppz){
	int y, z;
	**ppz += 1;
	z = **ppz;
	*py += 2;
	y = *py;
	x += 3;
	return x + y + z;
}

void increment(int **p){
	(**p)++;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

   // Que 1.
    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<< *ptr <<" "<<f<<" "<<p<<endl;
    // -----> 2.5 2.5 2.5

   // Que 2.
    // int a = 7;
    // int b = 17;
    // int* c = &b;
    // *c = 7;
    // cout<<a<<" "<<b<<endl;
    // ----> 7 7

   // Que 3.
   //  int* ptr = 0;
   //  int a = 10;
   //  *ptr = a;
   //  cout<< *ptr<<endl;
    // ----> Error 

   // Que 4.
   //  Which gives the memory address of variable 'b' pointed by pointer 'a' i.e
   //  int b = 10;
   //  int *a = &b;
    // -----> a

   // Que 5.
   //  char ch = 'a';
   //  char* ptr = &ch;
   //  ch++;
   //  cout<< *ptr <<endl;
    // ----> b

   // Que 6.
   //  int a = 7;
   //  int* c = &a;
   //  c = c + 1;
   //  cout<<a<<" "<< *c<<endl;
    // ----> 7 gv

   // Que 7.
   //  int a = 7;
   //  int *c = &a;
   //  c = c + 3;
   //  cout<<c<<endl;
    // ----> if &a = 400  then c = 412

   // Que 8.
   //  double a = 10.54;
   //  double *d = &a;
   //  d = d + 1;
   //  cout<<d<<endl;
    // ----> if &a = 200 then d = 208

   // Que 9.
   //  int a[5];
   //  int *c;
   //  cout<<sizeof(a)<<" "<<sizeof(c)<<endl;
    // ----> 20 4

   // Que 10.
   //  int a[] = {1, 2, 3, 4};
   //  cout<<*(a)<<" "<<*(a + 1)<<endl;
    // ---> 1 2

   // Que 11.
   //  int a[3] = {1, 2, 3};
   //  cout<<*(a + 2)<<endl;
    // ----> 3

   // Que 12.
    // int a[] = {1, 2, 3, 4};
    // int *p = a++;
    // cout<< *p<<endl;
    // ----> ERROR

   // Que 13.
    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout<< *arr + 9<<endl;
    // ----> 13

   // Que 14.
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout<<c<<endl;
    // ----> xyz

   // Que 15.
    // char s[] = "hello";
    // char *p = s;
    // cout<<s<<s[0]<<endl;
    // ----> h

   // Que 16.
    // char arr[20];
	// int i;
	// for(i = 0; i < 10; i++){
	//     *(arr + i) = 65 + i;
	// }
	// *(arr + i) = '\0';
	// cout << arr;
	// ----> ABCDEFGHIJ

   // Que 17.
    // char *ptr;
    // char str[] = "abcdefg";
    // ptr = str;
    // ptr += 5;
    // cout<<ptr;
    // ----> fg

   // Que 18.
    // int numbers[5];
    // int *p;
    // p = numbers;
    // *p = 10;
    // p = &numbers[2];
    // *p = 20;
    // p--;
    // *p = 30;
    // p = numbers + 3;
    // *p = 40;
    // p = numbers;
    // *(p + 4) = 50;
    // for(int i=0; i<5; i++){
    // 	cout<<numbers[i]<<" ";
    // }

    // ----> 10 30 20 40 50 

   // Que 19.
   //  char st[] = "ABCDE";
   //  for (int i = 0; st[i] != '\0' ; i++)
   //  {
   //  	cout<<st[i]<<" "<<*(st) + i <<" "<<*(i + st)<<" "<< i[st];
   //  	cout<<endl;
   //  }
   //  ---->   A 65 A A
			// B 66 B B
			// C 67 C C
			// D 68 D D
			// E 69 E E

   // Que 20.
    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout<<*ptr2<<" ";
    // cout<<ptr2 - ptr1<<" ";
    // cout<<(*ptr2 - *ptr1)<<endl;
    // ----> 90.5 3 78 

   // Que 21.
    // int a = 10;
    // changeSign(&a);
    // cout<<a<<endl;
    // ----> -10

   // Que 22.
    // int a[] = {1, 2, 3, 4, 5};
    // fun(a + 1);
    // cout<<a[0];
    // ----> 2 1

   // Que 23.
    // int a = 10;
    // square(&a);
    // cout<<a<<endl;
    // ----> 10

   // Que 24.
    // int x = 5;
    // P(&x);
    // cout<<x<<endl;
    // ----> 14 7 6

   // Que 25.
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout<<a<<" "<<b<<endl;
    // ----> 10 21

   // Que 26.
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout<<f(c, b, a);
    // ----> 19

   // Que 27.
    // int ***r, **q, *p, i=8;
    // p = &i;
    // (*p)++;
    // q = &p;
    // (**q)++;
    // r = &q;
    // cout<<*p<<" "<<**q<<" "<<***r;
    // ----> 10 10 10

   // Que 28.
    // int num = 10;
    // int *ptr = &num;
    // increment(&ptr);
    // cout<<num<<endl;
    // ----> 11






    return 0;
}