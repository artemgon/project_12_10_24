#include "classes.h"

int main()
{
	StackList stack;
	for (int i = 0; i < 10; i++)
	{
		stack.push(10 - i);
	}
	cout << "Top element: " << stack.top() << endl;
	stack.pop();
	cout << endl;
	cout << "Stack after popping" << endl;
	stack.display();
	cout << endl;
	cout << "Size of stack: " << stack.size() << endl;
	cout << endl;
	bool variable = stack.isEmpty();
	cout << "It is " << boolalpha << variable << " that stack is empty" << endl;
	cout << endl;
	StackList stack2, stack3, stack4, stack5, stack6, stack7;
	for (int i = 0; i < 10; i++)
	{
		stack2.push(10 - i);
	}
	cout << "Stack 2" << endl;
	stack2.display();
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		stack3.push(20 - i);
	}
	cout << "Stack 3" << endl;
	stack3.display();
	cout << endl;
	stack4 = stack2 + stack3;
	cout << "Stack 4 after adding stack 2 and stack 3" << endl;
	stack4.display();
	cout << endl;
	stack5.push(10);
	stack5.push(20);
	stack5.push(30);
	stack5.push(40);
	stack5.push(50);
	stack6.push(30);
	stack6.push(40);
	stack6.push(50);
	stack6.push(60);
	stack6.push(70);
	stack7 = stack5 * stack6;
	cout << "Stack 7 after multiplying stack 5 and stack 6" << endl;
	stack7.display();
	cout << endl;
	return 0;
}