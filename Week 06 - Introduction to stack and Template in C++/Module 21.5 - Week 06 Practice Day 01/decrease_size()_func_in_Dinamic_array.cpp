#include <bits/stdc++.h>

using namespace std;

template <class T>
class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a = new T[1];
        array_cap = 1;
        stack_size = 0;
    }
    ~Stack()
    {
        delete[] a;
    }

    // Array capacity multiplied by 2.
    void increase_size()
    {
        T *tmp;
        tmp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a, tmp);
        delete[] tmp;
        array_cap = array_cap * 2;
    }

    // Shrink the array capacity by half.
    void decrease_size()
    {
        if (array_cap > 1)
        {
            T *tmp;
            tmp = new T[array_cap / 2];
            for (int i = 0; i < stack_size; i++)
                tmp[i] = a[i];
            swap(a, tmp);
            delete[] tmp;
            array_cap = array_cap / 2;
        }
    }

    // Add an element in the stack - O(1)
    void push(T val)
    {
        if (stack_size + 1 > array_cap)
            {
                increase_size();
            }
        stack_size = stack_size + 1;
        a[stack_size - 1] = val;
    }

    // Add an element in the stack - O(1)
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        stack_size = stack_size - 1;
        if (stack_size < array_cap / 2)
        {
            decrease_size();
        }
    }

    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is empty!\n";
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
