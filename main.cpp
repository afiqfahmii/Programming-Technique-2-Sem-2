#include <iostream>
using namespace std;

const int NUM_STACK = 3; // Number of stacks

// Node structure for stack
struct Node {
    string costume;
    Node* next;
};

// Stack class
class Stack {
private:
    Node* top;
public:
    Stack() { top = NULL; }
    void push(string costume);
    void pop();
    void display();
    bool isEmpty();
};

// Push a costume to the stack
void Stack::push(string costume) {
    Node* temp = new Node;
    temp->costume = costume;
    temp->next = top;
    top = temp;
}

// Pop a costume from the stack
void Stack::pop() {
    if(isEmpty()) {
        cout << "The stack is empty" << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

// Display costumes in the stack
void Stack::display() {
    if(isEmpty()) {
        cout << "No costumes in the stack" << endl;
        return;
    }
    Node* temp = top;
    while(temp != NULL) {
        cout << temp->costume << endl;
        temp = temp->next;
    }
}

// Check if the stack is empty
bool Stack::isEmpty() {
    return top == NULL;
}

int main() {
    Stack stacks[NUM_STACK]; // Create an array of objects of Stack class
    int choice, stack_choice;
    string costume;

    while(1) {
        cout << "Menu:" << endl;
        cout << "1. Display costumes" << endl;
        cout << "2. Add costume to cart" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout<<"Select the stack you want to display"<<endl;
                cout<<"1. Batman"<<endl;
                cout<<"2. Superman"<<endl;
                cout<<"3. Wonder Woman"<<endl;
                cin>>stack_choice;
                stacks[stack_choice-1].display();
                break;
            case 2:
                cout<<"Select the stack you want to add the costume"<<endl;
                cout<<"1. Batman"<<endl;
                cout<<"2. Superman"<<endl;
                cout<<"3. Wonder Woman"<<endl;
                cin>>stack_choice;
                cout << "Enter costume name: ";
                cin >> costume;
                stacks[stack_choice-1].push(costume);
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
    return 0;
}
