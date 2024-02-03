// // differnce between encapsulation and abstraction 
// // Incapsulation - Diamand problem
// // differnce between Compile-time vs Run-time polymorphism
// // example of abstraction and encapsulation

// // Dynamic memory allocation
// // Program start
// 		// 1. Stat memory
// 			// -> Local variable
// 			// -> func parameters
// 			// -> small memory by default
// 			// -> deallocatae the memory atumatically


//         // 2. Heap Memory
// 			// -> Big memory by default
// 			// -> Acces by using " new " keyword
// 			// -> when we use new keyword to alloacte Heap memory it returns a address
// 			// -> address using pointer
// 			// -> we have to deallocate the memory after using  from the heap to release the memory using " delete " keyword
// 			// -> 


// // 2D Array using heap
// // [
// // 	int ** arr = new int*[row]
// // 	for(int i=0; i<row; i++){
// // 		arr[i] = new int[col];
// // 	}
// // ]
// // ---> 2D array -> arr[row][col]


#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	int row = 3;
	int col = 2;

	int **arr = new int*[5];

	for(int i=0; i<row; i++){
		arr[i] = new int[col];
	}

	// for(int i=0; i< row; i++){
	// 	for(int j=0; j< col; j++){
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// cout<<endl;
	// }

	for(int i=0; i<row; i++){
		delete []arr[i];
	}
	delete []arr;

	// // 2D vector

	// vector< vector<int>> arr(n , vector<int>(m, 0));

	// vector<vector<int>>arr(4 , vector<int>(3, 0));

	// for(int i=0; i< 4; i++){
	// 	for(int j=0; j< 3; j++){
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }



    return 0;
}

