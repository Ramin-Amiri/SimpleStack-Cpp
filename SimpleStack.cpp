#include <iostream>
using namespace std;

class SimpleStack {
private:
    string arr[5]; // Our "pile" (max 5 words)
    int top = -1;  // -1 means the pile is empty

public:
    void push(string word) {
        if (top < 4) {         // Check if stack is full
            arr[++top] = word; // Move top up and add word
            cout << "Typed: " << word << endl;
        }
    }

    void pop() {
        if (top >= 0) {        // Check if stack has items
            cout << "Undid: " << arr[top--] << endl; // Show word and move top down
        }
    }

    void peek() {
        if (top >= 0) cout << "Current word: " << arr[top] << endl;
    }
};

int main() {
    SimpleStack myDoc;

    myDoc.push("Apple");
    myDoc.push("Banana");
    myDoc.peek();  // Shows Banana

    myDoc.pop();   // Removes Banana
    myDoc.peek();  // Shows Apple

    return 0;
}
