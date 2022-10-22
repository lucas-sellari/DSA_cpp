/*
	To do better: dynamically define the stack size on the constructor
*/

#include <iostream>
#include <string>
#include <cstdlib>

class Stack {
  private:
		int top;
		int array[5];

	public:
		Stack() {
			this->top = -1;
			// initialize all the positions with 0
			for(int i = 0; i < 5; i++) this->array[i] = 0;
		}

		bool isEmpty() {
			return this->top == -1;
		}

		bool isFull() {
			return this->top == 4;
		}

		void push(int value) {
			if(this->isFull()) std::cout << "Stack Overflow" << std::endl;
			else {
				this->top++;
				this->array[this->top] = value;
			}
		}

		int pop() {
			if(this->isEmpty()) {
				std::cout << "Stack Underflow" << std::endl;
				return 0;
			}
			int popValue = this->array[this->top];
			this->array[this->top] = 0;
			this->top--;
			return popValue;
		}

		int count() {
			return this->top + 1;
		}

		int peek(int position) {
			if(this->isEmpty()) {
				std::cout << "Stack Underflow" << std::endl;
				return 0;
			}
			return this->array[position];
		}

		void change(int position, int value) {
			if(this->top < position) {
				std::cout << "You can only change values of occupied positions" << std::endl;
				return;
			}
			this->array[position] = value;
			std::cout << "Value changed at location " << position << std::endl;
		}

		void display() { // from last to the first values
			std::cout << "The values in the stack are: " << std::endl;

			for(int i = 4; i >= 0; i--) std::cout << this->array[i] << std::endl;
		}

};

int main() {
	Stack myStack;
	int option, position, value;

	do {
		std::cout << "What operation do you want to perform? Enter 0 to exit." << std::endl;
		std::cout << "1. Push(value)" << std::endl;
		std::cout << "2. Pop()" << std::endl;
		std::cout << "3. isEmpty()" << std::endl;
		std::cout << "4. isFull()" << std::endl;
		std::cout << "5. peek(position)" << std::endl;
		std::cout << "6. count()" << std::endl;
		std::cout << "7. change(position, value)" << std::endl;
		std::cout << "8. display()" << std::endl;
		std::cout << "9. Clear Screen" << std::endl << std::endl;

		std::cin >> option;

		switch(option) {
			case 0:
				break;
			case 1:
				std::cout << "Enter an item to push: " << std::endl;
				std::cin >> value;
				myStack.push(value);
				break;
			case 2:
				std::cout << "Poped value: " << myStack.pop() << std::endl;
				break;
			case 3:
				if(myStack.isEmpty()) std::cout << "Stack is empty" << std::endl;
				else std::cout << "Stack is not empty" << std::endl;
				break;
			case 4:
				if(myStack.isFull()) std::cout << "Stack is full" << std::endl;
				else std::cout << "Stack is not full" << std::endl;
				break;
			case 5:
				std::cout << "Enter a position: " << std::endl;
				std::cin >> position;
				std::cout << "Peek value at position " << position << ": " << myStack.peek(position) << std::endl;
				break;
			case 6:
				std::cout << "Count: " << myStack.count() << std::endl;
				break;
			case 7:
				std::cout << "Enter a position: " << std::endl;
				std::cin >> position;
				std::cout << "Enter a new value: " << std::endl;
				std::cin >> value;
				myStack.change(position, value);
				break;
			case 8:
				myStack.display();
				break;
			case 9:
				system("clear");
				break;
			default:
				std::cout << "Enter a valid option number" << std::endl;
		}
	} while(option != 0);

  return 0;
}