#include <bits/stdc++.h>

using namespace std;

// Template based stack using dynamic array
template <class T>

// Stack using dynamic array
class Stack
{
public:
    T *a;
    int stack_size;
    int arry_cap;
    Stack()
    {
        a = new T[1];
        arry_cap = 1;
        stack_size = 0;
    }

    // Making the array capaciry multiplied by 2.
    void increase_size()
    {
        T *tmp;
        tmp = new T[arry_cap * 2];
        for (int i = 0; i < arry_cap; i++)
            tmp[i] = a[i];
        swap(a, tmp);
        delete[] tmp;
        arry_cap = arry_cap * 2;
    }
    // Add an element in the stack - O(1);
    void push(T val)
    {
        if (stack_size + 1 > arry_cap)
        {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }

    // Delete the topmost element from the stack. O(1);
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is Empty!\n";
            return;
        }
        stack_size = stack_size - 1;
    }

    // Return the top element from the stack
    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is Empty!\n";
            // assert(false);
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<double>st;
    st.push(3.5);
    st.push(2.6);
    st.push(7.8);

    cout <<st.top()<<"\n";
    st.pop();
    cout <<st.top()<<"\n";
    st.pop();
    cout <<st.top()<<"\n";
    st.pop();

    cout<< st.top() <<'\n';

    Stack<char> st2;
    st2.push('a');
    st2.push('b');
    st2.push('c');

    cout <<st2.top()<<"\n";
    st2.pop();
    cout <<st2.top()<<"\n";
    st2.pop();
    cout <<st2.top()<<"\n";
    st2.pop();

    cout<< st2.top() <<'\n';

    return 0;
}
