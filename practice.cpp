#include <iostream>
#include <vector>

using namespace std;

enum class DataType {
    CHAR,
    INT,
    DOUBLE
};

struct StackElement {
    DataType type;
    union {
        char c;
        int i;
        double d;
    } data;

    StackElement(char value) : type(DataType::CHAR) { data.c = value; }
    StackElement(int value) : type(DataType::INT) { data.i = value; }
    StackElement(double value) : type(DataType::DOUBLE) { data.d = value; }
};

class MixedStack {
private:
    vector<StackElement> stack;

public:
    void push(char value) {
        stack.push_back(StackElement(value));
    }

    void push(int value) {
        stack.push_back(StackElement(value));
    }

    void push(double value) {
        stack.push_back(StackElement(value));
    }

    StackElement pop() {
        if (stack.empty()) {
            throw out_of_range("Stack is empty");
        }
        StackElement top = stack.back();
        stack.pop_back();
        return top;
    }

    bool isEmpty() const {
        return stack.empty();
    }
};

void printElement(const StackElement& element) {
    switch (element.type) {
        case DataType::CHAR:
            cout << "CHAR: " << element.data.c << endl;
            break;
        case DataType::INT:
            cout << "INT: " << element.data.i << endl;
            break;
        case DataType::DOUBLE:
            cout << "DOUBLE: " << element.data.d << endl;
            break;
    }
}

int main() {
    MixedStack stack;
    stack.push('a');
    stack.push(42);
    stack.push(3.14);

    while (!stack.isEmpty()) {
        StackElement element = stack.pop();
        printElement(element);
    }

    return 0;
}
