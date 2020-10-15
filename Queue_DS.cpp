#include <iostream>

using namespace std;

class Queue {
private:
	int rear, front, arr[5];

public:
	Queue() {
		rear = front = -1;
		for (int i = 0; i < 5; i++) {
			arr[i] = 0;
		}
	}
	bool isFull() {
		if (rear == 4) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isEmpty() {
		if (rear == -1 &&front==-1) {
			return true;
		}
		else {
			return false;
		}
	}
	int enQueue(int entity) {
		if (isEmpty()) {
			rear = 0;
			front = 0;
			arr[rear] = entity;
		}else{
			rear++;
			arr[rear] = entity;
		}
		return 0;
	}
	int deQueue() {
		int de_value,help_value,rearsaved;
		rearsaved = rear + 2;
		if (isEmpty()) {
			cout << "Queue is Empty" << endl;
			return 0;
		}else{
			de_value = arr[front];
			for (int i = 1;i < rearsaved;i++) {
				help_value = arr[i];
				arr[i - 1] = help_value;
			}
			rear--;
			cout << "deQueued entity is : " << de_value << endl;
			return 0;
		}
	}
	void count() {
		isEmpty() ? cout << "Queue count : " << 0 << endl : cout << "Queue count : " << rear - front + 1 << endl;
	}
	void display() {
		cout << "Queue : " << endl;
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " " << flush;
		}
		cout << endl;
	}
};
int main()
{
	Queue queue;

	int option, value;

	do {

		std::cout << "Choose an operation / 0 to exit" << std::endl;
		std::cout << "1.enQueue" << std::endl;
		std::cout << "2.deQueue " << std::endl;
		std::cout << "3.isFull " << std::endl;
		std::cout << "4.isEmpty " << std::endl;
		std::cout << "5.count " << std::endl;
		std::cout << "6.display " << std::endl;
		std::cout << "7.clear " << std::endl;
		std::cin >> option;

		switch (option)
		{
		case 0:
			break;
		case 3:
			queue.isFull() ? cout << "Queue is full." << endl : cout << "Queue is not full." << endl;
			cout << "------------------------------------" << endl;
			break;
		case 4:
			queue.isEmpty() ? cout << "Queue is Empty." << endl : cout << "Queue is not Empty." << endl;
			cout << "------------------------------------" << endl;
			break;
		case 1:
			if (queue.isFull()) {
				cout << "Queue is full" << endl;
			}
			else {
				cout << "Please enter a entity :" << flush;
				cin >> value;
				queue.enQueue(value);
			}
			cout << "------------------------------------" << endl;
			break;
		case 2:
			queue.deQueue();
			cout << "------------------------------------" << endl;
			break;
		case 5:
			queue.count();
			cout << "------------------------------------" << endl;
			break;
		case 6:
			queue.display();
			cout << "------------------------------------" << endl;
			break;
		case 7:
			system("cls");
			break;
		default:
			cout << "Please Enter a valid option" << endl;
		}

	} while (option != 0);

}


