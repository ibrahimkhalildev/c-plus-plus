#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 10;

template <class T>
class Stack
{
public:
    T a[MAX_SIZE];
    int stack_size;

    Stack()
    {
        stack_size = 0;
    }

    void push(T val)
    {
        if (stack_size + 1 > MAX_SIZE)
        {
            cout << "Stack is Full!\n";
            return;
        }
        a[stack_size] = val;
        stack_size++;
    }

    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is Empty!\n";
            return;
        }
        stack_size--;
    }

    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is Empty!\n";
            return T();
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<int> st;
    st.push(3);
    cout << st.top() << '\n';
    st.push(4);
    cout << st.top() << '\n';
    st.push(5);
    cout << st.top() << '\n';
    cout << endl;

    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    return 0;
}