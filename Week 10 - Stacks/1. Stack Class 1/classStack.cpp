#include <iostream>
// #include<stack>

using namespace std;
#define ll long long

class Stack {
public:
  int *arr;
  int size;
  int top;

  Stack(int size) : arr(new int(size)), size(size), top(-1) {}

  void push(int data) {
    if (top == size - 1) {
      cout << "Stack overflow" << endl;
    } else {
      top++;
      arr[top] = data;
    }
    // O(1)
  }
  void pop() {
    if (top == -1) {
      cout << "Stack underflow" << endl;
    } else {
      top--;
    }
    // O(1)
  }
  bool isEmpty() {
    if (top == -1) {
      return true;
    } else {
      return false;
    }
    // O(1)
  }

  int getTop() {
    if (top == -1) {
      cout << "Stack is empty" << endl;
      return -1;
    } else {
      return arr[top];
    }
    // O(1)
  }

  int getSize() {
    return top + 1;
    // O(1)
  }

  void print() {
    cout << "Top: " << top << endl;
    cout << "Top Element: " << getTop() << endl;
    cout << "Stack: ";
    for (int i = 0; i < getSize(); i++) {
      cout << arr[i] << " ";
    }
    cout << endl << endl;
  }
};

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  Stack st(5);
  st.push(1);
  st.print();

  st.push(2);
  st.print();

  st.push(3);
  st.print();

  st.pop();
  st.print();

  cout << "Top element: " << st.getTop() << endl;
  cout << "size of stack: " << st.getSize() << endl;

  if (st.isEmpty()) {
    cout << "stack is empty" << endl;
  } else {
    cout << "stack is not empty" << endl;
  }

  return 0;
}
