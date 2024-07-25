#include <iostream>
#include <vector>
#include <variant>

using namespace std;

namespace CustomStack {

    enum class DataType {
        CHAR,
        INT,
        DOUBLE
    };

    struct StackElement {
        DataType type;
        variant<char, int, double> value;
    };

    class Stack {
    private:
        vector<StackElement> elements;

    public:
        void push(char val) {
            elements.push_back({DataType::CHAR, val});
        }

        void push(int val) {
            elements.push_back({DataType::INT, val});
        }

        void push(double val) {
            elements.push_back({DataType::DOUBLE, val});
        }

        StackElement pop() {
            if (elements.empty()) {
                throw out_of_range("Stack is empty");
            }
            StackElement topElement = elements.back();
            elements.pop_back();
            return topElement;
        }

        bool isEmpty() const {
            return elements.empty();
        }

        void display() const {
            for (const auto& elem : elements) {
                if (elem.type == DataType::CHAR) {
                    cout << "CHAR: " << get<char>(elem.value) << endl;
                } else if (elem.type == DataType::INT) {
                    cout << "INT: " << get<int>(elem.value) << endl;
                } else if (elem.type == DataType::DOUBLE) {
                    cout << "DOUBLE: " << get<double>(elem.value) << endl;
                }
            }
        }
    };
}

int main() {
    CustomStack::Stack stack;

    stack.push('a');
    stack.push(123);
    stack.push(45.67);

    stack.display();

    while (!stack.isEmpty()) {
        CustomStack::StackElement elem = stack.pop();
        if (elem.type == CustomStack::DataType::CHAR) {
            cout << "Popped CHAR: " << get<char>(elem.value) << endl;
        } else if (elem.type == CustomStack::DataType::INT) {
            cout << "Popped INT: " << get<int>(elem.value) << endl;
        } else if (elem.type == CustomStack::DataType::DOUBLE) {
            cout << "Popped DOUBLE: " << get<double>(elem.value) << endl;
        }
    }

    return 0;
}
