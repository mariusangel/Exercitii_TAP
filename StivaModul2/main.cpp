#include <iostream>
#include <stdexcept>

class Stack {
public:
    // Constructor
    Stack(int maxSize) : maxSize(maxSize), topIndex(-1) {
        data = new int[maxSize];
    }

    // Destructor
    virtual ~Stack() {
        delete[] data;
    }

    // Verifica dacă stiva este goală
    virtual bool isEmpty() const = 0;

    // Verifica dacă stiva este plină
    virtual bool isFull() const = 0;

    // Adaugă un element în stivă
    virtual void push(int value) = 0;

    // Elimină un element din stivă
    virtual void pop() = 0;

    // Returnează elementul din vârful stivei fără a-l elimina
    virtual int peek() const = 0;

    // Afișează conținutul stivei
    virtual void print() const = 0;

protected:
    int* data;       // Vector pentru stocarea datelor
    int maxSize;     // Dimensiunea maximă a stivei
    int topIndex;    // Indexul elementului din vârful stivei
};

class ConcreteStack : public Stack {
public:
    // Constructor
    ConcreteStack(int maxSize) : Stack(maxSize) {}

    // Verifica dacă stiva este goală
    bool isEmpty() const override {
        return topIndex == -1;
    }

    // Verifica dacă stiva este plină
    bool isFull() const override {
        return topIndex == maxSize - 1;
    }

    // Adaugă un element în stivă
    void push(int value) override {
        if (isFull()) {
            throw std::overflow_error("Stack is full");
        }
        data[++topIndex] = value;
    }

    // Elimină un element din stivă
    void pop() override {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty");
        }
        --topIndex;
    }

    // Returnează elementul din vârful stivei fără a-l elimina
    int peek() const override {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty");
        }
        return data[topIndex];
    }

    // Afișează conținutul stivei
    void print() const override {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
        } else {
            std::cout << "Stack: ";
            for (int i = 0; i <= topIndex; ++i) {
                std::cout << data[i] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    // Exemplu de utilizare
    ConcreteStack myStack(5);

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    myStack.print(); // Output: Stack: 1 2 3

    std::cout << "Top element: " << myStack.peek() << std::endl; // Output: Top element: 3

    myStack.pop();
    myStack.print(); // Output: Stack: 1 2

    return 0;
}
