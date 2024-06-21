#include <iostream>
#include <stack>

using namespace std;

class QueueUsingOneStack {
private:
    stack<int> s;

public:
    // Function to push element into the queue
    void enqueue(int x) {
        // Push the element into the stack
        s.push(x);
    }

    // Recursive function to dequeue element from the queue
    int dequeue() {
        // Base case: if the stack is empty, return -1 (indicating underflow)
        if (s.empty()) {
            return -1;
        }

        // Recursive case: if the stack is not empty, pop the top element
        int topElement = s.top();
        s.pop();

        // Base case: if the stack becomes empty after popping, return the popped element
        if (s.empty()) {
            return topElement;
        }

        // Recursive call to dequeue the rest of the elements
        int dequeuedElement = dequeue();

        // Push the topElement back into the stack
        s.push(topElement);

        // Return the dequeued element
        return dequeuedElement;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return s.empty();
    }
};

int main() {
    QueueUsingOneStack q;

    // Enqueue some elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Dequeue elements and print them
    cout << q.dequeue() << endl; // Should print 10
    cout << q.dequeue() << endl; // Should print 20

    // Enqueue more elements
    q.enqueue(40);
    q.enqueue(50);

    // Dequeue elements and print them
    cout << q.dequeue() << endl; // Should print 30
    cout << q.dequeue() << endl; // Should print 40
    cout << q.dequeue() << endl; // Should print 50

    // Check if the queue is empty
    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
