#include <bits/stdc++.h>

using namespace std;


// Stack using dynamic array
class Stack
{
public:
    int *a;
    int stack_size;
    int arry_cap;
    Stack()
    {
        a= new int[1];
        arry_cap = 1;
        stack_size = 0;
    }

    //Making the array capaciry multiplied by 2.
    void increase_size()
    {
        int *tmp;
        tmp = new int[arry_cap *2];
        for (int i = 0; i < arry_cap; i++)
            tmp[i] = a[i];
        swap(a, tmp);
        delete []tmp;
        arry_cap = arry_cap * 2;
    }
    // Add an element in the stack - O(1);
    void push(int val)
    {
        if (stack_size +1 > arry_cap)
        {
            increase_size();
        }
        stack_size = stack_size+1;
        a[stack_size -1] = val;
    }

    //Delete the topmost element from the stack. O(1);
    void pop()
    {
        if(stack_size ==0)
        {
            cout<< "Stack is Empty!\n";
            return;
        }
        a[stack_size -1] = 0;
        stack_size = stack_size-1;
    }

    // Return the top element from the stack
    int top()
    {
        if (stack_size == 0)
        {
            cout << "Stack is Empty!\n";
            return -1;
        }
        return a[stack_size -1];
    }
};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<'\n';
    st.push(4);
    cout<<st.top()<<'\n';
    st.push(5);
    cout<<st.top()<<'\n';

    st.pop();
    cout <<st.top() << "\n";
    st.pop();
    cout <<st.top() << "\n";
    st.pop();
    cout <<st.top() << "\n";

    return 0;
}
